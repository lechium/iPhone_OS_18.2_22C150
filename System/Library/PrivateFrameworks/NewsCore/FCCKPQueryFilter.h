//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class FCCKPRecordFieldIdentifier, FCCKPRecordFieldValue;

__attribute__((visibility("hidden")))
@interface FCCKPQueryFilter : PBCodable
{
    FCCKPRecordFieldIdentifier *_fieldName;	// 8 = 0x8
    FCCKPRecordFieldValue *_fieldValue;	// 16 = 0x10
    int _type;	// 24 = 0x18
    CDStruct_f953fb60 _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000392add
- (unsigned long long)hash;	// IMP=0x0000000000392a39
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000392957
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000392899
- (void)writeTo:(id)arg1;	// IMP=0x0000000000392816
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000392809
- (id)dictionaryRepresentation;	// IMP=0x0000000000392446
- (id)description;	// IMP=0x0000000000392397

@end

