//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDActionData : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_actionLinks;	// 24 = 0x18
    NSString *_actionSymbolImageName;	// 32 = 0x20
    NSMutableArray *_actionTitles;	// 40 = 0x28
    NSString *_categoryId;	// 48 = 0x30
    NSString *_ownerAdamId;	// 56 = 0x38
    NSString *_winningAdamId;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_actionLinks:1;
        unsigned int read_actionSymbolImageName:1;
        unsigned int read_actionTitles:1;
        unsigned int read_categoryId:1;
        unsigned int read_ownerAdamId:1;
        unsigned int read_winningAdamId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

- (void).cxx_destruct;	// IMP=0x0000000000b1cf69
- (unsigned long long)hash;	// IMP=0x0000000000b1cea6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b1cd28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b1c885
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b1c49d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b1c48e
- (id)jsonRepresentation;	// IMP=0x0000000000b1a04b
- (id)dictionaryRepresentation;	// IMP=0x0000000000b198b6
- (id)description;	// IMP=0x0000000000b19807
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b189f8
- (id)init;	// IMP=0x0000000000b1899c
- (id)actionName;	// IMP=0x0000000000a05752

@end
