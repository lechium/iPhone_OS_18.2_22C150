//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureTypeSource : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _serverEntryType;	// 16 = 0x10
    int _suggestionType;	// 20 = 0x14
    struct {
        unsigned int has_serverEntryType:1;
        unsigned int has_suggestionType:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005e5b7c
- (unsigned long long)hash;	// IMP=0x00000000005e5b36
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005e5a83
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005e59e6
- (void)writeTo:(id)arg1;	// IMP=0x00000000005e5958
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005e594b
- (id)jsonRepresentation;	// IMP=0x00000000005e4fe4
- (id)dictionaryRepresentation;	// IMP=0x00000000005e4d6a
- (id)description;	// IMP=0x00000000005e4cbb

@end
