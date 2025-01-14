//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MessageUI/NSObject-Protocol.h>

@class CKContainerSetupInfo, CKShare, FPSandboxingURLWrapper, NSArray, NSData, NSDate, NSMutableArray, NSString, NSURL;

@protocol MFMailCompositionValuesProtocol <NSObject>
@property(nonatomic) _Bool ckShareAllowOthersToInvite;
@property(nonatomic) long long ckSharePermissionType;
@property(copy, nonatomic) CKContainerSetupInfo *ckContainerSetupInfo;
@property(copy, nonatomic) CKShare *ckShare;
@property(retain, nonatomic) FPSandboxingURLWrapper *sharingSandboxingURLWrapper;
@property(nonatomic) unsigned long long sendLaterContext;
@property(copy, nonatomic) NSDate *sendLaterDate;
@property(retain, nonatomic) NSMutableArray *deferredAttachments;
@property(nonatomic) long long defaultContentVariationIndex;
@property(copy, nonatomic) NSMutableArray *contentVariations;
@property(nonatomic) unsigned long long caretPosition;
@property(nonatomic) _Bool prefersFirstLineSelection;
@property(nonatomic) _Bool showContentImmediately;
@property(nonatomic) _Bool showKeyboardImmediately;
@property(nonatomic) _Bool isUsingDefaultAccount;
@property(nonatomic) int sourceAccountManagement;
@property(nonatomic) _Bool includeAttachments;
@property(retain, nonatomic) NSArray *originalContent;
@property(nonatomic) _Bool isHTML;
@property(copy, nonatomic) NSString *messageBody;
@property(copy, nonatomic) NSArray *bccRecipients;
@property(copy, nonatomic) NSArray *ccRecipients;
@property(copy, nonatomic) NSArray *toRecipients;
@property(copy, nonatomic) NSString *from;
@property(copy, nonatomic) NSString *hideMyEmailFrom;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSString *preferredSendingEmailAddress;
@property(copy, nonatomic) NSData *serializedMailboxObjectID;
@property(copy, nonatomic) NSData *serializedMessageObjectID;
@property(copy, nonatomic) NSString *autosaveIdentifier;
@property(retain, nonatomic) NSURL *mailtoURL;
@property(nonatomic) long long composeType;
@end

