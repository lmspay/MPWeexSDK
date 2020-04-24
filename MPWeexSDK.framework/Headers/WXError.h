//
//  WXError.h
//  MPWeexSDK
//
//  Created by Donney on 2019/12/3.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <Foundation/Foundation.h>

#define WXMP_ERROR_DOMAIN @"WXMPErrorDomain"

typedef NS_ENUM(int, WXMPSDKErrCode) {
    /** 接口请求参数错误 */
    WXMP_ERR_LOAD_PARAM = -4001,
    /** 加载小程序信息错误 */
    WXMP_ERR_LOAD_INFO_FAIL = -4002,
    /** 加载小程序视图错误 */
    WXMP_ERR_LOAD_VIEW_FAIL = -4003,
    /** MPK下载错误 */
    WXMP_ERR_DOWNLOAD_MPK_FAIL = -4004,
    /** 小程序维护 */
    WXMP_ERR_MAINTAIN = -4005,
    /** 小程序下架 */
    WXMP_ERR_THELOWERFRAME = -4006,
    /** 小程序冻结 */
    WXMP_ERR_FROZEN = -4007,
    /** API异常*/
    WXMP_ERR_API = -4008
};

@interface WXError : NSObject

@end

