//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPQueryRetrieveResponse : PBCodable
{
    NSData *_continuationMarker;	// 8 = 0x8
    NSMutableArray *_queryResults;	// 16 = 0x10
}

+ (Class)queryResultsType;	// IMP=0x00100000002b1914
- (void).cxx_destruct;	// IMP=0x00000000002b2549
@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(retain, nonatomic) NSMutableArray *queryResults; // @synthesize queryResults=_queryResults;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002b2385
- (unsigned long long)hash;	// IMP=0x00000000002b2338
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b2280
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b2074
- (void)copyTo:(id)arg1;	// IMP=0x00000000002b1f8c
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b1e2c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b1e1f
- (id)dictionaryRepresentation;	// IMP=0x00000000002b19e9
- (id)description;	// IMP=0x00000000002b193a
@property(readonly, nonatomic) _Bool hasContinuationMarker;
- (id)queryResultsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002b18f7
- (unsigned long long)queryResultsCount;	// IMP=0x00000000002b18da
- (void)addQueryResults:(id)arg1;	// IMP=0x00000000002b1870
- (void)clearQueryResults;	// IMP=0x00000000002b1853

@end

