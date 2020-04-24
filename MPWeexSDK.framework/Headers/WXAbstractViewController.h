//
//  WXAbstractViewController.h
//  MPWeexSDK
//
//  Created by Donney on 2019/1/21.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <UIKit/UIKit.h>
//#import "WXLocationManager.h"

@class WXMPViewLoader;
@class WXNavigationBarLeftView;
@class WXSDKInstance;

@interface WXAbstractViewController : UIViewController

/** 是否审核小程序模式 (审核小程序模式，不允许添加到我的小程序、不允许添加足迹 ) */
@property (assign, nonatomic) BOOL isVerifyMode;
/** 小程序参数 */
@property (strong, nonatomic) NSMutableDictionary *params;
/** 小程序页面参数 */
@property (strong, nonatomic) NSMutableDictionary *pageParams;
/** 小程序主题参数 */
@property (strong, nonatomic) NSMutableDictionary *themeParams;
/** 小程序视图加载器 */
@property (strong, nonatomic) WXMPViewLoader *mpViewLoader;
/** SDK实例 */
@property (strong, nonatomic) WXSDKInstance *wxSDKInstance;
/** 导航栏左视图 */
@property (strong, nonatomic) WXNavigationBarLeftView *navigationBarLeftView;

/** 设置状态栏 */
- (void)setupStatusBar;
/** 设置导航栏左视图*/
- (void)setupLeftBarButtonItem;
/** 设置导航栏右视图 */
- (void)setupRightBarButtonItem;
/** 设置导航栏标题 */
- (void)setNavigationBarTitle;
/** 设置主题 */
- (void)setupTheme;
- (void)setTheme:(NSDictionary *)themeParams isOverride:(BOOL)isOverride;

/** 准备参数 */
- (void)prepareParams;

/** 加载小程序视图*/
- (void)loadMPView;
/** 加载已缓存小程序视图 */
- (void)loadCachedMPView;
/** 加载小程序信息完成 */
- (void)loadMPInfoFinishedWithInfo:(NSMutableDictionary *)info;
/** 是否在线调试小程序 */
- (BOOL)isOnlineDebug;

/** 添加到我的小程序/从我的小程序列表删除 */
- (void)updateOwer;
/** 添加小程序足迹、使用统计 */
- (void)addUsage;


#pragma mark - mini program call
/** 显示导航栏加载指示器 */
- (void)showNavBarIndicator;
/** 隐藏导航栏加载指示器 */
- (void)hideNavBarIndicator;
/** 隐藏导航栏返回按钮 */
- (void)showNavBarBackItem;
/** 显示导航栏返回按钮  */
- (void)hideNavBarBackItem;
/** 添加导航栏右菜单 */
- (void)addRightMenu:(NSDictionary *)themeParams;

/** Alert */
- (void)presentAlertWithTitle:(NSString *)title
                      message:(NSString *)message;

//- (void)locationWithStatus:(WXLocationStatus)locationStatus
//                 errorInfo:(NSDictionary *)errorInfo;
@end
