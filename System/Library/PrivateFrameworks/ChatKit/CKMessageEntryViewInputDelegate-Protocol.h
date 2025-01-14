//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKMessageEntryView, NSIndexPath, UIView, _UISticker;
@protocol CKAppMenuItem;

@protocol CKMessageEntryViewInputDelegate <NSObject>
- (_Bool)messageEntryViewShouldVerticallyInsetForPresentedAppCard:(CKMessageEntryView *)arg1;
- (long long)messageEntryViewHighLightInputButton:(CKMessageEntryView *)arg1;
- (_Bool)messageEntryShouldHideCaret:(CKMessageEntryView *)arg1;
- (void)messageEntryViewInputDidTakeFocus:(CKMessageEntryView *)arg1;
- (void)messageEntryViewHandwritingButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewBrowserButtonHit:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPhotoButtonHit:(CKMessageEntryView *)arg1;

@optional
- (void)messageEntryViewDidClearAudioRecordingUI:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidStageAudioRecordingUI:(CKMessageEntryView *)arg1;
- (_Bool)messageEntryViewShouldResignFirstResponder:(CKMessageEntryView *)arg1;
- (void)messageEntryViewSelectedAppMenuItem:(id <CKAppMenuItem>)arg1;
- (void)messageEntryViewDidCollapse:(CKMessageEntryView *)arg1;
- (void)messageEntryViewDidExpand:(CKMessageEntryView *)arg1;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didSelectUIStickerInEmojiPicker:(_UISticker *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didSelectPluginAtIndex:(NSIndexPath *)arg2;
- (_Bool)shouldLaunchPhotosAppForPlusButtonLongPressInMessageEntryView:(CKMessageEntryView *)arg1;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didLongPressPlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 didSelectPlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 touchDragExitForPlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 touchDragEnterForPlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 touchCancelForPlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 touchUpOutsidePlusButton:(UIView *)arg2;
- (void)messageEntryView:(CKMessageEntryView *)arg1 touchDownInsidePlusButton:(UIView *)arg2;
- (void)messageEntryViewPhotoButtonTouchCancel:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPhotoButtonTouchUpOutside:(CKMessageEntryView *)arg1;
- (void)messageEntryViewPhotoButtonTouchDown:(CKMessageEntryView *)arg1;
@end

