//
//  WXConst.h
//  MPWeexSDK
//
//  Created by Donney on 2020/4/23.
//  Copyright © 2020 lmspay. All rights reserved.
//

#import <Foundation/Foundation.h>

/** 推荐位标识 */
typedef NSString *WXRecommendTag NS_STRING_ENUM;
FOUNDATION_EXPORT WXRecommendTag const WXRecommendTagAll;
FOUNDATION_EXPORT WXRecommendTag const WXRecommendTagApp;
FOUNDATION_EXPORT WXRecommendTag const WXRecommendTagMPIndex;
FOUNDATION_EXPORT WXRecommendTag const WXRecommendTagMPSearch;
FOUNDATION_EXPORT WXRecommendTag const WXRecommendTagMPAbout;

/** 指定页面 */
typedef struct {
    NSString *page;
    NSString *pageTitle;
} WXMPPage;
static const WXMPPage kPageIndex        = {@"/default.js", @"众圈"};
static const WXMPPage kPageRecent       = {@"/pages/wxmp.js", @"最近使用"};
static const WXMPPage kPageMymp         = {@"/pages/minemp.js", @"我关注的"};
static const WXMPPage kPageRecommend    = {@"/pages/recommendmp.js", @"推荐的"};
static const WXMPPage kPageSearch       = {@"/pages/search.js", @"搜索"};

@interface WXConst : NSObject

@end
