//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFactoidFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _canSupportStructuredData;	// 16 = 0x10
    struct {
        unsigned int has_canSupportStructuredData:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000c25233
- (unsigned long long)hash;	// IMP=0x0000000000c25208
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c25166
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c250e6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c25081
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c25074
- (id)jsonRepresentation;	// IMP=0x0000000000c24d10
- (id)dictionaryRepresentation;	// IMP=0x0000000000c24b3b
- (id)description;	// IMP=0x0000000000c24a8c

@end

