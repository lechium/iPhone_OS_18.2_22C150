//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/UITextFieldDelegate-Protocol.h>

@class CKContextResult, LPLinkMetadata, NSString, UnifiedField;
@protocol CompletionItem;

@protocol UnifiedFieldDelegate <UITextFieldDelegate>
- (LPLinkMetadata *)currentMetadataForUnifiedField:(UnifiedField *)arg1;
- (_Bool)shouldPutMetadataOnPasteboardForUnifiedField:(UnifiedField *)arg1;
- (void)unifiedField:(UnifiedField *)arg1 didEngageWithQuerySuggestion:(CKContextResult *)arg2 forQueryString:(NSString *)arg3;
- (void)unifiedFieldDidUpdateUserTypedText:(UnifiedField *)arg1 forQueryString:(NSString *)arg2;
- (void)unifiedFieldShouldPasteAndNavigate:(UnifiedField *)arg1;
- (void)unifiedFieldMakeWindowKey:(UnifiedField *)arg1;
- (void)unifiedField:(UnifiedField *)arg1 focusNextKeyView:(_Bool)arg2;
- (void)unifiedFieldSelectCompletionItemIfAvailable:(UnifiedField *)arg1;
- (void)unifiedField:(UnifiedField *)arg1 moveCompletionSelectionBySectionOffset:(long long)arg2;
- (void)unifiedField:(UnifiedField *)arg1 moveCompletionSelectionByRowOffset:(long long)arg2;
- (_Bool)unifiedFieldShouldMoveCompletionSelection:(UnifiedField *)arg1;
- (void)unifiedFieldReflectedItemDidChange:(UnifiedField *)arg1;
- (void)unifiedFieldExternalSearchDidEnd:(UnifiedField *)arg1;
- (void)unifiedFieldVoiceSearchStateDidChange:(UnifiedField *)arg1;
- (id <CompletionItem>)unifiedField:(UnifiedField *)arg1 topHitForText:(NSString *)arg2;
- (_Bool)unifiedField:(UnifiedField *)arg1 shouldWaitForTopHitForText:(NSString *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 didEndEditingWithParsecTopHit:(id <CompletionItem>)arg2;
- (void)unifiedField:(UnifiedField *)arg1 didEndEditingWithSearch:(NSString *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 didEndEditingWithAddress:(NSString *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 willUpdateUserTypedText:(NSString *)arg2 toText:(NSString *)arg3;

@optional
- (_Bool)unifiedFieldCanBecomeFirstResponder:(UnifiedField *)arg1;
@end

