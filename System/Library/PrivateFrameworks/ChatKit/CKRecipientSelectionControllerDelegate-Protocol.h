//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKConversation, CKRecipientSelectionController, CNComposeRecipient, NSString, UIView;

@protocol CKRecipientSelectionControllerDelegate <NSObject>
- (void)recipientSelectionControllerShouldResignFirstResponder:(CKRecipientSelectionController *)arg1;
- (struct UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionController:(CKRecipientSelectionController *)arg1 didFinishAvailaiblityLookupForRecipient:(CNComposeRecipient *)arg2;
- (void)recipientSelectionControllerDidPushABViewController:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(CKRecipientSelectionController *)arg1;
- (double)visibleInputAndEntryViewHeightToAvoidForRecipientSelectionController:(CKRecipientSelectionController *)arg1;
- (_Bool)recipientSelectionIsGroup:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionController:(CKRecipientSelectionController *)arg1 textDidChange:(NSString *)arg2;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerTabPressed:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerReturnPressed:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerDidChangeSize:(CKRecipientSelectionController *)arg1;
- (void)recipientSelectionControllerDidBecomeFirstResponder:(CKRecipientSelectionController *)arg1;

@optional
- (struct UIEdgeInsets)additionalSearchResultsEdgeInsetsForRecipientSelectionController:(CKRecipientSelectionController *)arg1;
- (long long)userInterfaceStyleOverrideForRecipientSelectionConroller:(CKRecipientSelectionController *)arg1;
- (UIView *)headerDecorationViewForRecipientSelectionConroller:(CKRecipientSelectionController *)arg1;
- (void)showConversation:(CKConversation *)arg1 animate:(_Bool)arg2;
@end

