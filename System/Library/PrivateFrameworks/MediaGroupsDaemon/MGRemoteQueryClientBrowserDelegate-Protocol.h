//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaGroupsDaemon/NSObject-Protocol.h>

@class MGRemoteQueryClientBrowser, MGRemoteQueryClientTarget, NSError;

@protocol MGRemoteQueryClientBrowserDelegate <NSObject>
- (void)browser:(MGRemoteQueryClientBrowser *)arg1 invalidatedWithError:(NSError *)arg2;
- (void)browser:(MGRemoteQueryClientBrowser *)arg1 lostTarget:(MGRemoteQueryClientTarget *)arg2;
- (void)browser:(MGRemoteQueryClientBrowser *)arg1 foundTarget:(MGRemoteQueryClientTarget *)arg2;
@end
