//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UIViewController;

@interface HSPCPairingViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000485b8
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (void)updatePairingStatus:(id)arg1 phase:(unsigned long long)arg2;	// IMP=0x001000000004850b
- (id)commitConfiguration;	// IMP=0x00100000000484eb
- (id)iconDescriptor;	// IMP=0x00100000000483a7
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000048222

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
