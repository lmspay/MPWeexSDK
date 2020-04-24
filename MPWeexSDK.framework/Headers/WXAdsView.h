//
//  WXAdsView.h
//  MPWeexSDK
//
//  Created by Donney on 2020/2/5.
//  Copyright © 2020 lmspay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WXConst.h"

typedef NS_ENUM(NSInteger, WXAdsType) {
    /** 一行四列，不滚动 */
    WXAdsTypeOneRow = 1,
    /** 二行四列，不滚动 */
    WXAdsTypeTwoRow,
    /** 三行四列，不滚动 */
    WXAdsTypeThreeRow,
    /** 一行最多八列，横向滚动 */
    WXAdsTypeHorizontalScroll
};

@interface WXAdsView : UIView
/** 源视图控制器器 */
@property (weak, nonatomic) UIViewController *sourceViewController;

/** 推荐位类型 */
@property (assign, nonatomic) WXAdsType type;

/** 是否显示标题栏 */
@property (assign, nonatomic) BOOL isShowTitleBar;
/** 标题颜色 */
@property (strong, nonatomic) UIColor *titleColor;
/** 标题字体 */
@property (strong, nonatomic) UIFont *titleFont;
/** 标题栏背景色 */
@property (strong, nonatomic) UIColor *titleBarBackgroundColor;

/** 是否显示更多 */
@property (assign, nonatomic) BOOL isShowMore;
/** 隐藏更多图标 */
@property (assign, nonatomic) BOOL isHideMoreIcon;
/** 更多标题字体 */
@property (strong, nonatomic) UIFont *moreTitleFont;
/** 更多标题颜色*/
@property (strong, nonatomic) UIColor *moreTitleColor;

/** 分割线颜色 */
@property (strong, nonatomic) UIColor *separatorColor;
/** 分割线左右间距 */
@property (assign, nonatomic) CGFloat separatorPadding;

/** 加载指示器颜色 */
@property (strong, nonatomic) UIColor *loaderTintColor;

/** 行高 (默认60)*/
@property (assign, nonatomic) CGFloat rowHeight;
/** 列宽 (默认72) */
@property (assign, nonatomic) CGFloat columnWidth;
/** 内容视图顶部Padding 最低3pt */
@property (assign, nonatomic) CGFloat topPadding;
/** 内容视图底部Padding 最低3pt */
@property (assign, nonatomic) CGFloat bottomPadding;

/** 推荐位标识 */
@property (copy, nonatomic) WXRecommendTag recommendTag;

- (void)setupOneRow;
- (void)setupTwoRow;
- (void)setupThreeRow;
- (void)setupWithIsShowTitleBar:(BOOL)isShowTitleBar isShowMore:(BOOL)isShowMore adsType:(WXAdsType)type;
@end

