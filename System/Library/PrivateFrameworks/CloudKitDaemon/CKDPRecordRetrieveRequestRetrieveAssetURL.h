//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRequestedFields;

@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable
{
    long long _requestedTTL;	// 8 = 0x8
    CKDPRequestedFields *_assetFields;	// 16 = 0x10
    int _type;	// 24 = 0x18
    struct {
        unsigned int requestedTTL:1;
        unsigned int type:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000019cd38
@property(nonatomic) long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property(retain, nonatomic) CKDPRequestedFields *assetFields; // @synthesize assetFields=_assetFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000019cc6b
- (unsigned long long)hash;	// IMP=0x000000000019cbfb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019cb1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019ca69
- (void)copyTo:(id)arg1;	// IMP=0x000000000019c9e8
- (void)writeTo:(id)arg1;	// IMP=0x000000000019c958
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019c94b
- (id)dictionaryRepresentation;	// IMP=0x000000000019c507
- (id)description;	// IMP=0x000000000019c458
- (int)StringAsType:(id)arg1;	// IMP=0x000000000019c3bb
- (id)typeAsString:(int)arg1;	// IMP=0x000000000019c354
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasRequestedTTL;
@property(readonly, nonatomic) _Bool hasAssetFields;

@end
