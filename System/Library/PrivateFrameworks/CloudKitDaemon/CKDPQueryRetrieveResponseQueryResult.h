//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord, CKDPRecordIdentifier, NSString;

@interface CKDPQueryRetrieveResponseQueryResult : PBCodable
{
    NSString *_etag;	// 8 = 0x8
    CKDPRecordIdentifier *_identifier;	// 16 = 0x10
    CKDPRecord *_record;	// 24 = 0x18
    int _type;	// 32 = 0x20
    CDStruct_f953fb60 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000032c79b
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPRecordIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000032c65d
- (unsigned long long)hash;	// IMP=0x000000000032c5cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000032c4be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000032c3d0
- (void)copyTo:(id)arg1;	// IMP=0x000000000032c32d
- (void)writeTo:(id)arg1;	// IMP=0x000000000032c28d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000032c280
- (id)dictionaryRepresentation;	// IMP=0x000000000032be2e
- (id)description;	// IMP=0x000000000032bd7f
@property(readonly, nonatomic) _Bool hasRecord;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000032bcff
- (id)typeAsString:(int)arg1;	// IMP=0x000000000032bca9
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

