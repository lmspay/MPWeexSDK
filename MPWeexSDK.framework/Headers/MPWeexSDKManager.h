//
//  MPWeexSDKManager.h
//  MPWeexSDK
//
//  Created by Donney on 2019/11/29.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WXConst.h"

@class WXCoreConfiguration;
@class WXSDKInstance;
@class WXMPInfoModel;

/** 小程序足迹处理类型 */
typedef NS_ENUM(NSInteger, WXMPOperationFootprintType) {
    /** 添加小程序足迹 */
    WXMPOperationFootprintTypeAdd = 1,
    /** 移除小程序足迹 */
    WXMPOperationFootprintTypeRemove,
    /** 小程序访问日志 */
    WXMPOperationFootprintTypeAccessLog,
    /** 删除小程序访问日志 */
    WXMPOperationFootprintTypeRemoveAccessLog
};

/** 小程序类型 */
typedef NS_ENUM(NSInteger, WXMPType) {
    /** 宿主小程序 */
    WXMPTypeHost,
    /** 普通小程序*/
    WXMPTypeNormal,
    /** 系统小程序*/
    WXMPTypeSystem
};

/** 系统小程序类型 */
typedef NS_ENUM(NSInteger, WXMPSystemType) {
    /** 系统宿主小程序 */
    WXMPSystemTypeHost,
    /** 系统普通小程序 */
    WXMPSystemTypeNormal,
    /** 系统游戏小程序 */
    WXMPSystemTypeGame
};

/** 小程序上架状态 */
typedef NS_ENUM(NSInteger, WXMPStoreStatus) {
    /** 上架 */
    WXMPStoreStatusTheUpper = 1,
    /** 下架 */
    WXMPStoreStatusTheLowerFrame
};

/** 小程序离线访问支持类型 */
typedef NS_ENUM(NSInteger, WXMPOfflineSupportType) {
    /** 不支持离线访问 */
    WXMPOfflineSupportTypeNotCan,
    /** 支持离线访问 */
    WXMPOfflineSupportTypeCan
};

/** 当前实例状态 */
typedef NS_ENUM(NSInteger, WXInstanceState) {
    WXInstanceAppear = 100,
    WXInstanceDisappear,
    WXInstanceForeground,
    WXInstanceBackground,
    WXInstanceMemoryWarning,
    WXInstanceBindChanged,
    WXInstanceDestroy
};

/** 开户回调 */
typedef void (^WXOpenAccountCallback)(BOOL sucessed, NSError *error);
/** 接口请求回调 */
typedef void (^WXAPIResponseCallback)(BOOL ok, NSInteger statusCode, id data, NSDictionary *headers);
/** 页面返回回调 */
typedef void (^WXPageBackCallback)(void);
///** 小程序足迹状态改变回调 */
//typedef void (^WXFootprintChangeCallback)(WXMPOperationFootprintType footprintType);


@interface MPWeexSDKManager : NSObject
/** 基础参数配置 */
@property (strong, nonatomic) WXCoreConfiguration *coreConfiguration;
/** 是否显示彩蛋 */
@property (assign, readonly, nonatomic) BOOL easterEggShow;
/** 是否成功登录 */
@property (assign, readonly, nonatomic) BOOL isLogined;
/** sdk实例 */
@property (assign, readonly, nonatomic) WXSDKInstance *weexInstance;
///** 足迹状态改变回调 */
//@property (copy, nonatomic) WXFootprintChangeCallback footprintChangeCallback;

+ (MPWeexSDKManager *)sharedInstance;

/** 初始化SDK */
- (void)initialize;
/** 设置APP ID和License Key */
- (void)setAppID:(NSString *)appID license:(NSString *)licenseKey;
/** 设置小程序API地址 */
- (void)setBasePath:(NSString *)basePath;
/** 注册自定义处理模块 */
- (void)registerHandler:(id)handler withProtocol:(Protocol *)protocol;
/** 设置页面返回监听 (/pages/search.js) */
- (void)setPageBackListenWithPage:(NSString *)page completionHandler:(WXPageBackCallback)callback;
/** 更新实例状态 */
- (void)updateInstanceStateWithInstance:(WXSDKInstance *)instance state:(WXInstanceState)state;

/// 跳转至小程序
/// @param sourceViewController 源控制器
/// @param mpID 小程序ID
/// @param logo 小程序图标
/// @param systemType 小程序系统类型 0宿主、1普通、 2游戏
/// @param offlineSupportType 是否支持离线访问 0不支持、1支持 不支持离线访问的，需要先登录
- (void)presentMPWithSourceViewController:(UIViewController *)sourceViewController
                                     mpID:(NSString *)mpID
                                     logo:(NSString *)logo
                               systemType:(WXMPSystemType)systemType
                       offlineSupportType:(WXMPOfflineSupportType)offlineSupportType;

/// 跳转至小程序
/// @param sourceViewController 源控制器
/// @param mpID 小程序ID
/// @param logo 小程序图标
/// @param systemType 小程序系统类型 0宿主、1普通、 2游戏
/// @param offlineSupportType 是否支持离线访问 0不支持、1支持 不支持离线访问的，需要先登录
/// @param isActivity 是否有代金券方案
/// @param activityInfo 代金券方案模型
- (void)presentMPWithSourceViewController:(UIViewController *)sourceViewController
                                     mpID:(NSString *)mpID
                                     logo:(NSString *)logo
                               systemType:(WXMPSystemType)systemType
                       offlineSupportType:(WXMPOfflineSupportType)offlineSupportType
                               isActivity:(BOOL)isActivity
                             activityInfo:(NSDictionary *)activityInfo;

