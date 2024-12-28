//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextBlock : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_attributionUrl;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_attributionUrl:1;
        unsigned int read_text:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (id)textBlockForPlaceData:(id)arg1;	// IMP=0x0010000000a02be6
- (void).cxx_destruct;	// IMP=0x0000000000cf6ebe
- (unsigned long long)hash;	// IMP=0x0000000000cf6e47
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cf6d49
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cf6b80
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cf69be
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cf69af
- (id)jsonRepresentation;	// IMP=0x0000000000cf6642
- (id)dictionaryRepresentation;	// IMP=0x0000000000cf6383
- (id)description;	// IMP=0x0000000000cf62d4
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cf5b5c
- (id)init;	// IMP=0x0000000000cf5b00

@end
