//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOTimezone, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMessageLink : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_hoursOfOperations;	// 24 = 0x18
    NSString *_messageId;	// 32 = 0x20
    NSString *_messageUrl;	// 40 = 0x28
    NSString *_navBackgroundColor;	// 48 = 0x30
    NSString *_navTintColor;	// 56 = 0x38
    GEOTimezone *_timezone;	// 64 = 0x40
    unsigned int _readerMarkPos;	// 72 = 0x48
    unsigned int _readerMarkLength;	// 76 = 0x4c
    struct os_unfair_lock_s _readerLock;	// 80 = 0x50
    int _responseTime;	// 84 = 0x54
    _Bool _isVerified;	// 88 = 0x58
    struct {
        unsigned int has_responseTime:1;
        unsigned int has_isVerified:1;
        unsigned int read_unknownFields:1;
        unsigned int read_hoursOfOperations:1;
        unsigned int read_messageId:1;
        unsigned int read_messageUrl:1;
        unsigned int read_navBackgroundColor:1;
        unsigned int read_navTintColor:1;
        unsigned int read_timezone:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

+ (id)messageLinkForPlaceData:(id)arg1;	// IMP=0x0010000000a03433
- (void).cxx_destruct;	// IMP=0x0000000000c62d79
- (unsigned long long)hash;	// IMP=0x0000000000c62c4d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c62a5e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c6262d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c622a3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c62294
- (id)jsonRepresentation;	// IMP=0x0000000000c61dd5
- (id)dictionaryRepresentation;	// IMP=0x0000000000c61781
- (id)description;	// IMP=0x0000000000c616d2
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c60633
- (id)init;	// IMP=0x0000000000c605d7

@end

