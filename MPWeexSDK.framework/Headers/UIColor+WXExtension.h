//
//  UIColor+WXExtension.h
//  MPWeexSDK
//
//  Created by Donney on 2019/10/28.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (WXExtension)
/** 根据颜色值生成颜色 */
+ (UIColor *)colorWithHexString:(NSString *)hexString;
/** 判断是否是亮色 */
+ (BOOL)isLightColor:(UIColor*)color;
@end

