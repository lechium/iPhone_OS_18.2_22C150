//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSBrandFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _brandMuid;	// 16 = 0x10
    struct {
        unsigned int has_brandMuid:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005edf4e
- (unsigned long long)hash;	// IMP=0x00000000005edf26
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005ede93
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005ede12
- (void)writeTo:(id)arg1;	// IMP=0x00000000005eddae
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005edda1
- (id)jsonRepresentation;	// IMP=0x00000000005eda40
- (id)dictionaryRepresentation;	// IMP=0x00000000005ed86c
- (id)description;	// IMP=0x00000000005ed7bd

@end
