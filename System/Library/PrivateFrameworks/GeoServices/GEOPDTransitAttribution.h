//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitAttribution : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_providerNames;	// 16 = 0x10
}

+ (id)transitAttributionForPlaceData:(id)arg1;	// IMP=0x00100000009fbcb0
- (void).cxx_destruct;	// IMP=0x0000000000d08d08
- (unsigned long long)hash;	// IMP=0x0000000000d08ceb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d08c5b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d08a9e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d0893f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d08932
- (id)jsonRepresentation;	// IMP=0x0000000000d08636
- (id)dictionaryRepresentation;	// IMP=0x0000000000d08497
- (id)description;	// IMP=0x0000000000d083e8

@end

