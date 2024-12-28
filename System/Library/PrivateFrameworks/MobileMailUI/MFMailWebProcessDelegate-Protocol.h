//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileMailUI/NSObject-Protocol.h>

@class NSArray, NSURL;

@protocol MFMailWebProcessDelegate <NSObject>
- (void)webProcessDidCreateBrowserContextControllerLoadDelegate;
- (void)webProcessFailedToLoadResourceWithProxyForURL:(NSURL *)arg1 failureReason:(long long)arg2;
- (void)webProcessDidBlockLoadingResourceWithURL:(NSURL *)arg1;
- (void)webProcessDidFinishLoadForURL:(NSURL *)arg1;
- (void)webProcessDidFinishDocumentLoadForURL:(NSURL *)arg1 andRequestedRemoteURLs:(NSArray *)arg2;
- (void)webProcessDidFailLoadingResourceWithURL:(NSURL *)arg1;
@end
