//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOLPRWorld : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_powerTypes;	// 16 = 0x10
    NSMutableArray *_regions;	// 24 = 0x18
    NSMutableArray *_vehicleTypes;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_powerTypes:1;
        unsigned int read_regions:1;
        unsigned int read_vehicleTypes:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000114ed2b
- (unsigned long long)hash;	// IMP=0x000000000114ecb4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000114ebb6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000114e3cf
- (void)writeTo:(id)arg1;	// IMP=0x000000000114dd06
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000114dcf9
- (id)jsonRepresentation;	// IMP=0x000000000114d7af
- (id)dictionaryRepresentation;	// IMP=0x000000000114d143
- (id)description;	// IMP=0x000000000114d094
- (id)initWithData:(id)arg1;	// IMP=0x000000000114ca11
- (id)init;	// IMP=0x000000000114c9b5

@end

