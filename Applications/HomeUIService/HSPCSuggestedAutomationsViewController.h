//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUItemTableViewController.h>

@class HSPCSuggestedAutomationsItemManager, HSProxCardCoordinator, HSSetupStateMachineConfiguration, HUAvailableRelatedTriggerItemModuleController, NAFuture, NSString, UIViewController;

@interface HSPCSuggestedAutomationsViewController : HUItemTableViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    HUAvailableRelatedTriggerItemModuleController *_recommendationModuleController;	// 24 = 0x18
    NAFuture *_commitInProgress;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000006c2aa
@property(retain, nonatomic) NAFuture *commitInProgress; // @synthesize commitInProgress=_commitInProgress;
@property(retain, nonatomic) HUAvailableRelatedTriggerItemModuleController *recommendationModuleController; // @synthesize recommendationModuleController=_recommendationModuleController;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)shouldSkip;	// IMP=0x001000000006be3d
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;	// IMP=0x001000000006be35
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;	// IMP=0x001000000006be2d
- (id)commitConfiguration;	// IMP=0x001000000006bc08
- (id)buildItemModuleControllerForModule:(id)arg1;	// IMP=0x001000000006bb05
- (void)viewDidLoad;	// IMP=0x001000000006babf
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x001000000006b7b8

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,&,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HSPCSuggestedAutomationsItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

