//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/CNComposeRecipientTextViewDelegate-Protocol.h>

@class CNComposeRecipient, CNComposeRecipientTextView, MFMailComposeRecipientTextView, UIResponder;

@protocol MFMailComposeRecipientTextViewDelegate <CNComposeRecipientTextViewDelegate>
- (UIResponder *)nextResponderForRecipientView:(MFMailComposeRecipientTextView *)arg1;

@optional
- (void)composeRecipientView:(CNComposeRecipientTextView *)arg1 didFinishAddingRecipient:(CNComposeRecipient *)arg2;
@end
