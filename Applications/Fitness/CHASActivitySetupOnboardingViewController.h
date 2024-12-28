//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@class NSObject, NSTimer;
@protocol OS_dispatch_queue;

@interface CHASActivitySetupOnboardingViewController : BPSWelcomeOptinViewController
{
    long long _presentationContext;	// 8 = 0x8
    NSTimer *_hasExistingMoveGoalTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_healthQueue;	// 24 = 0x18
}

+ (void)performEndToEndCloudSyncOnSkippingSetupForHealthStore:(id)arg1;	// IMP=0x0020000000015b43
+ (_Bool)controllerNeedsToRun;	// IMP=0x0010000000015578
- (void).cxx_destruct;	// IMP=0x002000000001638e
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *healthQueue; // @synthesize healthQueue=_healthQueue;
@property(retain, nonatomic) NSTimer *hasExistingMoveGoalTimer; // @synthesize hasExistingMoveGoalTimer=_hasExistingMoveGoalTimer;
@property(readonly, nonatomic) long long presentationContext; // @synthesize presentationContext=_presentationContext;
- (id)localizedWaitScreenDescription;	// IMP=0x001000000001632b
- (double)waitScreenPushGracePeriod;	// IMP=0x001000000001631d
- (_Bool)holdWithWaitScreen;	// IMP=0x0010000000016315
- (void)_timeoutAndMoveOn:(id)arg1;	// IMP=0x001000000001621f
- (_Bool)holdBeforeDisplaying;	// IMP=0x0010000000015e34
- (id)tapToRadarMetadata;	// IMP=0x0010000000015e06
- (void)didReceiveMemoryWarning;	// IMP=0x0010000000015b14
- (void)viewDidLoad;	// IMP=0x0010000000015ae5
- (void)okayButtonPressed:(id)arg1;	// IMP=0x00100000000159db
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x0010000000015937
- (void)selectedMoreOptions:(id)arg1;	// IMP=0x0010000000015931
- (id)moreOptionsButtonString;	// IMP=0x0010000000015929
- (id)detailString;	// IMP=0x00100000000158b2
- (id)detailTitleString;	// IMP=0x001000000001583b
- (id)okayButtonTitle;	// IMP=0x00100000000157c4
- (id)alternateButtonString;	// IMP=0x00100000000157b7
- (id)suggestedButtonTitle;	// IMP=0x0010000000015740
- (id)privacyBundles;	// IMP=0x00100000000156d9
- (id)imageResource;	// IMP=0x00100000000156cc
- (id);	// IMP=0x001000000001566a
- (id)titleString;	// IMP=0x00100000000155f3
- (_Bool)wantsLightenBlendedScreen;	// IMP=0x00100000000155eb
- (_Bool)legacyButtonStyles;	// IMP=0x00100000000155e3
- (id)initWithPresentationContext:(long long)arg1;	// IMP=0x0010000000015580

@end
