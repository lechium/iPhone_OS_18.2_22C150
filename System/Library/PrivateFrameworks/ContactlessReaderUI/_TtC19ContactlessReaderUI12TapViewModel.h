//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC19ContactlessReaderUI12TapViewModel : _TtCs12_SwiftObject
{
    MISSING_TYPE *remoteProxy;	// 16 = 0x10
    MISSING_TYPE *_tapUIIsPresented;	// 0 = 0x0
    MISSING_TYPE *_showPIN;	// 0 = 0x0
    MISSING_TYPE *_transactionDetails;	// 0 = 0x0
    MISSING_TYPE *_additionalDetailsText;	// 0 = 0x0
    MISSING_TYPE *_readerStateModel;	// 0 = 0x0
    MISSING_TYPE *_particlesState;	// 0 = 0x0
    MISSING_TYPE *_showCancelButton;	// 0 = 0x0
    MISSING_TYPE *_vasMerchantNames;	// 0 = 0x0
    MISSING_TYPE *_tapUIError;	// 0 = 0x0
    MISSING_TYPE *_centerState;	// 0 = 0x0
    MISSING_TYPE *_orientationInverted;	// 0 = 0x0
    MISSING_TYPE *_centerTextKey;	// 0 = 0x0
    MISSING_TYPE *_axTransactionContextLabel;	// 0 = 0x0
    MISSING_TYPE *_axTransactionContextValue;	// 0 = 0x0
    MISSING_TYPE *axOngoingAnnouncement;	// 0 = 0x0
    MISSING_TYPE *closeAfterAXAnnouncement;	// 0 = 0x0
    MISSING_TYPE *showPINAfterAXAnnouncement;	// 0 = 0x0
    MISSING_TYPE *voiceOverIsRunning;	// 0 = 0x0
    MISSING_TYPE *delayedAXLabelUpdate;	// 0 = 0x0
    MISSING_TYPE *notificationObservers;	// 0 = 0x0
    MISSING_TYPE *stateMachine;	// 0 = 0x0
    MISSING_TYPE *playSound;	// 0 = 0x0
    MISSING_TYPE *rotationManager;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *proximitySensorObserver;	// 0 = 0x0
    MISSING_TYPE *sensorObscured;	// 0 = 0x0
    MISSING_TYPE *proximityCounter;	// 0 = 0x0
    MISSING_TYPE *cardTearCounter;	// 0 = 0x0
    MISSING_TYPE *ignoreProxUpdates;	// 0 = 0x0
    MISSING_TYPE *transientCenterStateTimer;	// 0 = 0x0
    MISSING_TYPE *showGuidanceTimerStarted;	// 0 = 0x0
    MISSING_TYPE *showGuidanceTimer;	// 0 = 0x0
    MISSING_TYPE *cleanupShowGuidanceTimer;	// 0 = 0x0
    MISSING_TYPE *subscriptions;	// 0 = 0x0
}

- (void)closeUIImmediate;	// IMP=0x00000000000d7fe0
- (void)closeUI;	// IMP=0x00000000000d7fb0
- (void)requiresCardPIN:(id)arg1;	// IMP=0x00000000000d7700
- (void)vasReadSuccessWithMerchantNames:(id)arg1;	// IMP=0x00000000000d6cf0
- (void)updateWithTransactionEvent:(long long)arg1;	// IMP=0x00000000000d69f0

@end
