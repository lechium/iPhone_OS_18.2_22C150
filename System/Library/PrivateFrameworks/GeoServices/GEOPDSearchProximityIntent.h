//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSet, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchProximityIntent : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    GEOPDSearchTokenSet *_tokenSet;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_name:1;
        unsigned int read_tokenSet:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000a90843
- (unsigned long long)hash;	// IMP=0x0000000000a907ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a9071a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a90590
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a903c3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a903b4
- (id)jsonRepresentation;	// IMP=0x0000000000a90114
- (id)dictionaryRepresentation;	// IMP=0x0000000000a8fee7
- (id)description;	// IMP=0x0000000000a8fe38
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a8f9a2
- (id)init;	// IMP=0x0000000000a8f946

@end

