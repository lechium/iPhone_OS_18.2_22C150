//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDScorecardLayout : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_ratingCategorys;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_ratingCategorys:1;
        unsigned int read_version:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000014acf4b
- (unsigned long long)hash;	// IMP=0x00000000014acef4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014ace22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014acb66
- (void)writeTo:(id)arg1;	// IMP=0x00000000014ac71a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014ac70b
- (id)jsonRepresentation;	// IMP=0x00000000014ac368
- (id)dictionaryRepresentation;	// IMP=0x00000000014ac0a1
- (id)description;	// IMP=0x00000000014abff2
- (id)initWithData:(id)arg1;	// IMP=0x00000000014ab898
- (id)init;	// IMP=0x00000000014ab83c

@end
