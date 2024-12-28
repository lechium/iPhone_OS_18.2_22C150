//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface CPLCKAvailabilityRequest : PBRequest
{
    int _feature;	// 8 = 0x8
    struct {
        unsigned int feature:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) int feature; // @synthesize feature=_feature;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a2b50
- (unsigned long long)hash;	// IMP=0x00100000000a2b25
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a2a93
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a2a31
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a2a0d
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a29e2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a29d5
- (id)dictionaryRepresentation;	// IMP=0x00100000000a27a0
- (id)description;	// IMP=0x00100000000a26f1
- (int)StringAsFeature:(id)arg1;	// IMP=0x00100000000a26e4
- (id)featureAsString:(int)arg1;	// IMP=0x00100000000a26d8
@property(nonatomic) _Bool hasFeature;

@end
