//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12SiriSharedUI44SiriSharedUIAssistantSuggestionsViewProvider : NSObject
{
    MISSING_TYPE *suggestionViews;	// 8 = 0x8
    MISSING_TYPE *suggestionsList;	// 16 = 0x10
    MISSING_TYPE *requestId;	// 0 = 0x0
    MISSING_TYPE *suggestionsProvider;	// 0 = 0x0
    MISSING_TYPE *suggestionsDataForExposureCallback;	// 0 = 0x0
    MISSING_TYPE *shouldSuppressSuggestions;	// 0 = 0x0
    MISSING_TYPE *conversationStarterHesitationCountdown;	// 13072 = 0x3310
    MISSING_TYPE *speechTwoShotPromptDetected;	// 0 = 0x0
    MISSING_TYPE *dismissSuggestionsRendering;	// 0 = 0x0
    MISSING_TYPE *isVoiceTriggerActivation;	// 0 = 0x0
    MISSING_TYPE *pressDownHandler;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *pressUpHandler;	// 0 = 0x0
    MISSING_TYPE *conversationStarterHesitationCountdownCompleted;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000081b20
- (id)init;	// IMP=0x0000000000081ac0
- (void)startNewTypingSession;	// IMP=0x00000000000819b0
- (void)setDialogPhase:(id)arg1;	// IMP=0x00000000000818c0
- (void)suggestionsWereShownForCallback;	// IMP=0x0000000000081710
- (void)resetSuggestions;	// IMP=0x0000000000081300
- (id)getInitialSuggestionViews;	// IMP=0x0000000000081220
- (id)getSuggestionViewsWithText:(id)arg1;	// IMP=0x00000000000811b0
- (void)fetchAutoCompletionViewsWithQuery:(id)arg1 deviceLocked:(_Bool)arg2 turnId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000081030
- (void)fetchConversationContinuerViewsWithRequestId:(id)arg1 currentMode:(id)arg2 deviceLocked:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000007fe50
- (void)fetchConversationStarterViewsWithDeviceLocked:(_Bool)arg1 isVoiceTrigger:(_Bool)arg2 invocationSource:(long long)arg3 isFirstInvocationSinceOSInstalled:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000007eb40
- (id)initWithPressDownHandler:(CDUnknownBlockType)arg1 pressUpHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007e4e0
- (id)initWithTapHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007e400

@end
