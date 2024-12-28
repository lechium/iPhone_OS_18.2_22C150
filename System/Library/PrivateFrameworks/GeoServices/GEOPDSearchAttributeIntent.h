//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchStructuredAttribute, GEOPDSearchTokenSet, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchAttributeIntent : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_attributeId;	// 16 = 0x10
    NSString *_attributeValue;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    GEOPDSearchStructuredAttribute *_structuredAttribute;	// 40 = 0x28
    GEOPDSearchTokenSet *_tokenSet;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    _Bool _isOptionalAttribute;	// 68 = 0x44
    struct {
        unsigned int has_isOptionalAttribute:1;
        unsigned int read_attributeId:1;
        unsigned int read_attributeValue:1;
        unsigned int read_name:1;
        unsigned int read_structuredAttribute:1;
        unsigned int read_tokenSet:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000a63ed2
- (unsigned long long)hash;	// IMP=0x0000000000a63e03
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a63c7b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a63a38
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a63793
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a63784
- (id)jsonRepresentation;	// IMP=0x0000000000a62f60
- (id)dictionaryRepresentation;	// IMP=0x0000000000a62a33
- (id)description;	// IMP=0x0000000000a62984
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a62238
- (id)init;	// IMP=0x0000000000a621dc

@end
