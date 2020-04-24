//
//  WXMPInfoModel.h
//  MPWeexSDK
//
//  Created by Donney on 2019/11/29.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WXMPInfoModel : NSObject
@property (copy, nonatomic) NSString *mpid;
@property (copy, nonatomic) NSString *mininame;
@property (copy, nonatomic) NSString *logo;
@property (assign, nonatomic) NSInteger versioncode;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *companyname;
@property (copy, nonatomic) NSString *mpdesc;
@property (copy, nonatomic) NSString *cryptokey;
@property (copy, nonatomic) NSString *hashValue;
@property (assign, nonatomic) NSInteger systemtype;

@end


