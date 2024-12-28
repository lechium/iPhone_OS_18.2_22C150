//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COSScanWatchDynamicHelpViewController, COSWatchDiscoveryCoordinator, NSString, NSTimer, UIViewController;
@protocol COSBuddyWatchDiscoveryMonitorDelegate;

@interface COSBuddyWatchDiscoveryMonitor : NSObject
{
    id <COSBuddyWatchDiscoveryMonitorDelegate> _delegate;	// 8 = 0x8
    COSScanWatchDynamicHelpViewController *_dynamicHelpViewController;	// 16 = 0x10
    COSWatchDiscoveryCoordinator *_discoveryCoordinator;	// 24 = 0x18
    NSTimer *_discoveryTimeoutTimer;	// 32 = 0x20
    UIViewController *_presentingViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001058fd
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSTimer *discoveryTimeoutTimer; // @synthesize discoveryTimeoutTimer=_discoveryTimeoutTimer;
@property(retain, nonatomic) COSWatchDiscoveryCoordinator *discoveryCoordinator; // @synthesize discoveryCoordinator=_discoveryCoordinator;
@property(retain, nonatomic) COSScanWatchDynamicHelpViewController *dynamicHelpViewController; // @synthesize dynamicHelpViewController=_dynamicHelpViewController;
@property(nonatomic) __weak id <COSBuddyWatchDiscoveryMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)discoverWatchesOrShowSpinner;	// IMP=0x00100000001056d4
- (void)dynamicHelpControllerDidDisappear:(id)arg1;	// IMP=0x0010000000105583
- (void)discoveredWatchNearby:(id)arg1;	// IMP=0x0010000000105476
- (void)discoveryDidTimeout;	// IMP=0x0010000000105374
- (void)startDiscoveryCoordinator;	// IMP=0x001000000010535e
- (id)initWithPresentingViewController:(id)arg1;	// IMP=0x00100000001052cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
