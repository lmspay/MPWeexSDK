//
//  WXCoreConfiguration.h
//  MPWeexSDK
//
//  Created by Donney on 2019/9/28.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WXCoreConfiguration : NSObject
/** 盐值 */
@property (copy, nonatomic) NSString *salt;
/** 用户唯一标识 */
@property (copy, nonatomic) NSString *unionid;
/** 用户私钥 */
@property (copy, nonatomic) NSString *privatekey;

/** License Key*/
@property (copy, nonatomic) NSString *license;
/** APP ID */
@property (copy, nonatomic) NSString *appID;
/** API PATH */
@property (copy, nonatomic) NSString *basePath;

/** 默认APP开户UID */
@property (copy, readonly, nonatomic) NSString *defaultAppUID;
/** 默认APP开户手机号 */
@property (copy, readonly, nonatomic) NSString *defaultAppPhoneNo;
/** 默认小程序名 */
@property (copy, readonly, nonatomic) NSString *defaultMiniName;

/** Playground MPID */
@property (copy, readonly, nonatomic) NSString *playgroundMpID;
/** 在线调试小程序ID */
@property (copy, readonly, nonatomic) NSString *onlineDebugMpID;
/** 系统小程序ID */
@property (copy, readonly, nonatomic) NSString *systemMpID;
/** 支付实例小程序ID */
@property (copy, readonly, nonatomic) NSString *payDemoMpID;

/** 系统小程序信息 */
@property (strong, readonly, nonatomic) NSMutableDictionary *rootMpInfo;

/** 小程序维护原因 */
@property (strong, readonly, nonatomic) NSArray *maintainReasons;
@end
