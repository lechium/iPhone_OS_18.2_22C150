//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLSessionDataDelegate-Protocol.h>

@class NSData, NSURLSession, NSURLSessionDataTask;

@protocol NSURLSessionDataDelegatePrivate <NSURLSessionDataDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 dataTask:(NSURLSessionDataTask *)arg2 _didReceiveData:(NSData *)arg3 completionHandler:(void (^)(void))arg4;
@end
