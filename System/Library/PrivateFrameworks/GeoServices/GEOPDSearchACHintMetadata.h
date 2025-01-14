//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchACHintMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_addressEntrys;	// 16 = 0x10
    NSMutableArray *_brooklynEntrys;	// 24 = 0x18
    NSMutableArray *_businessEntrys;	// 32 = 0x20
    NSMutableArray *_features;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_addressEntrys:1;
        unsigned int read_brooklynEntrys:1;
        unsigned int read_businessEntrys:1;
        unsigned int read_features:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000a5b8e1
- (unsigned long long)hash;	// IMP=0x0000000000a5b853
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a5b72d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a5b153
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a5a810
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a5a801
- (id)jsonRepresentation;	// IMP=0x0000000000a5a1ea
- (id)dictionaryRepresentation;	// IMP=0x0000000000a5998f
- (id)description;	// IMP=0x0000000000a598e0
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a58cf8
- (id)init;	// IMP=0x0000000000a58c9c

@end

