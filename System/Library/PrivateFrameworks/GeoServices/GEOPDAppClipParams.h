//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAppClipParams : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_appAdamId;	// 24 = 0x18
    NSString *_bundleId;	// 32 = 0x20
    NSString *_symbolImageName;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    NSString *_url;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_appAdamId:1;
        unsigned int read_bundleId:1;
        unsigned int read_symbolImageName:1;
        unsigned int read_title:1;
        unsigned int read_url:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x0000000000b3467e
- (unsigned long long)hash;	// IMP=0x0000000000b345d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b34483
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b34268
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b3406c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b3405d
- (id)jsonRepresentation;	// IMP=0x0000000000b33cf0
- (id)dictionaryRepresentation;	// IMP=0x0000000000b338a9
- (id)description;	// IMP=0x0000000000b337fa
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b32f3e
- (id)init;	// IMP=0x0000000000b32ee2

@end

