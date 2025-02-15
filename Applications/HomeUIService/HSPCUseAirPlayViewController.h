//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UIImageView, UIView, UIViewController;

@interface HSPCUseAirPlayViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    UIImageView *_speakerIconImageView;	// 32 = 0x20
    UIView *_airplayIconView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000005e129
@property(retain, nonatomic) UIView *airplayIconView; // @synthesize airplayIconView=_airplayIconView;
@property(retain, nonatomic) UIImageView *speakerIconImageView; // @synthesize speakerIconImageView=_speakerIconImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)_enableAirPlay;	// IMP=0x001000000005dab2
- (id)_applyOnboardingSelectionsIfNeeded;	// IMP=0x001000000005d87a
- (id)_applyOnboardingSelections;	// IMP=0x001000000005d432
- (void)viewDidLoad;	// IMP=0x001000000005cced
- (id)commitConfiguration;	// IMP=0x001000000005cccd
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x001000000005c97f

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,&,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

