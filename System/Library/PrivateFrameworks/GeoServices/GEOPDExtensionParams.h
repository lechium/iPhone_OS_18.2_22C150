//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExtensionParams : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _extensionTypes;	// 24 = 0x18
    NSString *_appAdamId;	// 48 = 0x30
    NSString *_externalItemId;	// 56 = 0x38
    NSString *_vendorId;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_extensionTypes:1;
        unsigned int read_appAdamId:1;
        unsigned int read_externalItemId:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

- (void).cxx_destruct;	// IMP=0x0000000000c1cc43
- (unsigned long long)hash;	// IMP=0x0000000000c1cbb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c1ca9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c1c8c3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c1c6d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c1c6c1
- (id)jsonRepresentation;	// IMP=0x0000000000c1c354
- (id)dictionaryRepresentation;	// IMP=0x0000000000c1bf6b
- (id)description;	// IMP=0x0000000000c1bebc
- (void)dealloc;	// IMP=0x0000000000c1b535
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c1b4d9
- (id)init;	// IMP=0x0000000000c1b47d

@end
