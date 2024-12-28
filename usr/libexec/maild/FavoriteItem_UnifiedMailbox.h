//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EFDebouncer;
@protocol EFCancelable;

@interface FavoriteItem_UnifiedMailbox
{
    long long _mailboxType;	// 104 = 0x68
    id <EFCancelable> _unreadCountToken;	// 112 = 0x70
    EFDebouncer *_badgeCountDebouncer;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000001969b
@property(retain) EFDebouncer *badgeCountDebouncer; // @synthesize badgeCountDebouncer=_badgeCountDebouncer;
@property(retain) id <EFCancelable> unreadCountToken; // @synthesize unreadCountToken=_unreadCountToken;
- (id)analyticsKey;	// IMP=0x00100000000195d4
- (id)description;	// IMP=0x00100000000193e6
- (id)persistentIDForMigration;	// IMP=0x00100000000193c0
- (id)displayName;	// IMP=0x00100000000192e2
- (_Bool)_displayNameShouldBeRedacted;	// IMP=0x00100000000192da
- (id)dictionaryRepresentation;	// IMP=0x0010000000019220
- (_Bool)acceptsMessageTransfers;	// IMP=0x00100000000191eb
- (_Bool)isVisible;	// IMP=0x0010000000019151
- (id)representingMailboxes;	// IMP=0x0010000000018f0f
- (id)itemURLString;	// IMP=0x0010000000018e8f
- (id)itemID;	// IMP=0x0010000000018e08
- (long long)mailboxType;	// IMP=0x0010000000018df7
- (unsigned long long)hash;	// IMP=0x0010000000018de6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000018d6d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000018c8e
- (id)initWithMailboxType:(long long)arg1;	// IMP=0x0010000000018c45

@end
