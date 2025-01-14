//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFMailboxUid, MailAccount, NSString;

@interface FavoriteItem_Mailbox
{
    MFMailboxUid *_mailbox;	// 104 = 0x68
    MailAccount *_account;	// 112 = 0x70
    long long _mailboxType;	// 120 = 0x78
    NSString *_accountRelativePath;	// 128 = 0x80
    NSString *_displayName;	// 136 = 0x88
    _Bool _originalPushState;	// 144 = 0x90
}

+ (_Bool)_defaultShouldSync;	// IMP=0x004000000001698a
- (void).cxx_destruct;	// IMP=0x00200000000181bd
@property(retain) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
@property _Bool originalPushState; // @synthesize originalPushState=_originalPushState;
- (id)analyticsKey;	// IMP=0x001000000001815f
- (void)_postNotification;	// IMP=0x0010000000018039
- (void)wasChangedExternally;	// IMP=0x0010000000017fe3
- (void)wasRemovedFromCollecion:(id)arg1;	// IMP=0x0010000000017d53
- (void)wasAddedToCollection:(id)arg1;	// IMP=0x0010000000017a8e
- (id)syncValue;	// IMP=0x00100000000178db
- (id)syncKey;	// IMP=0x0010000000017890
- (_Bool)acceptsMessageTransfers;	// IMP=0x0010000000017815
- (id)representingMailbox;	// IMP=0x001000000001763b
- (id)account;	// IMP=0x0010000000017626
- (id)criterion;	// IMP=0x00100000000175af
- (_Bool)isVisible;	// IMP=0x0010000000017588
- (id)displayName;	// IMP=0x0010000000017540
- (id)parentItemID;	// IMP=0x00100000000174dc
- (id)itemUUID;	// IMP=0x0010000000017453
- (id)itemID;	// IMP=0x001000000001739a
- (id)dictionaryRepresentation;	// IMP=0x0010000000016fea
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000016d90
- (unsigned long long)hash;	// IMP=0x0010000000016d73
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000016b2f
- (id)initWithMailbox:(id)arg1;	// IMP=0x0010000000016992

@end

