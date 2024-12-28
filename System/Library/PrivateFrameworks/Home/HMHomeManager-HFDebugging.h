//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMHomeManager.h>

@class NSNumber, NSString;

@interface HMHomeManager (HFDebugging)
+ (id)hf_homeFutureForName:(id)arg1;	// IMP=0x001000000015c642
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x001000000012aba7
- (_Bool)hf_canAccessHomeRemotely:(id)arg1;	// IMP=0x001000000015d7d4
- (void)hf_enableEventLogOnboardingFlag;	// IMP=0x001000000015d6ca
- (id)hf_accessorySettingsController;	// IMP=0x001000000015d6b8
- (id)hf_accessorySettingsDataSource;	// IMP=0x001000000015d6a6
- (id)hf_updateApplicationDataFuture;	// IMP=0x001000000015d5d3
@property(readonly, nonatomic) _Bool hf_hasDetectediCloudIssue;
- (id)hf_setSeenNewFeaturesViewVersion:(long long)arg1;	// IMP=0x001000000015d32a
- (long long)hf_lastNewFeaturesViewVersionSeen;	// IMP=0x001000000015d259
- (id)hf_setHasSeenOnboardingWelcomeView:(_Bool)arg1;	// IMP=0x001000000015cee8
- (_Bool)hf_hasSeenOnboardingWelcomeView;	// IMP=0x001000000015cc66
- (id)hf_homeForName:(id)arg1;	// IMP=0x001000000015cb04
- (id)hf_homeForURL:(id)arg1;	// IMP=0x001000000015c962
- (id)hf_setOrderedHomes:(id)arg1;	// IMP=0x001000000015c58f
- (id)hf_orderedHomes;	// IMP=0x001000000015c4e8
- (id)hf_orderedHomesList;	// IMP=0x001000000015c4a0
- (id)hf_mutableOrderedHomesList;	// IMP=0x001000000015c42d
- (id)hf_homeWithIdentifier:(id)arg1;	// IMP=0x001000000015c305
- (void)hf_updateApplicationData:(id)arg1 handleError:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002e6fc6
@property(retain) NSNumber *_cached_lastOnboardingNewFeaturesVersionSeenNumber;
@property(retain) NSNumber *_cached_hasSeenOnboardingWelcomeViewNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
