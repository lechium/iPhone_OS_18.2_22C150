//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalActionFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_95bda58d _componentTypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c20608
- (unsigned long long)hash;	// IMP=0x0000000000c205f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c20591
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c20521
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c204aa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c2049d
- (id)jsonRepresentation;	// IMP=0x0000000000c20028
- (id)dictionaryRepresentation;	// IMP=0x0000000000c1f77e
- (id)description;	// IMP=0x0000000000c1f6cf
- (void)dealloc;	// IMP=0x0000000000c1f68f

@end
