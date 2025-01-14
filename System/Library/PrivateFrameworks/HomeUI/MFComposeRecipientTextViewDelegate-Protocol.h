//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class MFComposeRecipient, MFComposeRecipientTextView, MFModernComposeRecipientAtom, NSArray, NSString;

@protocol MFComposeRecipientTextViewDelegate <NSObject>

@optional
- (_Bool)chooseSelectedSearchResultForComposeRecipientView:(MFComposeRecipientTextView *)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(MFComposeRecipientTextView *)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(MFComposeRecipientTextView *)arg1;
- (void)dismissSearchResultsForComposeRecipientView:(MFComposeRecipientTextView *)arg1;
- (_Bool)presentSearchResultsForComposeRecipientView:(MFComposeRecipientTextView *)arg1;
- (_Bool)composeRecipientViewShowingSearchResults:(MFComposeRecipientTextView *)arg1;
- (void)composeRecipientViewDidBecomeFirstResponder:(MFComposeRecipientTextView *)arg1;
- (void)composeRecipientViewReturnPressed:(MFComposeRecipientTextView *)arg1;
- (unsigned long long)presentationOptionsForRecipient:(MFComposeRecipient *)arg1;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientTextView *)arg1 composeRecipientForRecord:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientTextView *)arg1 composeRecipientForRecord:(void *)arg2 identifier:(int)arg3;
- (MFComposeRecipient *)composeRecipientView:(MFComposeRecipientTextView *)arg1 composeRecipientForAddress:(NSString *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 showCorecipients:(NSArray *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 showPersonCardForRecipient:(MFComposeRecipient *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 showPersonCardForAtom:(MFModernComposeRecipientAtom *)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(MFComposeRecipientTextView *)arg1;
- (void)composeRecipientViewRequestAddRecipient:(MFComposeRecipientTextView *)arg1;
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(MFComposeRecipientTextView *)arg1;
- (void)recipientViewDidResignFirstResponder:(MFComposeRecipientTextView *)arg1;
- (void)recipientViewDidBecomeFirstResponder:(MFComposeRecipientTextView *)arg1;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didSelectRecipients:(NSArray *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 textDidChange:(NSString *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didReplaceRecipients:(NSArray *)arg2 withRecipients:(NSArray *)arg3;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didRemoveRecipient:(MFComposeRecipient *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didFinishEnteringAddress:(NSString *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didAddRecipients:(NSArray *)arg2;
- (void)composeRecipientView:(MFComposeRecipientTextView *)arg1 didAddRecipient:(MFComposeRecipient *)arg2;
@end

