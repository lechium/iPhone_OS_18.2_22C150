//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MUCuratedCollectionsPlacecardAnalyticsManager : NSObject
{
    struct CollectionsPlacecardEvent _event;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000012b65a
- (void)cleanUp;	// IMP=0x000000000012b604
- (void)logEvent;	// IMP=0x000000000012b494
- (void)placecardExploreGuidesButtonTapped;	// IMP=0x000000000012b45f
- (void)placecardCollectionsSeeAllTapped;	// IMP=0x000000000012b42a
- (void)placecardCollectionTapped:(id)arg1 atIndex:(unsigned long long)arg2 isCurrentlySaved:(_Bool)arg3;	// IMP=0x000000000012b31c
- (void)placecardCollectionsScrollForward;	// IMP=0x000000000012b2e7
- (void)placecardCollectionsScrollBackward;	// IMP=0x000000000012b2b2
- (id)init;	// IMP=0x000000000012b235

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

