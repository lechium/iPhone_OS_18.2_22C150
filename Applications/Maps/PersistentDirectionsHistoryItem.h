//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, SearchResult;

@interface PersistentDirectionsHistoryItem : PBCodable
{
    double _position;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    NSData *_directionsResponseID;	// 24 = 0x18
    SearchResult *_endSearchResult;	// 32 = 0x20
    NSString *_reportAProblemAttachment;	// 40 = 0x28
    SearchResult *_startSearchResult;	// 48 = 0x30
    NSString *_syncIdentifier;	// 56 = 0x38
    int _transportType;	// 64 = 0x40
    struct {
        unsigned int position:1;
        unsigned int timestamp:1;
        unsigned int transportType:1;
    } _has;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0020000000c8f88d
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;
@property(retain, nonatomic) NSString *reportAProblemAttachment; // @synthesize reportAProblemAttachment=_reportAProblemAttachment;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
@property(retain, nonatomic) SearchResult *endSearchResult; // @synthesize endSearchResult=_endSearchResult;
@property(retain, nonatomic) SearchResult *startSearchResult; // @synthesize startSearchResult=_startSearchResult;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000c8f651
- (unsigned long long)hash;	// IMP=0x0010000000c8f394
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000c8f1da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000c8f060
- (void)copyTo:(id)arg1;	// IMP=0x0010000000c8ef3d
- (void)writeTo:(id)arg1;	// IMP=0x0010000000c8ee15
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000c8ee08
- (id)dictionaryRepresentation;	// IMP=0x0010000000c8e7f8
- (id)description;	// IMP=0x0000000000c8e749
@property(nonatomic) _Bool hasTimestamp;
- (int)StringAsTransportType:(id)arg1;	// IMP=0x0010000000c8e5e4
- (id)transportTypeAsString:(int)arg1;	// IMP=0x0010000000c8e59b
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) _Bool hasPosition;
@property(readonly, nonatomic) _Bool hasSyncIdentifier;
@property(readonly, nonatomic) _Bool hasReportAProblemAttachment;
@property(readonly, nonatomic) _Bool hasDirectionsResponseID;
@property(readonly, nonatomic) _Bool hasEndSearchResult;
@property(readonly, nonatomic) _Bool hasStartSearchResult;

@end
