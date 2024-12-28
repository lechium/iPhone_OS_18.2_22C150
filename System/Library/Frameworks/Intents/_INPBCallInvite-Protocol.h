//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBContact, _INPBURLValue;

@protocol _INPBCallInvite <NSObject>
+ (Class)participantsType;
@property(readonly, nonatomic) unsigned long long participantsCount;
@property(copy, nonatomic) NSArray *participants;
@property(nonatomic) _Bool hasInviteType;
@property(nonatomic) int inviteType;
@property(readonly, nonatomic) _Bool hasCallURL;
@property(retain, nonatomic) _INPBURLValue *callURL;
- (_INPBContact *)participantsAtIndex:(unsigned long long)arg1;
- (void)addParticipants:(_INPBContact *)arg1;
- (void)clearParticipants;
- (int)StringAsInviteType:(NSString *)arg1;
- (NSString *)inviteTypeAsString:(int)arg1;
@end
