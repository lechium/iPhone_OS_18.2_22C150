//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultSnippetFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_95bda58d _supportedChildActions;	// 16 = 0x10
    int _maxChildItems;	// 40 = 0x28
    int _maxChildPlaces;	// 44 = 0x2c
    _Bool _supportChildItems;	// 48 = 0x30
    struct {
        unsigned int has_maxChildItems:1;
        unsigned int has_maxChildPlaces:1;
        unsigned int has_supportChildItems:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000ccfff3
- (unsigned long long)hash;	// IMP=0x0000000000ccff7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ccfe7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ccfdb4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ccfcd5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ccfcc8
- (id)jsonRepresentation;	// IMP=0x0000000000ccf62b
- (id)dictionaryRepresentation;	// IMP=0x0000000000ccf274
- (id)description;	// IMP=0x0000000000ccf1c5
- (void)dealloc;	// IMP=0x0000000000ccf185

@end

