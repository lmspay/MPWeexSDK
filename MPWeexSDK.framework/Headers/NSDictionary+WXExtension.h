//
//  NSDictionary+WXExtension.h
//  MPWeexSDK
//
//  Created by Donney on 2019/12/1.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSDictionary (WXExtension)
/** 获取字符串，无则返回默认值 */
- (NSString *)stringForKey:(NSString *)key defaultValue:(NSString *)defaultValue;
/** 获取整数，无则返回默认值 */
- (NSInteger)integerForKey:(NSString *)key defaultValue:(NSInteger)defaultValue;
/** 获取颜色，无则返回默认值 */
- (UIColor *)colorForKey:(NSString *)key defaultColorCode:(NSString *)defaultColorCode;
@end
