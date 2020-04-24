//
//  WXUserInfoModel.h
//  MPWeexSDK
//
//  Created by Donney on 2019/11/26.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WXUserInfoModel : NSObject
/** 性别 0女 1男 2未设置 */
@property (assign, nonatomic) NSUInteger gender;
/** 昵称 */
@property (copy, nonatomic) NSString *nickName;
/** 头像地址, 建议30分钟内访问有效 */
@property (copy, nonatomic) NSString *avatar;
@end
