//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDMediaBrowser, NSArray;

@protocol HMDMediaBrowserDelegate <NSObject>
- (void)browser:(HMDMediaBrowser *)arg1 didUpdateEndpoints:(NSArray *)arg2;
- (void)browser:(HMDMediaBrowser *)arg1 didRemoveSessions:(NSArray *)arg2;
- (void)browser:(HMDMediaBrowser *)arg1 didRemoveAdvertisements:(NSArray *)arg2;
- (void)browser:(HMDMediaBrowser *)arg1 didAddAdvertisements:(NSArray *)arg2;
@end
