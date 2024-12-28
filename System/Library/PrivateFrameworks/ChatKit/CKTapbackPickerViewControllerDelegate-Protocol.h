//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKMessagePartChatItem, CKTapbackPickerViewController, IMTapback, NSArray;

@protocol CKTapbackPickerViewControllerDelegate
- (NSArray *)smartEmojiResponses:(CKTapbackPickerViewController *)arg1 chatItem:(CKMessagePartChatItem *)arg2;
- (_Bool)shouldShowStickerSuggestionsFor:(CKTapbackPickerViewController *)arg1;
- (NSArray *)contextualCKChatItemsForTapbackPickerViewController:(CKTapbackPickerViewController *)arg1;
- (void)tapbackPickerViewControllerDidChangePreferredContentSize:(CKTapbackPickerViewController *)arg1;
- (void)tapbackPickerViewControllerDidRequestDismiss:(CKTapbackPickerViewController *)arg1;
- (void)tapbackPickerViewController:(CKTapbackPickerViewController *)arg1 didDeselectTapback:(IMTapback *)arg2;
- (void)tapbackPickerViewController:(CKTapbackPickerViewController *)arg1 didSelectTapback:(IMTapback *)arg2;
@end
