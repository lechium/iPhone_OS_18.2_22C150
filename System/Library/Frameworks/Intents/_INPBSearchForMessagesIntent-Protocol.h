//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBStringList;

@protocol _INPBSearchForMessagesIntent <NSObject>
@property(readonly, nonatomic) _Bool hasSpeakableGroupName;
@property(retain, nonatomic) _INPBDataStringList *speakableGroupName;
@property(readonly, nonatomic) _Bool hasSender;
@property(retain, nonatomic) _INPBContactList *sender;
@property(readonly, nonatomic) _Bool hasSearchTerm;
@property(retain, nonatomic) _INPBStringList *searchTerm;
@property(readonly, nonatomic) _Bool hasRecipient;
@property(retain, nonatomic) _INPBContactList *recipient;
@property(readonly, nonatomic) _Bool hasNotificationIdentifier;
@property(retain, nonatomic) _INPBStringList *notificationIdentifier;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(retain, nonatomic) _INPBStringList *identifier;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(retain, nonatomic) _INPBStringList *groupName;
@property(readonly, nonatomic) _Bool hasDateTimeRange;
@property(retain, nonatomic) _INPBDateTimeRange *dateTimeRange;
@property(readonly, nonatomic) _Bool hasConversationIdentifier;
@property(retain, nonatomic) _INPBStringList *conversationIdentifier;
@property(readonly, nonatomic) _Bool hasContent;
@property(retain, nonatomic) _INPBStringList *content;
@property(readonly, nonatomic) unsigned long long attributesCount;
@property(readonly, nonatomic) int *attributes;
- (int)StringAsAttributes:(NSString *)arg1;
- (NSString *)attributesAsString:(int)arg1;
- (void)setAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (void)addAttribute:(int)arg1;
- (void)clearAttributes;
@end

