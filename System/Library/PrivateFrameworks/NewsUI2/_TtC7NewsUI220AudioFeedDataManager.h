//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI220AudioFeedDataManager : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *feedServiceContextFactory;	// 24 = 0x18
    MISSING_TYPE *feedServiceConfigFetcher;	// 32 = 0x20
    MISSING_TYPE *feedManager;	// 40 = 0x28
    MISSING_TYPE *feedPluginManager;	// 48 = 0x30
    MISSING_TYPE *accessQueue;	// 56 = 0x38
    MISSING_TYPE *subscriptionService;	// 64 = 0x40
    MISSING_TYPE *tagService;	// 80 = 0x50
    MISSING_TYPE *offlineManager;	// 96 = 0x60
    MISSING_TYPE *offlineFeedPrimer;	// 104 = 0x68
    MISSING_TYPE *offlineFeatures;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000a43f20
- (id)init;	// IMP=0x0000000000a43ec0
- (void)readingHistory:(id)arg1 didRemoveArticlesWithIDs:(id)arg2;	// IMP=0x0000000000a44470
- (void)readingHistoryLikelyClearedRemotely:(id)arg1;	// IMP=0x0000000000a443c0
- (void)readingHistoryDidClear:(id)arg1;	// IMP=0x0000000000a443a0
- (void)readingHistory:(id)arg1 didChangeFeaturesForArticles:(id)arg2;	// IMP=0x0000000000a44310
- (void)readingHistory:(id)arg1 didAddArticlesWithIDs:(id)arg2;	// IMP=0x0000000000a44290

@end
