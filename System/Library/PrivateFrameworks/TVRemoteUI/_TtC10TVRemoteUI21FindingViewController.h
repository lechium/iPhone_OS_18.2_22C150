//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10TVRemoteUI21FindingViewController : UIViewController
{
    MISSING_TYPE *discoveryToken;	// 8 = 0x8
    MISSING_TYPE *remoteInfo;	// 16 = 0x10
    MISSING_TYPE *dismissedHandler;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_findingView;	// 40 = 0x28
    MISSING_TYPE *style;	// 48 = 0x30
    MISSING_TYPE *closeButton;	// 200 = 0xc8
    MISSING_TYPE *pulseTimer;	// 208 = 0xd0
    MISSING_TYPE *niSession;	// 216 = 0xd8
    MISSING_TYPE *hapticsController;	// 224 = 0xe0
    MISSING_TYPE *state;	// 232 = 0xe8
    MISSING_TYPE *prevState;	// 320 = 0x140
    MISSING_TYPE *distanceLabel;	// 408 = 0x198
    MISSING_TYPE *titleLabel;	// 416 = 0x1a0
    MISSING_TYPE *nameLabel;	// 424 = 0x1a8
    MISSING_TYPE *instructionsTopLabel;	// 432 = 0x1b0
    MISSING_TYPE *instructionsLabel;	// 440 = 0x1b8
    MISSING_TYPE *instructionsLabelsStackView;	// 448 = 0x1c0
    MISSING_TYPE *currentProximityMeasurement;	// 456 = 0x1c8
    MISSING_TYPE *trendTimer;	// 464 = 0x1d0
    MISSING_TYPE *isFirstAppear;	// 472 = 0x1d8
    MISSING_TYPE *minRestartDelayMilliseconds;	// 480 = 0x1e0
    MISSING_TYPE *maxRestartDelayMilliseconds;	// 488 = 0x1e8
    MISSING_TYPE *restartBackOffIncrementMilliseconds;	// 496 = 0x1f0
    MISSING_TYPE *sessionRestartDelayMilliseconds;	// 504 = 0x1f8
    MISSING_TYPE *trendTimerDuration;	// 512 = 0x200
    MISSING_TYPE *sessionRestartDelayResetTimerDurationSeconds;	// 520 = 0x208
    MISSING_TYPE *sessionRestartDelayResetTimer;	// 528 = 0x210
    MISSING_TYPE *analyticsSessionData;	// 536 = 0x218
    MISSING_TYPE *firstMeasurement;	// 544 = 0x220
    MISSING_TYPE *requiresAdditionalConnectionTime;	// 545 = 0x221
    MISSING_TYPE *searchingDelayWorkItem;	// 552 = 0x228
}

- (void).cxx_destruct;	// IMP=0x00000000000d5a10
- (void)closeActionWithSender:(id)arg1;	// IMP=0x00000000000d8700
- (void)sessionSuspensionEnded:(id)arg1;	// IMP=0x00000000000d67a0
- (void)sessionWasSuspended:(id)arg1;	// IMP=0x00000000000d6690
- (void)session:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000d6620
- (void)session:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x00000000000d65b0
- (void)session:(id)arg1 object:(id)arg2 didUpdateRegion:(id)arg3 previousRegion:(id)arg4;	// IMP=0x00000000000d6510
- (void)session:(id)arg1 didUpdateNearbyObjects:(id)arg2;	// IMP=0x00000000000d6400
- (void)sessionDidStartRunning:(id)arg1;	// IMP=0x00000000000d63b0
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000d6090
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000d6060
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x00000000000d5e50
- (void)viewDidLoad;	// IMP=0x00000000000d5cd0
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000d5b70
- (void)dealloc;	// IMP=0x00000000000d59f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d58f0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000d58a0

@end

