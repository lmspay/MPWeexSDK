//
//  WXUserInfoProtocol.h
//  MPWeexSDK
//
//  Created by Donney on 2019/12/4.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WXModuleProtocol.h"
#import "WXUserInfoModel.h"

@protocol WXUserInfoProtocol <WXModuleProtocol>
- (WXUserInfoModel *)getUserInfo;
- (BOOL)ensureLoggedWithSourceViewController:(UIViewController *)sourceViewController;
@end
