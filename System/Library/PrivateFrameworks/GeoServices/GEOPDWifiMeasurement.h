//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiMeasurement : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    unsigned long long _entryTime;	// 24 = 0x18
    unsigned long long _exitTime;	// 32 = 0x20
    NSMutableArray *_locations;	// 40 = 0x28
    NSMutableArray *_wifiAccessPoints;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int has_entryTime:1;
        unsigned int has_exitTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_locations:1;
        unsigned int read_wifiAccessPoints:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x00000000005b005a
- (unsigned long long)hash;	// IMP=0x00000000005affb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005afe93
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005afa69
- (void)writeTo:(id)arg1;	// IMP=0x00000000005af6bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005af6ad
- (id)jsonRepresentation;	// IMP=0x00000000005af12b
- (id)dictionaryRepresentation;	// IMP=0x00000000005aeacb
- (id)description;	// IMP=0x00000000005aea1c
- (id)initWithData:(id)arg1;	// IMP=0x00000000005ae041
- (id)init;	// IMP=0x00000000005adfe5

@end
