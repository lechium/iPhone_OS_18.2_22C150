//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class FCCKPRecord, FCCKPRecordIdentifier, NSString;

__attribute__((visibility("hidden")))
@interface FCCKPQueryRetrieveResponseQueryResult : PBCodable
{
    NSString *_etag;	// 8 = 0x8
    FCCKPRecordIdentifier *_identifier;	// 16 = 0x10
    FCCKPRecord *_record;	// 24 = 0x18
    int _type;	// 32 = 0x20
    CDStruct_f953fb60 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000037ea6f
- (unsigned long long)hash;	// IMP=0x000000000037e9de
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000037e8cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000037e7e1
- (void)writeTo:(id)arg1;	// IMP=0x000000000037e741
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000037e734
- (id)dictionaryRepresentation;	// IMP=0x000000000037e307
- (id)description;	// IMP=0x000000000037e258

@end
