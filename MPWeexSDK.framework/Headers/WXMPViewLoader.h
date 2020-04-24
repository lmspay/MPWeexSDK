//
//  WXMPViewLoader.h
//  MPWeexSDK
//
//  Created by Donney on 2019/10/21.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WXSDKInstance;

/** 小程序视图加载回调 */
typedef void (^WXLoadMPViewCallback)(UIView *view, NSError *error);
/** 小程序信息加载回调 */
typedef void (^WXLoadMPInfoCallback)(NSMutableDictionary *info, NSError *error);

@interface WXMPViewLoader : NSObject
/** Weex SDK 实例 */
@property (strong, nonatomic) WXSDKInstance *wxSDKInstance;
/** 小程序ID  (一般不需要设置，默认使用系统小程序ID) */
@property (copy, nonatomic) NSString *mpid;
/** 加载页面  (如:/index.js) */
@property (copy, nonatomic) NSString *page;
/** 是否显示加载指示器 */
@property (assign, nonatomic) BOOL isShowLoadIndicator;
/** 加载指示器颜色 */
@property (strong, nonatomic) UIColor *loadIndicatorColor;
/** 呈现小程序视图的控制器 */
@property (weak, nonatomic) UIViewController *targetViewController;
/** 小程序视图的父视图 */
@property (strong, nonatomic) UIView *parentView;
/** 小程序视图的Frame */
@property (assign, nonatomic) CGRect mpViewFrame;
/** 小程序页面参数 */
@property (strong, nonatomic) NSMutableDictionary *pageParams;
/** 小程序视图加载回调 */
@property (copy, nonatomic) WXLoadMPViewCallback loadViewCompletionHandler;
/** 小程序信息加载回调 */
@property (copy, nonatomic) WXLoadMPInfoCallback loadInfoCompletionHandler;

/** 加载小程序视图 */
- (void)loadMPView;
/** 根据指定的小程序信息加载小程序信息 */
- (void)loadMPInfoWithMpInfo:(NSMutableDictionary *)mpInfo;
/** 根据指定的小程序信息加载小程序视图  */
- (void)loadMPViewWithMPInfo:(NSMutableDictionary *)mpInfo;
/** 根据指定的小程序信息加载已缓存的小程序视图 */
- (void)loadCachedMPViewWithMPInfo:(NSMutableDictionary *)mpInfo;
/** 根据指定的页面参数加载小程序视图  */
- (void)loadMPViewWithPageParams:(NSMutableDictionary *)pageParams;
/** 在线调试  */
- (void)loadDebugMPViewWithMPInfo:(NSMutableDictionary *)mpInfo;
/** 刷新小程序视图  */
- (void)refreshMPView;
/** 释放加载器 */
- (void)destroyLoader;
@end

