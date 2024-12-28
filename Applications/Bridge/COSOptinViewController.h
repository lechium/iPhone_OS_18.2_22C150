//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@class HKHealthStore, HKHeartRhythmAvailability, NSString;

@interface COSOptinViewController : BPSWelcomeOptinViewController
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    HKHeartRhythmAvailability *_heartRhythmAvailability;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000011531c
@property(retain, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability; // @synthesize heartRhythmAvailability=_heartRhythmAvailability;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (id)defaultImageResource;	// IMP=0x001000000011527a
- (_Bool)wantsDefaultImageResource;	// IMP=0x0010000000115272
- (id)imageResource;	// IMP=0x001000000011522e
- (void)finishedActivating;	// IMP=0x0010000000115112
- (void)didEstablishHold;	// IMP=0x001000000011503d
- (_Bool)holdBeforeDisplaying;	// IMP=0x0010000000114e76
- (id)holdActivityIdentifier;	// IMP=0x0010000000114e69
- (_Bool)requiresActivationCheck;	// IMP=0x0010000000114e61
- (id)init;	// IMP=0x0010000000114dc6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
