//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REHTTPRequest, REHTTPServer;

@protocol REHTTPServerDelegate
- (void)httpServer:(REHTTPServer *)arg1 handleRequest:(REHTTPRequest *)arg2 completion:(void (^)(REHTTPResponse *))arg3;
@end
