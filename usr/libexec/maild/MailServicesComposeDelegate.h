//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailServices/MSEmailModel.h>

@class MFComposeWebView, MFMessageHeaders, NSString;
@protocol MFMailAccountProxyGenerator;

@interface MailServicesComposeDelegate : MSEmailModel
{
    NSString *_sendingEmailAddress;	// 8 = 0x8
    MFComposeWebView *_bodyField;	// 16 = 0x10
    id <MFMailAccountProxyGenerator> _accountProxyGenerator;	// 24 = 0x18
    MFMessageHeaders *_savedHeaders;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000073bdc
@property(retain, nonatomic) MFMessageHeaders *savedHeaders; // @synthesize savedHeaders=_savedHeaders;
- (id)sendingAccountProxy;	// IMP=0x0010000000073b34
- (id)accountProxyGenerator;	// IMP=0x0010000000073ae1
- (id)shouldCreateRichTextRepresentation;	// IMP=0x0010000000073a7d
- (id)attachments;	// IMP=0x0010000000073a75
- (id)sendingEmailAddress;	// IMP=0x0010000000073a60
- (void)setSendingEmailAddress:(id)arg1;	// IMP=0x00100000000739f5
- (id)bccRecipients;	// IMP=0x0010000000073665
- (void)setBccRecipients:(id)arg1;	// IMP=0x0010000000073653
- (id)ccRecipients;	// IMP=0x0010000000073641
- (void)setCcRecipients:(id)arg1;	// IMP=0x001000000007362f
- (id)toRecipients;	// IMP=0x001000000007361d
- (void)setToRecipients:(id)arg1;	// IMP=0x001000000007360b
- (id)composeWebView;	// IMP=0x00100000000735ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

