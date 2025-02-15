//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNTrafficIncidentAlert, NSDate, NSString, NSTimer, NavTrafficIncidentContaineeViewController, TrafficIncidentOptionalRerouteContaineeViewController, UIViewController;
@protocol NavTrafficIncidentAlertViewController, NavTrafficIncidentPresentation;

@interface NavTrafficIncidentCoordinator : NSObject
{
    _Bool _isDismissing;	// 8 = 0x8
    TrafficIncidentOptionalRerouteContaineeViewController *_rerouteTrafficIncidentViewController;	// 16 = 0x10
    NavTrafficIncidentContaineeViewController *_trafficIncidentViewController;	// 24 = 0x18
    id <NavTrafficIncidentPresentation> _presentationDelegate;	// 32 = 0x20
    MNTrafficIncidentAlert *_presentedAlert;	// 40 = 0x28
    CDUnknownBlockType _responseCallback;	// 48 = 0x30
    NSTimer *_timeoutTimer;	// 56 = 0x38
    NSDate *_displayTime;	// 64 = 0x40
    NSDate *_dismissTime;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000045e21b
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(retain, nonatomic) NSDate *dismissTime; // @synthesize dismissTime=_dismissTime;
@property(retain, nonatomic) NSDate *displayTime; // @synthesize displayTime=_displayTime;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType responseCallback; // @synthesize responseCallback=_responseCallback;
@property(retain, nonatomic) MNTrafficIncidentAlert *presentedAlert; // @synthesize presentedAlert=_presentedAlert;
@property(nonatomic) __weak id <NavTrafficIncidentPresentation> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (_Bool)_alertVotable:(id)arg1;	// IMP=0x001000000045e0c4
- (_Bool)_alertRequiresOptIn:(id)arg1;	// IMP=0x001000000045e070
- (void)_sendTrafficFeedbackForAlert:(id)arg1 actionType:(int)arg2;	// IMP=0x001000000045dc36
- (_Bool)_hasValidRerouteTimer;	// IMP=0x001000000045db71
- (double)_timeoutTimerProgress;	// IMP=0x001000000045db43
- (void)_getTimeoutTimerProgress:(out double *)arg1 timeRemaining:(out double *)arg2;	// IMP=0x001000000045d9db
- (void)_didBecomeActive:(id)arg1;	// IMP=0x001000000045d928
- (void)_animateProgressWithDuration:(double)arg1 startValue:(double)arg2;	// IMP=0x001000000045d661
- (void)_dismissTrafficAlertWithActionType:(long long)arg1 target:(int)arg2;	// IMP=0x001000000045d220
- (void)_dismissTrafficAlertWithTimer:(id)arg1;	// IMP=0x001000000045d0be
- (void)containeeViewControllerGoToPreviousState:(id)arg1 withSender:(id)arg2;	// IMP=0x001000000045cf7d
- (int)_GEOTrafficFeedbackTypeForAction:(long long)arg1;	// IMP=0x001000000045cf60
- (int)_voteTypeAlertWithResult:(long long)arg1;	// IMP=0x001000000045cf40
- (void)_didVoteAlert:(id)arg1 type:(int)arg2 target:(int)arg3;	// IMP=0x001000000045ca45
- (void)didTapAcceptButtonOnTrafficIncidentAlertViewControllerTarget:(int)arg1;	// IMP=0x001000000045c99d
- (void)didTapRejectButtonOnTrafficIncidentAlertViewControllerTarget:(int)arg1;	// IMP=0x001000000045c8f5
- (void)updatedAlertViewWithTrafficIncidentAlert:(id)arg1;	// IMP=0x001000000045c788
- (void)dismissVisibleTrafficAlertView:(_Bool)arg1;	// IMP=0x001000000045c767
- (void)dismissAlertViewForTrafficIncidentAlert:(id)arg1 actionType:(long long)arg2 target:(int)arg3;	// IMP=0x001000000045c6dc
- (void)dismissAlertViewForTrafficIncidentAlert:(id)arg1 acceptedNewRoute:(_Bool)arg2;	// IMP=0x001000000045c6ba
- (void)_updateProgressTimerForAlert:(id)arg1;	// IMP=0x001000000045c4f5
- (void)presentAlertViewForTrafficIncidentAlert:(id)arg1 responseCallback:(CDUnknownBlockType)arg2;	// IMP=0x001000000045bff2
@property(readonly, nonatomic) UIViewController<NavTrafficIncidentAlertViewController> *alertViewController;
@property(readonly, nonatomic) NavTrafficIncidentContaineeViewController *trafficIncidentViewController; // @synthesize trafficIncidentViewController=_trafficIncidentViewController;
@property(readonly, nonatomic) TrafficIncidentOptionalRerouteContaineeViewController *rerouteTrafficIncidentViewController; // @synthesize rerouteTrafficIncidentViewController=_rerouteTrafficIncidentViewController;
- (id)init;	// IMP=0x001000000045bdcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

