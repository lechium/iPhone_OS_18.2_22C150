//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSSetupMiniFlowController.h>

@class NSString, OBPrivacySplashController;

@interface COSTinkerPrivacySplashController : BPSSetupMiniFlowController
{
    OBPrivacySplashController *_splashController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000f5524
@property(retain, nonatomic) OBPrivacySplashController *splashController; // @synthesize splashController=_splashController;
- (void)miniFlowStepComplete:(id)arg1 nextControllerClass:(Class)arg2;	// IMP=0x00100000000f54a8
- (void)miniFlowStepComplete:(id)arg1;	// IMP=0x00100000000f545c
- (void)continueButtonPressed:(id)arg1;	// IMP=0x00100000000f5410
- (void)learnMorePressed:(id)arg1;	// IMP=0x00100000000f535d
- (id)viewController;	// IMP=0x00100000000f5348
- (id)init;	// IMP=0x00100000000f509d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
