//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIKeyEventContext;
@protocol UIAsyncTextInputClient;

@protocol UIAsyncTextInputDelegate
- (void)invalidateTextEntryContext;
- (void)deferReplaceTextActionToSystem:(id)arg1;
- (void)selectionDidChange:(id <UIAsyncTextInputClient>)arg1;
- (void)selectionWillChange:(id <UIAsyncTextInputClient>)arg1;
- (void)provideCandidateUISuggestions:(NSArray *)arg1;
- (_Bool)deferEventHandlingToSystemWithContext:(UIKeyEventContext *)arg1;
@end
