//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, HULockAccessUpdateViewController, NSString, UIViewController;

@interface HSPCLockAccessUpdateViewController : PRXCardContentViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    HULockAccessUpdateViewController *_lockAccessUpdateViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000004339
@property(readonly, nonatomic) HULockAccessUpdateViewController *lockAccessUpdateViewController; // @synthesize lockAccessUpdateViewController=_lockAccessUpdateViewController;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)hu_preloadContent;	// IMP=0x001000000000428a
- (id)commitConfiguration;	// IMP=0x001000000000426a
- (void)viewDidLoad;	// IMP=0x0010000000003caf
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000003abd

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

