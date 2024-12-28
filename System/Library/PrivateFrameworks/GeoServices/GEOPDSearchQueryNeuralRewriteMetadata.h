//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryNeuralRewriteMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_inputQuery;	// 16 = 0x10
    NSString *_modelId;	// 24 = 0x18
    NSString *_rewrittenQuery;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    float _modelScore;	// 52 = 0x34
    struct {
        unsigned int has_modelScore:1;
        unsigned int read_inputQuery:1;
        unsigned int read_modelId:1;
        unsigned int read_rewrittenQuery:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000ac1f46
- (unsigned long long)hash;	// IMP=0x0000000000ac1dc6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ac1c94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ac1a9f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ac186f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ac1860
- (id)jsonRepresentation;	// IMP=0x0000000000ac15f4
- (id)dictionaryRepresentation;	// IMP=0x0000000000ac12bf
- (id)description;	// IMP=0x0000000000ac1210
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ac0c9f
- (id)init;	// IMP=0x0000000000ac0c43

@end
