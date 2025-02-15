//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDDisplayMonitor, MRDLockScreenAssertion, MRDLockScreenContentController, MRDNowPlayingServerResult, MRDPersonalDeviceController, MRPlayerPath, MSVTimer, NSString;
@protocol MRDLockScreenControllerDelegate, MRLockScreenUIControllable, OS_dispatch_queue;

@interface MRDLockScreenController : NSObject
{
    MRDDisplayMonitor *_displayMonitor;	// 8 = 0x8
    MRDNowPlayingServerResult *_playerResult;	// 16 = 0x10
    MRPlayerPath *_playerPath;	// 24 = 0x18
    MRPlayerPath *_previousPlayerPath;	// 32 = 0x20
    id _playerPathInvalidationToken;	// 40 = 0x28
    id _previousPlayerPathInvalidationToken;	// 48 = 0x30
    MSVTimer *_timer;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    _Bool _hasLockScreenAssertion;	// 72 = 0x48
    _Bool _hasLockScreenRecommendationAssertion;	// 73 = 0x49
    _Bool _hasPresentedForCurrentPersonalDevices;	// 74 = 0x4a
    _Bool _shouldFinishPresentationForCurrentPersonalDevices;	// 75 = 0x4b
    id <MRDLockScreenControllerDelegate> _delegate;	// 80 = 0x50
    id <MRLockScreenUIControllable> _uiController;	// 88 = 0x58
    MRDLockScreenAssertion *_legacyAssertion;	// 96 = 0x60
    MRPlayerPath *_electedPlayerPath;	// 104 = 0x68
    long long _changeType;	// 112 = 0x70
    long long _eventType;	// 120 = 0x78
    MRDPersonalDeviceController *_personalDeviceController;	// 128 = 0x80
    MRDLockScreenContentController *_contentController;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000000d4b6d
@property(nonatomic) _Bool shouldFinishPresentationForCurrentPersonalDevices; // @synthesize shouldFinishPresentationForCurrentPersonalDevices=_shouldFinishPresentationForCurrentPersonalDevices;
@property(nonatomic) _Bool hasPresentedForCurrentPersonalDevices; // @synthesize hasPresentedForCurrentPersonalDevices=_hasPresentedForCurrentPersonalDevices;
@property(retain, nonatomic) MRDLockScreenContentController *contentController; // @synthesize contentController=_contentController;
@property(retain, nonatomic) MRDPersonalDeviceController *personalDeviceController; // @synthesize personalDeviceController=_personalDeviceController;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(retain, nonatomic) MRPlayerPath *electedPlayerPath; // @synthesize electedPlayerPath=_electedPlayerPath;
@property(retain, nonatomic) MRDLockScreenAssertion *legacyAssertion; // @synthesize legacyAssertion=_legacyAssertion;
// Error: Property attributes should begin with the type ('T') attribute, property name: hasLockScreenRecommendationAssertion
// Property attributes: (null)

@property(nonatomic) _Bool hasLockScreenAssertion; // @synthesize hasLockScreenAssertion=_hasLockScreenAssertion;
@property(retain, nonatomic) id <MRLockScreenUIControllable> uiController; // @synthesize uiController=_uiController;
@property(retain, nonatomic) MRPlayerPath *previousPlayerPath; // @synthesize previousPlayerPath=_previousPlayerPath;
@property(retain, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(nonatomic) id <MRDLockScreenControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_onQueue_calculateShouldShowLockScreenForReason:(id *)arg1;	// IMP=0x00100000000d48e8
- (void)_onQueue_reevaluateShouldShowLockScreenForReason:(id)arg1;	// IMP=0x00100000000d4627
- (void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x00100000000d4336
- (void)_handleIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x00100000000d416b
- (void)_handleElectedPlayerDidChangeNotification:(id)arg1;	// IMP=0x00100000000d3f7d
- (void)_handleLayoutDidChangeNotification:(id)arg1;	// IMP=0x00100000000d3ec7
- (void)routeRecommendationDismissed;	// IMP=0x00100000000d3dab
- (void)lockScreenContentControllerStateDidChange:(id)arg1;	// IMP=0x00100000000d3d43
- (void)personalDeviceControllerStateDidChange:(id)arg1;	// IMP=0x00100000000d3c54
- (void)_onSerialQueue_restoreElectedPlayer;	// IMP=0x00100000000d3b66
- (void)setLockScreenRecommendationActive:(_Bool)arg1;	// IMP=0x00100000000d351e
@property(readonly, nonatomic, getter=isLockScreenRecommendationActive) _Bool lockScreenRecommendationActive;
@property(readonly, nonatomic, getter=isLockScreenWidgetVisible) _Bool lockScreenWidgetVisible;
- (_Bool)_onQueue_isLockScreenWidgetVisible;	// IMP=0x00100000000d32e4
@property(readonly, nonatomic, getter=isLockScreenWidgetActive) _Bool lockScreenWidgetActive;
- (id)init;	// IMP=0x00100000000d2f38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

