//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12SiriSharedUI35SiriSharedUISuggestionsViewProvider : NSObject
{
    MISSING_TYPE *suggestionsDataModel;	// 8 = 0x8
    MISSING_TYPE *suggestionsView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000065580
- (id)init;	// IMP=0x00000000000654c0
- (void)filterSuggestionsWithText:(id)arg1;	// IMP=0x0000000000065390
- (void)setShowSuggestions:(_Bool)arg1;	// IMP=0x00000000000652c0
- (void)showConversationStarterSuggestionsForTwoShot;	// IMP=0x0000000000065220
- (void)hideConversationStarterSuggestionsIfNecessary;	// IMP=0x00000000000651b0
- (void)makeConversationContinuerSuggestionsViewWithRequestId:(id)arg1 currentMode:(id)arg2 deviceLocked:(_Bool)arg3 keyboardShowing:(_Bool)arg4 suggestionTapHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000650c0
- (void)makeConversationStarterSuggestionsViewWithDeviceLocked:(_Bool)arg1 keyboardShowing:(_Bool)arg2 isVoiceTrigger:(_Bool)arg3 invocationSource:(long long)arg4 suggestionTapHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000064d90
- (void)makeConversationStarterSuggestionsViewWithDeviceLocked:(_Bool)arg1 keyboardShowing:(_Bool)arg2 isVoiceTrigger:(_Bool)arg3 suggestionTapHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000064960
- (void)makeConversationStarterSuggestionsViewWithDeviceLocked:(_Bool)arg1 keyboardShowing:(_Bool)arg2 suggestionTapHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000648b0
- (id)makeSuggestionsViewWithSuggestionsResizeHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064810

@end
