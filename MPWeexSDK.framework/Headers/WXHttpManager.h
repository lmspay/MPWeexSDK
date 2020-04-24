//
//  WXHttpManager.h
//  MPWeexSDK
//
//  Created by Donney on 2019/9/24.
//  Copyright © 2019 lmspay. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString *const kHttpRequestTypeGet = @"GET";
static NSString *const kHttpRequestTypePost = @"POST";
static NSString *const kHttpRequestTypePostForm = @"FORMDATA";

typedef void (^HttpResponseCallback)(BOOL ok, NSInteger statusCode, id responseData, NSDictionary *headers);

@interface WXHttpManager : NSObject

- (instancetype)initWithBasePath:(NSString *)basePath;

- (void)get:(NSString *)apiPath
queryParams:(NSDictionary *)queryParams
   callback:(HttpResponseCallback)callback;

- (void)post:(NSString *)apiPath
        body:(NSDictionary *)body
    callback:(HttpResponseCallback)callback;

- (void)postForm:(NSString *)apiPath
      formParams:(NSDictionary *)formParams
        callback:(HttpResponseCallback)callback;
@end

