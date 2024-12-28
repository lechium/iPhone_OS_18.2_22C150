//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSUUID, RTIDocumentState, RTIDocumentTraits, RTIInputSourceState, RTIInputSystemClient, TIKeyboardOutput, UIKeyboardTaskExecutionContext, UIKeyboardTaskSubqueue;
@protocol UIKBRTIPartnerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBRTIPartner : NSObject
{
    RTIDocumentTraits *_remoteDocumentTraits;	// 8 = 0x8
    NSNumber *_cachedHasPreviousKeyResponder;	// 16 = 0x10
    NSNumber *_cachedHasNextKeyResponder;	// 24 = 0x18
    struct __CFStringTokenizer *_wkRectTokenizer;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 40 = 0x28
    UIKeyboardTaskExecutionContext *_waitingRTIOutputOperationResponseContext;	// 48 = 0x30
    UIKeyboardTaskSubqueue *_keyboardTaskSubqueue;	// 56 = 0x38
    NSDictionary *_pendingDisableBecomeFirstResponderParameters;	// 64 = 0x40
    _Bool _dontTakeKeyboardSnapshot;	// 72 = 0x48
    _Bool _applicationDeactivationReasonAssistant;	// 73 = 0x49
    long long _id;	// 80 = 0x50
    _Bool _inputSystemClientEnabled;	// 88 = 0x58
    _Bool _isNotifyingDelegateOfRemoteOutputOperation;	// 89 = 0x59
    _Bool _applicationStateIsActiveForRTI;	// 90 = 0x5a
    _Bool _viewServiceStateIsActiveForRTI;	// 91 = 0x5b
    _Bool _isObservingGeometry;	// 92 = 0x5c
    id <UIKBRTIPartnerDelegate> _partnerDelegate;	// 96 = 0x60
    RTIInputSystemClient *_rtiClient;	// 104 = 0x68
    RTIDocumentTraits *_rtiDocumentTraits;	// 112 = 0x70
    RTIDocumentState *_rtiDocumentState;	// 120 = 0x78
    RTIInputSourceState *_rtiInputSourceState;	// 128 = 0x80
    TIKeyboardOutput *_pendingOutputOperation;	// 136 = 0x88
    NSUUID *_currentSessionIdentifier;	// 144 = 0x90
    NSMutableDictionary *_rtiSessionMarkers;	// 152 = 0x98
    NSMutableDictionary *_supplementalLexicons;	// 160 = 0xa0
    NSMutableDictionary *_textSuggestions;	// 168 = 0xa8
    NSMutableArray *_queuedSupplementalLexiconOperations;	// 176 = 0xb0
    NSUUID *_authenticatingSessionIdentifier;	// 184 = 0xb8
}

