//
//  WXUtil.h
//  MPWeexSDK
//
//  Created by Donney on 2019/11/30.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WXUtil : NSObject

+ (NSMutableDictionary *)prepareParamsWithOldParams:(NSMutableDictionary *)oldParams
                                         specParams:(NSDictionary *)specParams;

/** 是否刘海屏 */
+ (BOOL)isIphoneX;
/** NavigationBar高度 */
+ (NSUInteger)navigationBarHeight;
/** StatusBar高度 */
+ (NSUInteger)statusBarHeight;
/** StatusBar+NavigationBar高度 */
+ (NSUInteger)statusBarAndNavigationBarHeight;
/** TabBar高度 */
+ (NSUInteger)tabBarHeight;
/** 底部安全区域高度 */
+ (NSUInteger)bottomSafeAreaHeight;
/** 屏幕宽度 */
+ (CGFloat)screenWidth;
/** 屏幕高度 */
+ (CGFloat)screenHeight;
/** 屏幕高度缩放比 */
+ (CGFloat)screenHeightScale;
/** 屏幕宽度缩放比 */
+ (CGFloat)screenWidthScale;

/** 替换Base64编码中+,/,=不安全的URL字符串*/
+ (NSString *)safeUrlBase64Encode:(NSString *)base64Str;
/** 将Base64编码中的"-"，"_"字符串转换成"+"，"/"，字符串长度余4倍的位补"=" */
+ (NSString *)safeUrlBase64Decode:(NSString *)base64Str;

/** 获取URL参数 */
+ (NSDictionary *)parameterWithURL:(NSURL *)url;

/** 图片类型 */
+ (NSString *)imageTypeWithImageData:(NSData *)data;

/** 获取网络类型 */
+ (NSString *)getNetworkType;
@end

