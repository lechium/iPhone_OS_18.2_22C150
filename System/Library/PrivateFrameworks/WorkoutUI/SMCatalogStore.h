//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SMCatalogStore : NSObject
{
    MISSING_TYPE *assetClient;	// 8 = 0x8
    MISSING_TYPE *catalogClient;	// 48 = 0x30
    MISSING_TYPE *calendar;	// 103 = 0x67
    MISSING_TYPE *contentRestrictionObserver;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *mediaTagStringBuilder;	// 0 = 0x0
    MISSING_TYPE *bookmarkClient;	// 1454832 = 0x1632f0
    MISSING_TYPE *recommendationClient;	// 27992 = 0x6d58
}

- (void).cxx_destruct;	// IMP=0x000000000014e360
- (id)init;	// IMP=0x000000000014e300
- (void)handleCatalogResetSyncNotificationWithNotification:(id)arg1;	// IMP=0x000000000014e190
- (void)catalogResetSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000014dc80
- (void)queryCatalogWorkoutDetail:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014d940
- (void)queryFeaturedCatalogLockupsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000014d540
- (id)init:(id)arg1;	// IMP=0x000000000014b7f0

@end

