//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString, SASRequestOptions, SRCompactAutoDismissController, SRCompactViewController, SiriDismissalOptions, SiriSharedUICompactViewModelController;
@protocol AFUIBugReportPresenting, SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SRCompactPresentation : NSObject
{
    SRCompactViewController *_compactViewController;	// 8 = 0x8
    id <AFUIBugReportPresenting> _bugReportingPresenter;	// 16 = 0x10
    SRCompactAutoDismissController *_autoDismissController;	// 24 = 0x18
    _Bool _hasPresentedContent;	// 32 = 0x20
    _Bool _userCancelledRequestViaOrbViewTap;	// 33 = 0x21
    _Bool _hasOmittedDialogFromPresenting;	// 34 = 0x22
    _Bool _isPresentingSystemUI;	// 35 = 0x23
    _Bool _shouldResumeMediaOnIdle;	// 36 = 0x24
    _Bool _requestIsWiredMicOrBTHeadsetOrWx;	// 37 = 0x25
    _Bool _recordingFromWxDevice;	// 38 = 0x26
    _Bool _shouldPauseAutoDismissal;	// 39 = 0x27
    _Bool _hasPendingAutoDismissal;	// 40 = 0x28
    NSString *_responseMode;	// 48 = 0x30
    long long _initialRequestSource;	// 56 = 0x38
    long long _lastDismissalReason;	// 64 = 0x40
    SiriDismissalOptions *_lastDismissalOptions;	// 72 = 0x48
    NSNumber *_delayDismissalMs;	// 80 = 0x50
    _Bool _shouldMuteSiriFeedbackBanner;	// 88 = 0x58
    id <SiriUIPresentationDataSource> _dataSource;	// 96 = 0x60
    id <SiriUIPresentationDelegate> _delegate;	// 104 = 0x68
    SiriSharedUICompactViewModelController *_activeViewModelController;	// 112 = 0x70
    long long _inputType;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000003918c
@property(nonatomic, getter=_inputType, setter=_setInputType:) long long inputType; // @synthesize inputType=_inputType;
@property(retain, nonatomic) SiriSharedUICompactViewModelController *activeViewModelController; // @synthesize activeViewModelController=_activeViewModelController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<SiriUIPresentationDelegate>",?,W,N,V_delegate

@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<SiriUIPresentationDataSource>",?,W,N,V_dataSource

- (_Bool)alwaysShowRecognizedSpeech;	// IMP=0x00100000000390df
- (long long)_viewModelInputTypeForRequestInputType:(long long)arg1;	// IMP=0x00100000000390cb
- (void)_dismissVideoPlayerViewController;	// IMP=0x0010000000038fb6
- (void)playbackDidFailForVideoPlayerViewController:(id)arg1;	// IMP=0x0010000000038fa4
- (void)playbackDidFinishForVideoPlayerViewController:(id)arg1;	// IMP=0x0010000000038f92
- (void)modalContainerViewControllerViewDidDisappear:(id)arg1;	// IMP=0x0010000000038f27
- (void)modalContainerViewControllerViewWillDisappear:(id)arg1;	// IMP=0x0010000000038ebc
- (void)autoDismissControllerRequestsStopAttending:(id)arg1;	// IMP=0x0010000000038e70
- (void)autoDismissControllerRequestsDismissal:(id)arg1;	// IMP=0x0010000000038d82
- (void)_showFullScreenDimmingLayer;	// IMP=0x0010000000038cce
- (id)dismissalUserInfo;	// IMP=0x0010000000038be5
- (void)siriDidHidePasscodeUnlock;	// IMP=0x0010000000038bcd
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;	// IMP=0x0010000000038bb2
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x0010000000038baa
- (void)didReceiveOrbViewTapToCancelRequest;	// IMP=0x0010000000038ba0
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1 isAttending:(_Bool)arg2;	// IMP=0x0010000000038899
@property(readonly, copy, nonatomic, getter=_activeRequestOptions) SASRequestOptions *activeRequestOptions;
- (void)compactViewController:(id)arg1 preventOutsideTouchesFromDismissingSiri:(_Bool)arg2;	// IMP=0x00100000000387eb
- (void)compactViewControllerCancelHIDEventDefferal:(id)arg1;	// IMP=0x001000000003879f
- (void)compactViewControllerRequestsHIDEventDefferal:(id)arg1;	// IMP=0x0010000000038753
- (void)viewController:(id)arg1 didFinishEditingUtteranceWithText:(id)arg2 originalUserUtterance:(id)arg3 selectionResults:(id)arg4;	// IMP=0x00100000000384bd
- (void)viewController:(id)arg1 siriRequestEnteredWithText:(id)arg2;	// IMP=0x0010000000038452
- (void)compactViewControllerDidEndEditing:(id)arg1;	// IMP=0x0010000000038406
- (void)compactViewController:(id)arg1 willBeginEditingOfType:(long long)arg2;	// IMP=0x00100000000383ad
- (void)compactViewController:(id)arg1 requestsKeyboardWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038342
- (void)bugReportPresenter:(id)arg1 requestsSiriDismissalWithReason:(long long)arg2;	// IMP=0x001000000003826b
- (_Bool)bugReportPresenterShouldPromptUserForScreenshotPermission:(id)arg1;	// IMP=0x0010000000038263
- (void)bugReportPresenterRequestsSiriSessionToFinishCurrentRequest:(id)arg1;	// IMP=0x00100000000381ae
- (void)bugReportPresenterRequestsInvalidateAutoDismissal:(id)arg1;	// IMP=0x001000000003811e
- (void)bugReportPresenter:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x00100000000380cf
- (id)bugReportPresenterRequestsPresentingView:(id)arg1;	// IMP=0x00100000000380b9
- (double)bugReportPresenterRequestsLastPresentationTime:(id)arg1;	// IMP=0x00100000000380a3
- (id)bugReportPresenterRequestsBugReportPrefixForTitle:(id)arg1;	// IMP=0x001000000003801f
- (id)bugReportPresenterRequestsBugReportKeywordIdentifiers:(id)arg1;	// IMP=0x0010000000037fb8
- (id)bugReportPresenterRequestsActiveConversation:(id)arg1;	// IMP=0x0010000000037fa6
- (void)bugReportPresenter:(id)arg1 setBugReportingAvailable:(_Bool)arg2;	// IMP=0x0010000000037f57
- (void)bugReportPresenter:(id)arg1 requestsToTakeScreenshotWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037eec
- (void)bugReportPresenter:(id)arg1 requestsToPresentViewController:(id)arg2;	// IMP=0x0010000000037ecb
- (void)bugReportPresenter:(id)arg1 requestsToPerformAceCommand:(id)arg2;	// IMP=0x0010000000037e5a
- (void)bugReportPresenter:(id)arg1 requestsToOpenURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037dc9
- (void)bugReportPresenter:(id)arg1 requestsToHandlePasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000037d5e
- (void)_setupBugReportingPresenterIfNecessary;	// IMP=0x0010000000037d26
- (void)didReceiveReportBugAction;	// IMP=0x0010000000037cf3
- (void)didReceiveBugButtonLongPress;	// IMP=0x0010000000037cc0
- (id)_analytics;	// IMP=0x0010000000037ca7
- (void)userDrilledIntoSnippet;	// IMP=0x0010000000037c6a
- (void)compactViewController:(id)arg1 viewDidDisappearForAceObject:(id)arg2;	// IMP=0x0010000000037bb1
- (void)compactViewController:(id)arg1 viewDidAppearForAceObject:(id)arg2;	// IMP=0x0010000000037b46
- (void)siriCompactViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x0010000000037adb
- (void)didBeginProcessingConversationItems;	// IMP=0x0010000000037a9e
- (void)siriCompactViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x0010000000037a33
- (id)effectiveCoreLocationBundleForCompactViewController:(id)arg1;	// IMP=0x00100000000379d4
- (void)didPresentContentForCompactViewController:(id)arg1;	// IMP=0x00100000000378ce
- (void)cancelRequestForViewController:(id)arg1;	// IMP=0x0010000000037882
- (void)stopRecordingForViewController:(id)arg1;	// IMP=0x0010000000037836
- (void)endSiriSessionForViewController:(id)arg1 withDismissalReason:(long long)arg2;	// IMP=0x00100000000377e5
- (void)viewController:(id)arg1 reduceOrbOpacity:(_Bool)arg2;	// IMP=0x0010000000037796
- (void)viewController:(id)arg1 requestsHostBackgroundBlurVisible:(_Bool)arg2 reason:(long long)arg3 fence:(id)arg4;	// IMP=0x0010000000037716
- (void)viewControllerViewWillDisappear:(id)arg1;	// IMP=0x0010000000037700
- (void)compactViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x00100000000376b1
- (void)compactViewController:(id)arg1 handleStartLocalRequest:(id)arg2 turnIdentifier:(id)arg3;	// IMP=0x00100000000375e7
- (void)userTouchedSnippet;	// IMP=0x00100000000375aa
- (void)viewControllerDidPresentUserInterface:(id)arg1;	// IMP=0x0010000000037574
- (id)localeForCompactViewController:(id)arg1;	// IMP=0x0010000000037515
- (MISSING_TYPE *)lockStateForCompactViewController: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000374c2
- (void)stopSpeakingForCompactViewController:(id)arg1;	// IMP=0x0010000000037476
- (void)compactViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000373d6
- (void)viewController:(id)arg1 performAceCommands:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000036e70
- (void)viewController:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000036ddf
- (struct CGRect)effectiveContentFrame;	// IMP=0x0010000000036d85
- (struct CGSize)maxSizeForSnippet;	// IMP=0x0010000000036d6f
- (void)tapToEditPresented;	// IMP=0x0010000000036d23
- (double)expectedContentWidth;	// IMP=0x0010000000036ccc
- (void)siriWillBeginTearDownForDismissalReason:(long long)arg1 withOriginalDismissalOptions:(id)arg2;	// IMP=0x0010000000036c1e
- (void)setTopContentInset:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000036c08
- (void)setBottomContentInset:(double)arg1;	// IMP=0x0010000000036bf2
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000036aea
- (void)handleRequestEndBehavior:(id)arg1 isAttending:(_Bool)arg2;	// IMP=0x00100000000368d2
- (void)immersiveExperienceRequestedForViewModelController:(id)arg1;	// IMP=0x0010000000036878
- (id)compactViewModelController:(id)arg1 requestsTranscriptItemForAceObject:(id)arg2;	// IMP=0x00100000000367d4
- (_Bool)siriDeviceLockedForViewModelController:(id)arg1;	// IMP=0x001000000003677d
- (_Bool)compactViewModelControllerShouldAlwaysShowRecognizedSpeech:(id)arg1;	// IMP=0x001000000003676b
- (void)compactViewModelController:(id)arg1 didProcessConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x0010000000036700
- (long long)inputTypeForCompactViewModelController:(id)arg1;	// IMP=0x00100000000366cf
- (void)_activeConversationDidChange;	// IMP=0x00100000000365d9
- (_Bool)shouldAllowTouchPassThrough;	// IMP=0x00100000000365cf
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x00100000000363ed
- (_Bool)didReceiveUpdateVisualResponseCommand:(id)arg1;	// IMP=0x00100000000363d7
- (void)didPresentSystemUI;	// IMP=0x001000000003634d
- (void)resetViewsAndClearASR:(_Bool)arg1;	// IMP=0x0010000000036337
- (void)didOmitDialogFromPresenting;	// IMP=0x001000000003632d
- (void)showFullScreenEffect:(id)arg1;	// IMP=0x0010000000036317
- (void)siriDidTapOutsideContent;	// IMP=0x0010000000036301
- (void)siriDidUpdateASRWithRecognition:(id)arg1;	// IMP=0x00100000000362eb
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x00100000000362d5
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x00100000000362bf
- (void)siriDidDeactivateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000036235
- (int)viewRegionForPresentedAceObject:(id)arg1;	// IMP=0x001000000003621f
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x00100000000361de
- (void)handlePlayContentCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000035e0f
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x0010000000035e07
- (_Bool)shouldResumeInterruptedAudioPlaybackForAttendingState:(_Bool)arg1;	// IMP=0x0010000000035cec
- (void)speechRecordingDidBeginOnRecordRoute:(id)arg1;	// IMP=0x0010000000035c37
- (void)siriDidStartNewConversationWithIdentifier:(id)arg1;	// IMP=0x0010000000035b4e
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x00100000000359f1
- (void)siriResponseModeDidChange:(unsigned long long)arg1;	// IMP=0x0010000000035914
- (void)siriRequestWillStartWithRequestOptions:(id)arg1;	// IMP=0x0010000000035807
- (void)activeRequestOptionsDidChange;	// IMP=0x0010000000035778
- (void)dealloc;	// IMP=0x0010000000035736
- (void)didReceiveRevealRecognizedSpeechCommand:(id)arg1;	// IMP=0x0010000000035575
- (void)conversation:(id)arg1 didChangeWithTransaction:(id)arg2;	// IMP=0x001000000003550c
- (id)viewController;	// IMP=0x00100000000354fe
- (void)configureForRequestOptions:(id)arg1;	// IMP=0x001000000003535a
- (id)_activeConversation;	// IMP=0x00100000000352b0
- (id)_identifierOfPreviousConversation;	// IMP=0x00100000000351ba
- (id)_conversationIdentifiers;	// IMP=0x001000000003515b
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0010000000034fb7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