/// 跳转至审核小程序
/// @param sourceViewController 源控制器
/// @param mpInfo 审核小程序信息
- (void)presentVerifyMPWithSourceViewController:(UIViewController *)sourceViewController
                                         mpInfo:(WXMPInfoModel *)mpInfo;

/// 跳转到指定页面
/// @param sourceViewController 源控制器
/// @param page 指定页面
- (void)presentMPPageWithSourceViewController:(UIViewController *)sourceViewController
                                       mpPage:(WXMPPage)page;

/// 登录成功后，将用户信息同步至小程序平台
/// @param platformUID APP商户应用的用户ID
/// @param phoneNo APP商户应用的用户手机号码
/// @param callback 回调
- (void)loginWithPlatformUID:(NSString *)platformUID
                     phoneNo:(NSString *)phoneNo
           completionHandler:(WXOpenAccountCallback)callback;

/// 退出登录时，通知SDK
- (void)logout;

/// 获取推荐的小程序列表
/// @param offset 当前数据偏移
/// @param limit 获取条数
/// @param tag 推荐位标识
/// @param isMerge 是否合并显示
/// @param callback 回调 (required)
- (void)getRecommendMPListWithOffset:(NSInteger)offset
                               limit:(NSInteger)limit
                                 tag:(NSString *)tag
                             isMerge:(BOOL)isMerge
                   completionHandler:(WXAPIResponseCallback)callback;

/// 搜索小程序
/// @param name 小程序名称 (required)
/// @param offset 当前数据偏移
/// @param limit 获取条数
/// @param callback 回调 (required)
- (void)searchMPWithName:(NSString *)name
                  offset:(NSInteger)offset
                   limit:(NSInteger)limit
       completionHandler:(WXAPIResponseCallback)callback;

/// 获取最近使用的小程序列表
/// @param offset 当前数据偏移
/// @param limit 获取条数
/// @param callback 回调 (required)
- (void)getRecentMPListWithOffset:(NSInteger)offset
                            limit:(NSInteger)limit
                completionHandler:(WXAPIResponseCallback)callback;


/// 获取我的小程序列表
/// @param offset 当前数据偏移
/// @param limit 获取条数
/// @param callback 回调 (required)
- (void)getMyMpListWithOffset:(NSInteger)offset
                        limit:(NSInteger)limit
            completionHandler:(WXAPIResponseCallback)callback;

/// 添加小程序足迹
/// @param mpid 小程序ID (required)
/// @param type 操作类型 (required)
/// @param callback 回调 (required)
- (void)addFootprintWithMpID:(NSString *)mpid
                        type:(WXMPOperationFootprintType)type
           completionHandler:(WXAPIResponseCallback)callback;


/// 重置URL
/// @param url 原URL
/// @param baseUrl 主URL
/// @param resourceType 资源类型
- (NSURL *)rewriteURL:(NSString *)url
              baseURL:(NSString *)baseUrl
     withResourceType:(NSUInteger)resourceType;
@end


@interface MPWeexSDKManager (Deprecated)

/// 登录成功后，将用户信息同步至小程序平台
/// platformuid及phoneno必传，其它为可选参数
/// 此操作为异步操作，如果需要监听SDK是否已经完成，可以通过callback监听
/// @param uid APP商户应用的用户ID  (required)
/// @param phoneNo 手机号码  (required)
/// @param realName 真实姓名
/// @param gender 性别 0女 1男 2未设置
/// @param idType 证件类型 01 身份证
/// @param idNo 证件号
/// @param nickName 昵称
/// @param avatar 头像
/// @param bankNo 银行卡号 多个逗号隔开
/// @param callback 异步回调，如果需要等待SDK完成，则可通过回调监听  (required)
- (void)loginWithPlatformUID:(NSString *)uid
                     phoneNo:(NSString *)phoneNo
                    realName:(NSString *)realName
                      gender:(NSNumber *)gender
                      idType:(NSString *)idType
                        idNo:(NSString *)idNo
                    nickName:(NSString *)nickName
                      avatar:(NSString *)avatar
                      bankNo:(NSString *)bankNo
           completionHandler:(WXOpenAccountCallback)callback DEPRECATED_MSG_ATTRIBUTE("Please use loginWithPlatformUID:phoneNo:completionHandler: method instead.");;

/// 开户
/// @param uid 用户编号 (required)
/// @param phoneNo 用户手机号码 (required)
/// @param realName 用户真实姓名
/// @param gender 用户性别(0女/1男)
/// @param idType 证件类型
/// @param idNo 证件号码
/// @param nickName 昵称
/// @param avatar 头像地址
/// @param bankNo 银行卡号
/// @param callback 回调 (required)
- (void)openAccountWithAppUID:(NSString *)uid
                      phoneNo:(NSString *)phoneNo
                     realName:(NSString *)realName
                       gender:(NSNumber *)gender
                       idType:(NSString *)idType
                         idNo:(NSString *)idNo
                     nickName:(NSString *)nickName
                       avatar:(NSString *)avatar
                       bankNo:(NSString *)bankNo
            completionHandler:(WXOpenAccountCallback)callback DEPRECATED_MSG_ATTRIBUTE("Please use loginWithPlatformUID:phoneNo:realName:gender:idType:idNo:nickName:avatar:bankNo:completionHandler method instead.");
@end

