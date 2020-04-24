//
//  WXThemeUtil.h
//  MPWeexSDK
//
//  Created by Donney on 2019/10/28.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WXThemeUtil : NSObject
/** 默认主题参数 */
+ (NSMutableDictionary *)defaultTheme;
/** 恢复主题参数 */
+ (void)resumeThemeWithFromThemeParams:(NSDictionary *)fromThemeParams toThemeParams:(NSMutableDictionary *)toThemeParams;
/** 彩蛋主题参数 */
+ (NSMutableDictionary *)eggTheme;
/** 彩蛋主题色 */
+ (UIColor *)eggColor;
@end

