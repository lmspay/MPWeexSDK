//
//  NSBundle+WXExtension.h
//  MPWeexSDK
//
//  Created by Donney on 2019/1/22.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSBundle (MPWeex)
+ (instancetype)wxBundle;
+ (NSString *)appName;
+ (NSString *)appVersion;
+ (NSString *)wx_mpweexImagePath;
+ (NSString *)wx_mpweexOrdinaryImagePath;
+ (UIImage *)wx_logo;
+ (UIImage *)wx_optionImage;
+ (UIImage *)wx_optionBlackImage;
+ (UIImage *)wx_closeImage;
+ (UIImage *)wx_closeBlackImage;
+ (UIImage *)wx_locationImage;
+ (UIImage *)wx_locationBlackImage;
+ (UIImage *)wx_errorImage;
+ (UIImage *)wx_errorMaintainImage;
+ (UIImage *)wx_backImage;
+ (UIImage *)wx_mpweexImage;
+ (UIImage *)wx_mpweexOrdinaryImage;
+ (UIImage *)wx_loadPlaceholderImage;
+ (UIImage *)wx_load_errorImage;
+ (UIImage *)wx_flashlightOnImage;
+ (UIImage *)wx_flashlightOffImage;
+ (UIImage *)wx_scannerLineImage;
+ (UIImage *)wx_moreArrowImage;
+ (UIImage *)wx_selectedImage;
+ (UIImage *)wx_activitySignImage;
+ (UIImage *)wx_moreImage;
+ (UIImage *)wx_zqmarkImage;
+ (NSURL *)wx_beepSoundPath;
@end
