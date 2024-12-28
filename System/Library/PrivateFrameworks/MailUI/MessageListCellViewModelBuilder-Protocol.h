//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailUI/MessageItemViewModelBuilder-Protocol.h>

@class MUIAvatarImageContext, MUIAvatarImageGenerator, NSArray, NSAttributedString, NSDictionary, NSString;

@protocol MessageListCellViewModelBuilder <MessageItemViewModelBuilder>
@property(retain, nonatomic) MUIAvatarImageGenerator *avatarGenerator;
@property(retain, nonatomic) MUIAvatarImageContext *avatarContext;
@property(nonatomic) _Bool allowAuthenticationWarning;
@property(copy, nonatomic) NSString *categorizationState;
@property(copy, nonatomic) NSArray *emailAddresses;
@property(nonatomic) _Bool hideFollowUp;
@property(copy, nonatomic) NSArray *addressList;
@property(nonatomic) _Bool addressIsPresent;
@property(copy, nonatomic) NSAttributedString *attributedAddress;
@property(copy, nonatomic) NSString *address;
@property(nonatomic) _Bool subjectIsPresent;
@property(copy, nonatomic) NSString *subject;
@property(nonatomic) long long recipientType;
@property(nonatomic) long long style;
@property(copy, nonatomic) NSDictionary *hintsBySnippetZone;
@end
