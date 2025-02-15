//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICStoreRequestContext, MPCModelGenericAVItemUserIdentityPropertySet, MPModelRadioStation, MPSectionedCollection, _MPCModelRadioPlaybackQueueStationTracksCollection;

__attribute__((visibility("hidden")))
@interface MPCModelRadioPlaybackQueue : NSObject
{
    ICStoreRequestContext *_storeRequestContext;	// 8 = 0x8
    MPModelRadioStation *_radioStation;	// 16 = 0x10
    _MPCModelRadioPlaybackQueueStationTracksCollection *_stationTracks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000030739b
@property(retain, nonatomic) MPModelRadioStation *radioStation; // @synthesize radioStation=_radioStation;
- (void)updateWithPersonalizedResponse:(id)arg1;	// IMP=0x00000000003072dc
- (id)tracksByApplyingTracksResponse:(id)arg1 currentIndex:(long long)arg2;	// IMP=0x00000000003070e2
@property(readonly, nonatomic) MPSectionedCollection *tracks;
- (id)trackForItemAtIndex:(long long)arg1;	// IMP=0x00000000003070b6
@property(readonly, nonatomic) MPSectionedCollection *trackModels;
- (long long)removeExplicitItems;	// IMP=0x000000000030708a
- (void)removeAllItems;	// IMP=0x0000000000307074
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)isExplicitItemAtIndex:(long long)arg1;	// IMP=0x0000000000307048
- (id)AVItemAtIndex:(long long)arg1;	// IMP=0x0000000000306f70
@property(retain, nonatomic) MPCModelGenericAVItemUserIdentityPropertySet *identityPropertySet;
- (id)initWithPlaybackContext:(id)arg1;	// IMP=0x0000000000306e20

@end

