//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSSetupMiniFlowController.h>

@class COSScreenTimeSetPasscodeViewController, NSString;

@interface COSScreenTimeSetupController : BPSSetupMiniFlowController
{
    COSScreenTimeSetPasscodeViewController *_firstController;	// 8 = 0x8
}

+ (_Bool)_screenTimeEnabledWithoutPasscodeForFamilyMember:(id)arg1;	// IMP=0x0020000000009765
+ (_Bool)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1;	// IMP=0x00100000000095e6
- (void).cxx_destruct;	// IMP=0x0020000000009c18
@property(retain, nonatomic) COSScreenTimeSetPasscodeViewController *firstController; // @synthesize firstController=_firstController;
- (id)familyMemberFirstName;	// IMP=0x0010000000009596
- (id)familyMember;	// IMP=0x0010000000009512
- (void)miniFlowStepComplete:(id)arg1 nextControllerClass:(Class)arg2;	// IMP=0x0010000000009485
- (void)miniFlowStepComplete:(id)arg1;	// IMP=0x0010000000009471
- (id)viewController;	// IMP=0x001000000000945c
- (id)init;	// IMP=0x00100000000093e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
