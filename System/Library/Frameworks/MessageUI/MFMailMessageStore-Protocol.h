//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFAttachment, MFMailMessage, MFMailboxUid, MFMimePart, MailAccount, NSData, NSString;

@protocol MFMailMessageStore
@property(readonly, nonatomic) MFMailboxUid *mailbox;
@property(readonly, nonatomic) MFMailboxUid *mailboxUid;
@property(readonly, nonatomic) MailAccount *account;
- (NSData *)storeData:(NSData *)arg1 forMimePart:(MFMimePart *)arg2 isComplete:(_Bool)arg3;
- (NSString *)storageLocationForAttachment:(MFAttachment *)arg1 withMessage:(MFMailMessage *)arg2;
- (_Bool)shouldDownloadBodyDataForMessage:(MFMailMessage *)arg1;
@end
