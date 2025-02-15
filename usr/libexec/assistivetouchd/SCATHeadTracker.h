//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface SCATHeadTracker
{
    MISSING_TYPE *persistentSwitchIdentifiers;	// 8 = 0x8
    MISSING_TYPE *switchDisplayNames;	// 16 = 0x10
    MISSING_TYPE *face;	// 24 = 0x18
    MISSING_TYPE *headGestureState;	// 32 = 0x20
    MISSING_TYPE *isHandlingAction;	// 40 = 0x28
    MISSING_TYPE *availability;	// 41 = 0x29
    MISSING_TYPE *availabilityDetail;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x004000000010ba40
- (id)localizedDescriptionForAvailabilityDetail:(long long)arg1;	// IMP=0x001000000010eff0
- (void)updateWithSwitches:(id)arg1 recipe:(id)arg2;	// IMP=0x001000000010ef40
- (void)_didReceiveActionWithIdentifier:(id)arg1 start:(_Bool)arg2 ignoreInputHold:(_Bool)arg3;	// IMP=0x001000000010d490
- (void)stopRunning;	// IMP=0x001000000010bff0
- (void)startRunning;	// IMP=0x001000000010bd20
- (void)dealloc;	// IMP=0x001000000010b930
- (id)init;	// IMP=0x001000000010b810

@end

