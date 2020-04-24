//
//  WXScanViewController.h
//  MPWeexSDK
//
//  Created by Donney on 2019/10/11.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import "WXAbstractViewController.h"

typedef void (^WXScanCallback)(NSString *contentData, BOOL isCancel);

@interface WXScanViewController : UIViewController
/** 导航栏标题 */
@property (copy, nonatomic) NSString *navigationBarTitle;
/** 扫码成功回调 */
@property (copy, nonatomic) WXScanCallback completionHandler;
@end

