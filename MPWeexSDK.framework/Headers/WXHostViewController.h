//
//  WXHostViewController.h
//  MPWeexSDK
//
//  Created by Donney on 2019/10/14.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import "WXAbstractViewController.h"

@interface WXHostViewController : WXAbstractViewController
/** 是否首页 */
@property (assign, nonatomic) BOOL isIndexPage;
/** 是否保持导航栏不变 */
@property (assign, nonatomic) BOOL isKeepNavigationBar;
/** 导航栏原颜色 */
@property (strong, nonatomic) UIColor *originalNavigationBarColor;
/** 导航栏原标题文本属性 */
@property (strong, nonatomic) NSDictionary *originalNavigationBarTitleTextAttributes;
/** 是否需要加载小程序信息  */
@property (assign, nonatomic) BOOL isNeedLoadMPInfo;
@end
