//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaGroupsDaemon/NSObject-Protocol.h>

@class NSObject, NSString, NSURLRequest;
@protocol OS_nw_http_fields;

@protocol MGRemoteQueryServerHandlerProtocol <NSObject>
+ (id)handlerForRequest:(NSURLRequest *)arg1;
+ (NSString *)urlPath;
- (void)provideResponseData:(void (^)(NSData *, NSError *))arg1;
- (int)prepareResponse:(NSObject<OS_nw_http_fields> *)arg1;

@optional
- (_Bool)validateRequest;
@end
