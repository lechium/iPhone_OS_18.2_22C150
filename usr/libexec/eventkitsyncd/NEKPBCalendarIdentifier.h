//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NEKPBCalendarIdentifier : PBCodable
{
    NSString *_identifier;	// 8 = 0x8
    _Bool _isDefaultLocalCalendar;	// 16 = 0x10
    struct {
        unsigned int isDefaultLocalCalendar:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0020000000051a3b
@property(nonatomic) _Bool isDefaultLocalCalendar; // @synthesize isDefaultLocalCalendar=_isDefaultLocalCalendar;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000519a3
- (unsigned long long)hash;	// IMP=0x0010000000051950
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000051886
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000517ee
- (void)copyTo:(id)arg1;	// IMP=0x001000000005178b
- (void)writeTo:(id)arg1;	// IMP=0x0010000000051724
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000051717
- (id)dictionaryRepresentation;	// IMP=0x0010000000051470
- (id)description;	// IMP=0x00100000000513c1
@property(nonatomic) _Bool hasIsDefaultLocalCalendar;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

