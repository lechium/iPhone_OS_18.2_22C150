//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@protocol STSMiniFlowControllerDelegate;

@interface COSScreenTimeSetPasscodeViewController : BPSWelcomeOptinViewController
{
    id <STSMiniFlowControllerDelegate> miniFlowDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000006b4c6
@property(nonatomic) __weak id <STSMiniFlowControllerDelegate> miniFlowDelegate; // @synthesize miniFlowDelegate;
- (_Bool)_errorIsUserCanceledSettingPIN:(id)arg1;	// IMP=0x001000000006b40f
- (void)_collectThenSetScreenTimePasscodeForFamilyMember:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000006aae7
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000006a7e9
- (id)alternateButtonString;	// IMP=0x001000000006a7e1
- (id)suggestedButtonTitle;	// IMP=0x001000000006a775
- (id)detailString;	// IMP=0x001000000006a688
- (id)titleString;	// IMP=0x001000000006a61c
- (id)imageResource;	// IMP=0x001000000006a60f
- (id)init;	// IMP=0x001000000006a5be

@end
