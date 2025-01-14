//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSpan, NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchToken : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_alternateForms;	// 16 = 0x10
    NSString *_processedValue;	// 24 = 0x18
    NSString *_rawValue;	// 32 = 0x20
    GEOPDSearchTokenSpan *_tokenSpan;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _position;	// 60 = 0x3c
    struct {
        unsigned int has_position:1;
        unsigned int read_alternateForms:1;
        unsigned int read_processedValue:1;
        unsigned int read_rawValue:1;
        unsigned int read_tokenSpan:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000117f337
- (unsigned long long)hash;	// IMP=0x000000000117f273
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000117f11e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000117edb5
- (void)writeTo:(id)arg1;	// IMP=0x000000000117eac2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000117eab3
- (id)jsonRepresentation;	// IMP=0x000000000117e728
- (id)dictionaryRepresentation;	// IMP=0x000000000117e15b
- (id)description;	// IMP=0x000000000117e0ac
- (id)initWithData:(id)arg1;	// IMP=0x000000000117d89c
- (id)init;	// IMP=0x000000000117d840

@end

