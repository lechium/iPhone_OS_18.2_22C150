//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class HSPCSuggestedAutomationsViewController, HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UIViewController;

@interface HSPCSuggestedAutomationWrappingViewController : PRXCardContentViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    HSPCSuggestedAutomationsViewController *_mvvmController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000015ec5
@property(retain, nonatomic) HSPCSuggestedAutomationsViewController *mvvmController; // @synthesize mvvmController=_mvvmController;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)shouldSkip;	// IMP=0x0010000000015d95
- (id)hu_preloadContent;	// IMP=0x0010000000015d45
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000015c20
- (void)viewDidLoad;	// IMP=0x0010000000015b76
- (id)commitConfiguration;	// IMP=0x0010000000015b26
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000015936

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
