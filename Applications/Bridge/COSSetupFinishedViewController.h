//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@class BPSIllustratedWatchView, COSDiscoverListViewController, NSArray, NSString, PBBridgeProgressView, PSYInitialSyncStateObserver, UILabel;
@protocol COSBuddyControllerDelegate;

@interface COSSetupFinishedViewController : BPSWelcomeOptinViewController
{
    _Bool _isDeviceActivated;	// 8 = 0x8
    _Bool _isRemotePreparedForInitialSync;	// 9 = 0x9
    _Bool _syncCompletedBeforeActivation;	// 10 = 0xa
    _Bool _isSyncComplete;	// 11 = 0xb
    _Bool _alertDismissed;	// 12 = 0xc
    _Bool _userDidAbortSync;	// 13 = 0xd
    double _totalProgress;	// 16 = 0x10
    PBBridgeProgressView *_progressView;	// 24 = 0x18
    BPSIllustratedWatchView *_illustratedSyncView;	// 32 = 0x20
    UILabel *_progress;	// 40 = 0x28
    PSYInitialSyncStateObserver *_initialSyncStateObserver;	// 48 = 0x30
    NSArray *_architectureIncompatibleApps;	// 56 = 0x38
    COSDiscoverListViewController *_discoverIntro;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000877f9
@property(retain, nonatomic) COSDiscoverListViewController *discoverIntro; // @synthesize discoverIntro=_discoverIntro;
@property(retain, nonatomic) NSArray *architectureIncompatibleApps; // @synthesize architectureIncompatibleApps=_architectureIncompatibleApps;
@property(retain, nonatomic) PSYInitialSyncStateObserver *initialSyncStateObserver; // @synthesize initialSyncStateObserver=_initialSyncStateObserver;
@property(nonatomic) _Bool userDidAbortSync; // @synthesize userDidAbortSync=_userDidAbortSync;
@property(nonatomic) _Bool alertDismissed; // @synthesize alertDismissed=_alertDismissed;
@property(retain, nonatomic) UILabel *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) BPSIllustratedWatchView *illustratedSyncView; // @synthesize illustratedSyncView=_illustratedSyncView;
@property(retain, nonatomic) PBBridgeProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool isSyncComplete; // @synthesize isSyncComplete=_isSyncComplete;
@property(nonatomic) _Bool syncCompletedBeforeActivation; // @synthesize syncCompletedBeforeActivation=_syncCompletedBeforeActivation;
@property(nonatomic) _Bool isRemotePreparedForInitialSync; // @synthesize isRemotePreparedForInitialSync=_isRemotePreparedForInitialSync;
@property(nonatomic) _Bool isDeviceActivated; // @synthesize isDeviceActivated=_isDeviceActivated;
@property(nonatomic) double totalProgress; // @synthesize totalProgress=_totalProgress;
- (void)updateAppsIfNeededWithArchitectureIncompatibleApps:(id)arg1;	// IMP=0x001000000008714a
- (void)determineArchitectureCompatibilityIfNeeded;	// IMP=0x00100000000869a3
- (void)globalAlertPresentationCoordinator:(id)arg1 dismissAlert:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008672c
- (void)globalAlertPresentationCoordinator:(id)arg1 presentAlert:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086651
- (void)globalAlertPresentationCoordinator:(id)arg1 syncProgressDidUpdate:(double)arg2;	// IMP=0x001000000008639c
- (void)deviceBecameActive:(id)arg1;	// IMP=0x0010000000086340
- (void)userAbortedPairing;	// IMP=0x001000000008605a
- (_Bool)controllerAllowsNavigatingBackFrom;	// IMP=0x0010000000086052
- (void)_updateProgressUI;	// IMP=0x0010000000085fcf
- (_Bool)_isSyncComplete;	// IMP=0x0010000000085e48
- (void)deviceIsSetup:(id)arg1;	// IMP=0x0010000000085bc7
- (_Bool)isTinkerWatch;	// IMP=0x0010000000085b54
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x0010000000085950
- (void)setupSyncMonitorIfNeeded;	// IMP=0x0010000000085852
- (void)_pushToSetupFinished;	// IMP=0x001000000008568c
- (void)continuePairedSync;	// IMP=0x00100000000852cd
- (void)dismissDiscoverIntro:(id)arg1;	// IMP=0x001000000008524c
- (void)okayButtonPressed:(id)arg1;	// IMP=0x001000000008509f
- (id)okayButtonTitle;	// IMP=0x0010000000085033
- (id)detailString;	// IMP=0x0010000000084fc7
- (id)titleString;	// IMP=0x0010000000084f5b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000008440d
- (void)viewDidLoad;	// IMP=0x001000000008413d
- (void)checkHoldReleaseConditions;	// IMP=0x0010000000084074
- (void)finishedInitialSyncPrep;	// IMP=0x0010000000084004
- (void)finishedActivating;	// IMP=0x0010000000083f02
- (void)didEstablishHold;	// IMP=0x0010000000083e2d
- (_Bool)holdBeforeDisplaying;	// IMP=0x0010000000083b16
- (void)dealloc;	// IMP=0x0010000000083ad8
- (void)removeAllObservers;	// IMP=0x0010000000083a4e
- (id)init;	// IMP=0x001000000008338c
- (void)updateLiveActivityProgress;	// IMP=0x0010000000149560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