+ (void)registerTextOperationCustomInfo;	// IMP=0x00100000010d1543
- (void).cxx_destruct;	// IMP=0x00000000010e980f
@property(copy, nonatomic) NSUUID *authenticatingSessionIdentifier; // @synthesize authenticatingSessionIdentifier=_authenticatingSessionIdentifier;
@property(retain, nonatomic) NSMutableArray *queuedSupplementalLexiconOperations; // @synthesize queuedSupplementalLexiconOperations=_queuedSupplementalLexiconOperations;
@property(retain, nonatomic) NSMutableDictionary *textSuggestions; // @synthesize textSuggestions=_textSuggestions;
@property(retain, nonatomic) NSMutableDictionary *supplementalLexicons; // @synthesize supplementalLexicons=_supplementalLexicons;
@property(retain, nonatomic) NSMutableDictionary *rtiSessionMarkers; // @synthesize rtiSessionMarkers=_rtiSessionMarkers;
@property(nonatomic) _Bool isObservingGeometry; // @synthesize isObservingGeometry=_isObservingGeometry;
@property(copy, nonatomic) NSUUID *currentSessionIdentifier; // @synthesize currentSessionIdentifier=_currentSessionIdentifier;
@property(retain, nonatomic) TIKeyboardOutput *pendingOutputOperation; // @synthesize pendingOutputOperation=_pendingOutputOperation;
@property(nonatomic) _Bool viewServiceStateIsActiveForRTI; // @synthesize viewServiceStateIsActiveForRTI=_viewServiceStateIsActiveForRTI;
@property(nonatomic) _Bool applicationStateIsActiveForRTI; // @synthesize applicationStateIsActiveForRTI=_applicationStateIsActiveForRTI;
@property(readonly, nonatomic) RTIInputSourceState *rtiInputSourceState; // @synthesize rtiInputSourceState=_rtiInputSourceState;
@property(retain, nonatomic) RTIDocumentState *rtiDocumentState; // @synthesize rtiDocumentState=_rtiDocumentState;
@property(retain, nonatomic) RTIDocumentTraits *rtiDocumentTraits; // @synthesize rtiDocumentTraits=_rtiDocumentTraits;
@property(retain, nonatomic) RTIInputSystemClient *rtiClient; // @synthesize rtiClient=_rtiClient;
@property(readonly, nonatomic) _Bool isNotifyingDelegateOfRemoteOutputOperation; // @synthesize isNotifyingDelegateOfRemoteOutputOperation=_isNotifyingDelegateOfRemoteOutputOperation;
@property(nonatomic) _Bool inputSystemClientEnabled; // @synthesize inputSystemClientEnabled=_inputSystemClientEnabled;
@property(nonatomic) __weak id <UIKBRTIPartnerDelegate> partnerDelegate; // @synthesize partnerDelegate=_partnerDelegate;
- (id)insertionPointColor;	// IMP=0x00000000010e953e
- (void)_geometryChanged:(const CDStruct_6f49ea1d *)arg1 forAncestor:(id)arg2;	// IMP=0x00000000010e9525
- (void)_updateGeometryObserverIfNecessary;	// IMP=0x00000000010e920f
- (struct CGRect)convertRect:(struct CGRect)arg1 from:(id)arg2;	// IMP=0x00000000010e900b
- (void)_queryUIKitDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000010e70eb
- (void)_queryWKDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000010e67c5
- (void)_addMergedTextRectsToDocumentState:(id)arg1 forWKContext:(id)arg2 textInputView:(id)arg3 granularity:(long long)arg4;	// IMP=0x00000000010e629a
- (void)_addAutocorrectStylingToDocumentState:(id)arg1;	// IMP=0x00000000010e5fb9
- (void)_addFirstSelectionRectToDocumentState:(id)arg1;	// IMP=0x00000000010e5920
- (struct CGRect)_selectionClipRect;	// IMP=0x00000000010e575e
- (long long)_uiTextGranularityForRTITextGranularity:(long long)arg1;	// IMP=0x00000000010e574b
- (void)_queryDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000010e5668
- (void)performDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000010e5594
- (void)_performDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000010e54ce
- (void)defaultDocumentRequestDidChange:(id)arg1;	// IMP=0x00000000010e5450
- (unsigned int)_performKeyboardOutputOperations:(id)arg1;	// IMP=0x00000000010e50d4
- (void)_queued_performTextOperations:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000010e1d06
- (void)performTextOperations:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000010e165c
- (void)performTextOperations:(id)arg1;	// IMP=0x00000000010e1556
- (void)connectionInterrupted:(id)arg1;	// IMP=0x00000000010e1544
- (void)connectionInvalidated:(id)arg1;	// IMP=0x00000000010e1532
- (void)finishCompletionHandlersIfNeeded;	// IMP=0x00000000010e1473
- (id)exchangeWaitingRTIOutputOperationResponseContext:(id)arg1;	// IMP=0x00000000010e13ef
- (_Bool)compareWaitingRTIOutputOperationResponseContext:(id)arg1 andExchange:(id)arg2;	// IMP=0x00000000010e1359
- (void)inputSession:(id)arg1 didRemoveRTISupplementalLexicon:(id)arg2;	// IMP=0x00000000010e114a
- (void)inputSession:(id)arg1 didAddRTISupplementalLexicon:(id)arg2;	// IMP=0x00000000010e0f0c
- (void)inputSession:(id)arg1 textSuggestionsChanged:(id)arg2;	// IMP=0x00000000010e0d98
- (void)inputSession:(id)arg1 performInputOperation:(id)arg2 withResponse:(CDUnknownBlockType)arg3;	// IMP=0x00000000010e063b
- (void)inputSession:(id)arg1 performInputOperation:(id)arg2;	// IMP=0x00000000010de2e7
- (void)inputSession:(id)arg1 documentStateDidChange:(id)arg2;	// IMP=0x00000000010de2d0
- (void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2;	// IMP=0x00000000010de2b9
- (void)sendAutoFillDidInsertCallbacksWithTextOperations:(id)arg1;	// IMP=0x00000000010de088
- (void)applyRemoteDocumentStateIfNecessary:(id)arg1 force:(_Bool)arg2;	// IMP=0x00000000010dde3c
- (void)applyAssistantItem:(id)arg1;	// IMP=0x00000000010dddd3
- (void)applyRemoteDocumentTraitsIfNecessary:(id)arg1 force:(_Bool)arg2;	// IMP=0x00000000010dbe0d
- (void)_addTextCheckingAnnotatedStringToDocumentState:(id)arg1;	// IMP=0x00000000010dbae1
- (void)_addCharacterRectsToDocumentState:(id)arg1 textRange:(id)arg2 offset:(long long)arg3;	// IMP=0x00000000010db4f0
- (void)_updateRTIStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000010db033
- (id)inputDelegateView;	// IMP=0x00000000010daf9b
- (id)inputDelegate;	// IMP=0x00000000010daf4b
- (_Bool)_updateRTITraitsIfNecessary;	// IMP=0x00000000010d9093
- (_Bool)documentTraitsDisableAutomaticKeyboardUI;	// IMP=0x00000000010d904f
- (void)updateStateWithCompletion:(CDUnknownBlockType)arg1 updateTraits:(_Bool)arg2;	// IMP=0x00000000010d8f61
- (void)restartCurrentSession;	// IMP=0x00000000010d8e99
- (void)endAllowingRemoteTextInput:(id)arg1 waitForReply:(_Bool)arg2;	// IMP=0x00000000010d8df1
- (void)endAllowingRemoteTextInput:(id)arg1;	// IMP=0x00000000010d8ddd
- (void)beginAllowingRemoteTextInput:(id)arg1;	// IMP=0x00000000010d8d51
- (void)ensureRTIConnection;	// IMP=0x00000000010d8b5c
- (void)_createRTIClientIfNecessary;	// IMP=0x00000000010d8aa7
- (void)_createRTIClient;	// IMP=0x00000000010d8a30
- (void)_didCreateRTIClient:(id)arg1;	// IMP=0x00000000010d89f3
- (id)_newRTIConnection;	// IMP=0x00000000010d893b
- (id)_newInputSystemAutoFillUIClient;	// IMP=0x00000000010d88ac
- (id)_newInputSystemUIClient;	// IMP=0x00000000010d881d
- (id)_defaultRTIMachNames;	// IMP=0x00000000010d87a5
- (void)_updateRTIAllowedAndNotify:(_Bool)arg1 withReason:(id)arg2;	// IMP=0x00000000010d80f9
- (void)_didRemoveSupplementalLexiconWithIdentifier:(unsigned long long)arg1;	// IMP=0x00000000010d8085
- (void)_didAddSupplementalLexicon:(id)arg1;	// IMP=0x00000000010d7ebc
- (void)didRemoveSupplementalLexicon:(id)arg1;	// IMP=0x00000000010d7e0f
- (void)didAddSupplementalLexicon:(id)arg1;	// IMP=0x00000000010d7d8d
- (void)_performQueuedSupplementalLexiconOperations;	// IMP=0x00000000010d7b1f
- (void)_queueSupplementalLexiconOperation:(unsigned long long)arg1 lexicon:(id)arg2;	// IMP=0x00000000010d79de
- (_Bool)remoteTextInputClientHasActiveSession;	// IMP=0x00000000010d796a
- (void)removeTextSuggestionsForSessionWithID:(id)arg1;	// IMP=0x00000000010d78ac
- (void)addTextSuggestions:(id)arg1;	// IMP=0x00000000010d779c
- (void)updateTextSuggestionsIfNecessary:(id)arg1;	// IMP=0x00000000010d760e
- (void)textSuggestionsChanged:(id)arg1;	// IMP=0x00000000010d7533
- (void)forwardGrammarCorrectionEntries:(id)arg1;	// IMP=0x00000000010d7419
- (void)forwardTypologyLogURL:(id)arg1;	// IMP=0x00000000010d734b
- (void)forwardKeyboardOperation:(SEL)arg1 object:(id)arg2;	// IMP=0x00000000010d7261
- (void)forwardAutofillPayload:(id)arg1 toPayloadDelegate:(id)arg2;	// IMP=0x00000000010d7190
- (id)payloadDelegate;	// IMP=0x00000000010d7116
- (id)autofillPayloadDelegate;	// IMP=0x00000000010d7104
- (id)textOperation_insertAutofillContent:(id)arg1;	// IMP=0x00000000010d6f94
- (id)textOperation_insertionPointExitedTextWithSupplementalItems;	// IMP=0x00000000010d6e78
- (id)textOperation_insertionPointEnteredText:(id)arg1 withSupplementalCandidate:(id)arg2;	// IMP=0x00000000010d6cb9
- (id)textOperation_cancelChooseSupplementalItemToInsert;	// IMP=0x00000000010d6b9d
- (id)textOperation_chooseSupplementalItem:(id)arg1 toReplaceText:(id)arg2;	// IMP=0x00000000010d687d
- (id)textOperation_insertSupplementalCandidate:(id)arg1 textToCommit:(id)arg2;	// IMP=0x00000000010d66f6
- (void)forwardEventToRemoteSource_canSuggestSupplementalItemsForCurrentSelection:(_Bool)arg1;	// IMP=0x00000000010d652e
- (void)forwardEventCallbackToRemoteSource_didChooseSupplementalItem:(id)arg1 toReplaceText:(id)arg2;	// IMP=0x00000000010d62d6
- (void)forwardScrollEventToUIHost:(SEL)arg1 contentTransform:(struct CGAffineTransform)arg2 environmentTransform:(struct CGAffineTransform)arg3;	// IMP=0x00000000010d613d
- (void)forwardKeyboardCameraEvent_startCameraInput:(id)arg1;	// IMP=0x00000000010d6011
- (void)forwardSelectorToUIHost:(SEL)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000010d5e17
- (void)forwardInputDestinationEventToUIHost:(SEL)arg1 params:(id)arg2;	// IMP=0x00000000010d5cfa
- (void)forwardInputDestinationEventToUIHost:(SEL)arg1;	// IMP=0x00000000010d5ce6
- (void)forwardDictationEventToUIHost:(SEL)arg1 withOptionalObject:(id)arg2;	// IMP=0x00000000010d5bb4
- (_Bool)synchronousForwardKeyInputMethodCommandEventToUIHost:(id)arg1 canHandleAppKeyCommand:(_Bool)arg2;	// IMP=0x00000000010d57d1
- (_Bool)synchronousForwardKeyCommandsToUIHost:(id)arg1;	// IMP=0x00000000010d54c1
- (_Bool)synchronousForwardKeyCommandsBeforePublicToUIHost:(id)arg1;	// IMP=0x00000000010d50f7
- (void)forwardKeyboardEventToUIHost:(id)arg1;	// IMP=0x00000000010d4fd2
- (void)forwardClearForwardingInputDelegateAndResign:(_Bool)arg1;	// IMP=0x00000000010d4df2
- (void)forwardKeyboardInputMode:(id)arg1;	// IMP=0x00000000010d4cd0
- (void)forwardApplicationOperation:(SEL)arg1 object:(id)arg2;	// IMP=0x00000000010d4b60
- (void)forwardKeyboardSuppression:(_Bool)arg1 suppressAssistantBar:(_Bool)arg2;	// IMP=0x00000000010d4995
- (void)performInputOperation:(id)arg1;	// IMP=0x00000000010d48c9
- (void)documentStateChanged:(_Bool)arg1;	// IMP=0x00000000010d46be
- (void)documentStateChanged;	// IMP=0x00000000010d46aa
- (_Bool)_remoteInputSystemRequiresTextSuggestionUpdates;	// IMP=0x00000000010d4698
- (_Bool)_remoteInputSystemRequiresDocumentStateUpdates;	// IMP=0x00000000010d4631
- (_Bool)_remoteInputSystemRequiresDocumentStateForAutofill;	// IMP=0x00000000010d45a4
- (void)endInputSessionWithIdentifier:(id)arg1 shouldResign:(_Bool)arg2 waitForReply:(_Bool)arg3;	// IMP=0x00000000010d3d7b
- (void)endInputSessionWithIdentifier:(id)arg1 shouldResign:(_Bool)arg2;	// IMP=0x00000000010d3d66
- (void)endInputSessionWithIdentifier:(id)arg1;	// IMP=0x00000000010d3d4f
- (void)beginInputSessionWithIdentifier:(id)arg1;	// IMP=0x00000000010d3299
- (void)updateAnimationForOptions:(id)arg1;	// IMP=0x00000000010d31f3
- (void)documentTraitsChanged;	// IMP=0x00000000010d30e1
- (id)delegate;	// IMP=0x00000000010d3091
- (void)_screenModeDidChange:(id)arg1;	// IMP=0x00000000010d3076
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;	// IMP=0x00000000010d2e82
- (void)endInputSessionOnSwitchingApps;	// IMP=0x00000000010d2e2d
- (void)_applicationWillAddDeactivationReason:(id)arg1;	// IMP=0x00000000010d29f9
- (unsigned int)_ignoredReasonsForAutoFill;	// IMP=0x00000000010d29ee
- (unsigned int)_ignoredReasonsForKeyboard;	// IMP=0x00000000010d29c9
- (void)_viewServiceHostDidBecomeActive:(id)arg1;	// IMP=0x00000000010d298d
- (void)_viewServiceHostWillResignActive:(id)arg1;	// IMP=0x00000000010d285c
- (void)_applicationWillSuspend:(id)arg1;	// IMP=0x00000000010d27a2
@property(retain, nonatomic) UIKeyboardTaskSubqueue *keyboardTaskSubqueue;
- (void)invalidate;	// IMP=0x00000000010d24e4
- (void)dealloc;	// IMP=0x00000000010d2368
- (id)init;	// IMP=0x00000000010d12e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
