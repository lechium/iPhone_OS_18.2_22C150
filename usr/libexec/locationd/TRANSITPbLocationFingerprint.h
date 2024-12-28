//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface TRANSITPbLocationFingerprint : PBCodable
{
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _macs;	// 8 = 0x8
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _modes;	// 32 = 0x20
    double _latitude;	// 56 = 0x38
    unsigned long long _locationId;	// 64 = 0x40
    double _longitude;	// 72 = 0x48
    struct {
        unsigned int latitude:1;
        unsigned int locationId:1;
        unsigned int longitude:1;
    } _has;	// 80 = 0x50
}

@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) unsigned long long locationId; // @synthesize locationId=_locationId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000088c2e8
- (unsigned long long)hash;	// IMP=0x001000000088c0a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000088bfbe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000088bee8
- (void)copyTo:(id)arg1;	// IMP=0x001000000088bd82
- (void)writeTo:(id)arg1;	// IMP=0x001000000088bc99
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000088bc8c
- (id)dictionaryRepresentation;	// IMP=0x001000000088b662
- (id)description;	// IMP=0x001000000088b5eb
- (void)setModes:(double *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000088b5d4
- (double)modesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000088b53a
- (void)addModes:(double)arg1;	// IMP=0x001000000088b529
- (void)clearModes;	// IMP=0x001000000088b518
@property(readonly, nonatomic) double *modes;
@property(readonly, nonatomic) unsigned long long modesCount;
- (void)setMacs:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000088b4de
- (unsigned long long)macsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000088b445
- (void)addMacs:(unsigned long long)arg1;	// IMP=0x001000000088b431
- (void)clearMacs;	// IMP=0x001000000088b420
@property(readonly, nonatomic) unsigned long long *macs;
@property(readonly, nonatomic) unsigned long long macsCount;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;
@property(nonatomic) _Bool hasLocationId;
- (void)dealloc;	// IMP=0x001000000088b2d0

@end
