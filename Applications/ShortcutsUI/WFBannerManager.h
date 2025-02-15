//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBSDisplayLayoutMonitor, FBSDisplayMonitor, NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSString, UISCurrentUserInterfaceStyleValue, UIViewController, WFActionUserInterfaceListener, WFDispatchSourceTimer, WFWorkflowRunningContext;
@protocol OS_dispatch_queue, WFBannerPresentable, WFBannerRequest;

@interface WFBannerManager : NSObject
{
    _Bool _shouldObserveDisplayLayout;	// 8 = 0x8
    _Bool _dialogPresentationPaused;	// 9 = 0x9
    struct os_unfair_lock_s _presentedRemoteAlertViewControllerLock;	// 12 = 0xc
    struct os_unfair_lock_s _presentedBannerLock;	// 16 = 0x10
    struct os_unfair_lock_s _inflightRequestLock;	// 20 = 0x14
    id <WFBannerPresentable> _presentedBanner;	// 24 = 0x18
    id <WFBannerRequest> _inflightRequest;	// 32 = 0x20
    NSMutableOrderedSet *_pendingRequests;	// 40 = 0x28
    UIViewController *_presentedRemoteAlertViewController;	// 48 = 0x30
    NSMutableDictionary *_runningPersistentWorkflows;	// 56 = 0x38
    NSHashTable *_connectedHosts;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    WFActionUserInterfaceListener *_actionUserInterfaceListener;	// 80 = 0x50
    CDUnknownBlockType _dialogRequestCompletionHandler;	// 88 = 0x58
    WFWorkflowRunningContext *_runningContextWaitingForFollowUpRequest;	// 96 = 0x60
    CDUnknownBlockType _bannerPresentationCompletion;	// 104 = 0x68
    WFWorkflowRunningContext *_presentedPersistentRunningContext;	// 112 = 0x70
    FBSDisplayMonitor *_displayMonitor;	// 120 = 0x78
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 128 = 0x80
    WFDispatchSourceTimer *_pauseTimer;	// 136 = 0x88
    NSString *_dialogPresentationPausingReason;	// 144 = 0x90
    NSString *_dialogPresentationResumingReason;	// 152 = 0x98
    UISCurrentUserInterfaceStyleValue *_userInterfaceStyleValue;	// 160 = 0xa0
    long long _currentUserInterfaceStyle;	// 168 = 0xa8
    NSMutableDictionary *_singleStepHomeScreenRevokeTimers;	// 176 = 0xb0
    WFDispatchSourceTimer *_cleanUpTimer;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x002000000001fcdf
@property(retain, nonatomic) WFDispatchSourceTimer *cleanUpTimer; // @synthesize cleanUpTimer=_cleanUpTimer;
@property(retain, nonatomic) NSMutableDictionary *singleStepHomeScreenRevokeTimers; // @synthesize singleStepHomeScreenRevokeTimers=_singleStepHomeScreenRevokeTimers;
@property(nonatomic) long long currentUserInterfaceStyle; // @synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle;
@property(readonly, nonatomic) UISCurrentUserInterfaceStyleValue *userInterfaceStyleValue; // @synthesize userInterfaceStyleValue=_userInterfaceStyleValue;
@property(copy, nonatomic) NSString *dialogPresentationResumingReason; // @synthesize dialogPresentationResumingReason=_dialogPresentationResumingReason;
@property(copy, nonatomic) NSString *dialogPresentationPausingReason; // @synthesize dialogPresentationPausingReason=_dialogPresentationPausingReason;
@property(retain, nonatomic) WFDispatchSourceTimer *pauseTimer; // @synthesize pauseTimer=_pauseTimer;
@property(nonatomic, getter=isDialogPresentationPaused) _Bool dialogPresentationPaused; // @synthesize dialogPresentationPaused=_dialogPresentationPaused;
@property(nonatomic) _Bool shouldObserveDisplayLayout; // @synthesize shouldObserveDisplayLayout=_shouldObserveDisplayLayout;
@property(readonly, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // @synthesize layoutMonitor=_layoutMonitor;
@property(readonly, nonatomic) FBSDisplayMonitor *displayMonitor; // @synthesize displayMonitor=_displayMonitor;
@property(retain, nonatomic) WFWorkflowRunningContext *presentedPersistentRunningContext; // @synthesize presentedPersistentRunningContext=_presentedPersistentRunningContext;
@property(copy, nonatomic) CDUnknownBlockType bannerPresentationCompletion; // @synthesize bannerPresentationCompletion=_bannerPresentationCompletion;
@property(retain, nonatomic) WFWorkflowRunningContext *runningContextWaitingForFollowUpRequest; // @synthesize runningContextWaitingForFollowUpRequest=_runningContextWaitingForFollowUpRequest;
@property(copy, nonatomic) CDUnknownBlockType dialogRequestCompletionHandler; // @synthesize dialogRequestCompletionHandler=_dialogRequestCompletionHandler;
@property(retain, nonatomic) WFActionUserInterfaceListener *actionUserInterfaceListener; // @synthesize actionUserInterfaceListener=_actionUserInterfaceListener;
@property(readonly, nonatomic) struct os_unfair_lock_s inflightRequestLock; // @synthesize inflightRequestLock=_inflightRequestLock;
@property(readonly, nonatomic) struct os_unfair_lock_s presentedBannerLock; // @synthesize presentedBannerLock=_presentedBannerLock;
@property(readonly, nonatomic) struct os_unfair_lock_s presentedRemoteAlertViewControllerLock; // @synthesize presentedRemoteAlertViewControllerLock=_presentedRemoteAlertViewControllerLock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSHashTable *connectedHosts; // @synthesize connectedHosts=_connectedHosts;
- (struct CGSize)preferredContainerSize;	// IMP=0x000000000001faaa
- (struct CGSize)preferredPresentationSize;	// IMP=0x001000000001fa24
- (_Bool)presentedBannerIsStatusForRunningContext:(id)arg1;	// IMP=0x001000000001f955
- (_Bool)runningContextIsInPersistentMode:(id)arg1;	// IMP=0x001000000001f8c0
- (id)dismissalReasonWithReason:(id)arg1;	// IMP=0x001000000001f894
- (id)presentedPlatter;	// IMP=0x001000000001f7f4
- (_Bool)queuedDialogIsActionUIRequest:(id)arg1;	// IMP=0x001000000001f7a3
- (_Bool)presentableIsIslandPresentable:(id)arg1;	// IMP=0x001000000001f761
- (_Bool)presentsApertureStatus;	// IMP=0x001000000001f6cf
- (_Bool)displayActive;	// IMP=0x001000000001f46e
- (_Bool)shouldUpdateStateBasedOnLayout:(id)arg1;	// IMP=0x001000000001f1e5
- (id)configuredDisplayLayoutMonitor;	// IMP=0x001000000001f128
- (void)statusViewControllerDidCollapseFromCustomLayout:(id)arg1;	// IMP=0x001000000001ef55
- (void)statusViewControllerDidTransitionFromVisibleToCustomLayout:(id)arg1;	// IMP=0x001000000001ed8c
- (void)bannerViewControllerActionUserInterfaceNeedsDismissal:(id)arg1;	// IMP=0x001000000001ed41
- (void)bannerViewControllerHomeGestureDidPassThreshold:(id)arg1;	// IMP=0x001000000001ecb8
- (void)bannerViewController:(id)arg1 willDismissWithReason:(id)arg2;	// IMP=0x001000000001ebda
- (void)bannerViewController:(id)arg1 didPresentBanner:(id)arg2;	// IMP=0x001000000001eb69
- (void)dismissPlatterForActionUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ea1c
- (void)actionUserInterface:(id)arg1 setSupportedInterfaceOrientations:(unsigned long long)arg2;	// IMP=0x001000000001ea16
- (void)actionUserInterface:(id)arg1 showViewControllerInPlatter:(id)arg2;	// IMP=0x001000000001e89a
- (id)presentationAnchorForActionUserInterface:(id)arg1;	// IMP=0x001000000001e820
- (id)viewControllerForPresentingActionUserInterface:(id)arg1;	// IMP=0x001000000001e74e
- (void)dialogViewController:(id)arg1 didFinishWithResponse:(id)arg2 waitForFollowUpRequest:(_Bool)arg3;	// IMP=0x001000000001e666
- (void)cancelAllPendingRequestsForSystemDismiss;	// IMP=0x001000000001e5f5
- (void)revokeAllPresentablesWithReason:(id)arg1;	// IMP=0x001000000001e532
- (void)queue_resetWithReason:(id)arg1;	// IMP=0x001000000001e371
- (void)handleSingleStepHomeScreenDialogRequest:(id)arg1 runningContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e28f
- (id)queue_resumeDialogPresentationWithReason:(id)arg1 onRequestFromHost:(_Bool)arg2;	// IMP=0x001000000001dbee
- (id)queue_pauseDialogPresentationForDuration:(id)arg1 withReason:(id)arg2;	// IMP=0x001000000001d5d1
- (void)getBannerForQueuedDialogRequest:(id)arg1 dialogIsBreakthroughSmartPrompt:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d48a
- (id)requestContainerForRunningContext:(id)arg1;	// IMP=0x001000000001d2c9
- (void)getBannerForQueuedStatusPresentation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d216
- (void)queue_updatePresentedStatusForRunningContext:(id)arg1;	// IMP=0x001000000001caf9
- (void)queue_removePendingStatusPresentationsForRunningContext:(id)arg1;	// IMP=0x001000000001c82c
- (void)queue_stopTrackingPersistentModeContext:(id)arg1 withReason:(id)arg2;	// IMP=0x001000000001c604
- (void)queue_enqueuePersistentModeStatusPresentationForRunningContext:(id)arg1;	// IMP=0x001000000001c295
- (id)defaultPostOptions;	// IMP=0x001000000001c1f1
- (id)bannerSource;	// IMP=0x001000000001c1cc
- (void)queue_presentBanner:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b84b
- (void)queue_revokeIslandPresentableForContext:(id)arg1 reason:(id)arg2;	// IMP=0x001000000001b68d
- (void)queue_revokePresentableForContext:(id)arg1 reason:(id)arg2 forced:(_Bool)arg3;	// IMP=0x001000000001b249
- (void)queue_dismissRemoteAlertViewControllerWithReason:(id)arg1;	// IMP=0x001000000001b0d8
- (void)queue_dismissPresentableWithReason:(id)arg1 interruptible:(_Bool)arg2 forced:(_Bool)arg3;	// IMP=0x001000000001ab70
- (void)queue_updateStateWithReason:(id)arg1;	// IMP=0x001000000001991b
- (void)setRunningPersistentWorkflows:(id)arg1;	// IMP=0x001000000001990a
@property(readonly, nonatomic) NSMutableDictionary *runningPersistentWorkflows; // @synthesize runningPersistentWorkflows=_runningPersistentWorkflows;
- (void)setPendingRequests:(id)arg1;	// IMP=0x00100000000198b9
@property(readonly, nonatomic) NSMutableOrderedSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(retain, nonatomic) id <WFBannerRequest> inflightRequest; // @synthesize inflightRequest=_inflightRequest;
@property(retain, nonatomic) UIViewController *presentedRemoteAlertViewController; // @synthesize presentedRemoteAlertViewController=_presentedRemoteAlertViewController;
@property(retain, nonatomic) id <WFBannerPresentable> presentedBanner; // @synthesize presentedBanner=_presentedBanner;
- (void)applicationWillLaunchInForegroundForRunningContext:(id)arg1 isLastAction:(id)arg2;	// IMP=0x001000000001950d
- (void)updateAttribution:(id)arg1 runningContext:(id)arg2;	// IMP=0x0010000000019400
- (void)resumeDialogPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019348
- (void)pauseDialogPresentationForDuration:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001926a
- (void)dismissPresentedContentForRunningContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001918c
- (void)showDialogRequest:(id)arg1 runningContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001907f
- (void)completePersistentModeWithSuccess:(id)arg1 runningContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018f6d
- (void)beginPersistentModeWithRunningContext:(id)arg1 attribution:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018e5d
- (void)removeConnectedHost:(id)arg1;	// IMP=0x0010000000018d20
- (void)addConnectedHost:(id)arg1;	// IMP=0x0010000000018be3
- (void)dealloc;	// IMP=0x0010000000018b78
- (id)init;	// IMP=0x0010000000018965

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

