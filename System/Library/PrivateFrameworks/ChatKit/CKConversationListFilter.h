//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ChatKit/NSCopying-Protocol.h>

@class DNDConfiguration, NSPredicate;

__attribute__((visibility("hidden")))
@interface CKConversationListFilter : NSObject <NSCopying>
{
    _Bool _unreadOnly;	// 8 = 0x8
    unsigned long long _inbox;	// 16 = 0x10
    DNDConfiguration *_focusConfiguration;	// 24 = 0x18
    NSPredicate *_cachedConversationPredicate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000005af105
+ (id)defaultFilter;	// IMP=0x00100000005af2c7
- (void).cxx_destruct;	// IMP=0x00000000005af29f
@property(retain, nonatomic) NSPredicate *cachedConversationPredicate; // @synthesize cachedConversationPredicate=_cachedConversationPredicate;
@property(readonly, nonatomic) DNDConfiguration *focusConfiguration; // @synthesize focusConfiguration=_focusConfiguration;
@property(readonly, nonatomic) _Bool unreadOnly; // @synthesize unreadOnly=_unreadOnly;
@property(readonly, nonatomic) unsigned long long inbox; // @synthesize inbox=_inbox;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005af197
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005af10d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005af0ce
- (id)description;	// IMP=0x00000000005af082
- (unsigned long long)hash;	// IMP=0x00000000005af059
- (_Bool)isEqualToConversationListFilter:(id)arg1;	// IMP=0x00000000005aeff7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005aef90
- (id)_initWithInbox:(unsigned long long)arg1 unreadOnly:(_Bool)arg2 focusConfiguration:(id)arg3;	// IMP=0x00000000005aef07
- (unsigned long long)_defaultSpamFilterInboxForCategory:(long long)arg1;	// IMP=0x000000000050db54
- (unsigned long long)_spamFilterInboxForCategory:(long long)arg1 subCategory:(long long)arg2;	// IMP=0x000000000050daa0
- (_Bool)_conversation:(id)arg1 matchesSpamFilterInboxGroup:(unsigned long long)arg2;	// IMP=0x000000000050da24
- (_Bool)_conversation:(id)arg1 matchesSpamFilterInbox:(unsigned long long)arg2;	// IMP=0x000000000050d9bb
- (unsigned long long)_spamFilterInboxGroupForInbox:(unsigned long long)arg1;	// IMP=0x000000000050d99c
- (unsigned long long)_spamFilterInboxForConversationListInbox:(unsigned long long)arg1;	// IMP=0x000000000050d878
- (unsigned long long)_spamFilterInboxGroupForConversationListInbox:(unsigned long long)arg1;	// IMP=0x000000000050d79d
- (unsigned long long)_spamFilterInboxForConversation:(id)arg1;	// IMP=0x000000000050d72a
- (_Bool)_isSpamFilteredConversation:(id)arg1;	// IMP=0x000000000050d61c
- (_Bool)_conversation:(id)arg1 matchesInbox:(unsigned long long)arg2;	// IMP=0x000000000050d452
- (id)_inboxSubPredicate;	// IMP=0x000000000050d300
- (id)filterByChangingFocusConfiguration:(id)arg1;	// IMP=0x00000000005af376
- (id)filterByChangingUnreadOnly:(_Bool)arg1;	// IMP=0x00000000005af338
- (id)filterByChangingInbox:(unsigned long long)arg1;	// IMP=0x00000000005af2f7
- (id)_unreadOnlySubPredicate;	// IMP=0x00000000005af5a9
@property(readonly, nonatomic) NSPredicate *conversationPredicate;
- (id)_focusConfigurationSubPredicate;	// IMP=0x000000000065b110

@end
