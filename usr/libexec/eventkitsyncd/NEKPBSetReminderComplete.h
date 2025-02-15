//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NEKPBSetReminderComplete : PBCodable
{
    NSString *_calendarName;	// 8 = 0x8
    NSString *_externalIdentifier;	// 16 = 0x10
    NSString *_reminderTitle;	// 24 = 0x18
    _Bool _isComplete;	// 32 = 0x20
    struct {
        unsigned int isComplete:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00200000000395ef
@property(retain, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(retain, nonatomic) NSString *reminderTitle; // @synthesize reminderTitle=_reminderTitle;
// Error: Property attributes should begin with the type ('T') attribute, property name: calendarName
// Property attributes: (null)

@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000394cd
- (unsigned long long)hash;	// IMP=0x0010000000039436
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000039312
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000039229
- (void)copyTo:(id)arg1;	// IMP=0x0010000000039186
- (void)writeTo:(id)arg1;	// IMP=0x00100000000390e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000390d8
- (id)dictionaryRepresentation;	// IMP=0x0010000000038d83
- (id)description;	// IMP=0x0010000000038cd4
@property(readonly, nonatomic) _Bool hasExternalIdentifier;
@property(readonly, nonatomic) _Bool hasReminderTitle;
@property(readonly, nonatomic) _Bool hasCalendarName;
@property(nonatomic) _Bool hasIsComplete;

@end

