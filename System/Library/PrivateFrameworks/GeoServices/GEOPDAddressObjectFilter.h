//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressObjectFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_libraryVersions;	// 16 = 0x10
    _Bool _enableLocation;	// 24 = 0x18
    struct {
        unsigned int has_enableLocation:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000b24eeb
- (unsigned long long)hash;	// IMP=0x0000000000b24e98
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b24dce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b24bf3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b24a6e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b24a61
- (id)jsonRepresentation;	// IMP=0x0000000000b246c1
- (id)dictionaryRepresentation;	// IMP=0x0000000000b244b7
- (id)description;	// IMP=0x0000000000b24408

@end

