//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CLStreamedLocationPrivate : PBCodable
{
    double _deltaDistance;	// 8 = 0x8
    double _deltaDistanceAccuracy;	// 16 = 0x10
    double _groundAltitude;	// 24 = 0x18
    double _groundAltitudeUncertainty;	// 32 = 0x20
    double _maxAbsSlope;	// 40 = 0x28
    double _odometer;	// 48 = 0x30
    double _slope;	// 56 = 0x38
    double _timestampGps;	// 64 = 0x40
    unsigned long long _tropicalSavannaTreeId;	// 72 = 0x48
    unsigned int _tropicalSavannaBranchCount;	// 80 = 0x50
    int _tropicalSavannaProximity;	// 84 = 0x54
    struct {
        unsigned int deltaDistance:1;
        unsigned int deltaDistanceAccuracy:1;
        unsigned int groundAltitude:1;
        unsigned int groundAltitudeUncertainty:1;
        unsigned int maxAbsSlope:1;
        unsigned int odometer:1;
        unsigned int slope:1;
        unsigned int timestampGps:1;
        unsigned int tropicalSavannaTreeId:1;
        unsigned int tropicalSavannaBranchCount:1;
        unsigned int tropicalSavannaProximity:1;
    } _has;	// 88 = 0x58
}

@property(nonatomic) unsigned long long tropicalSavannaTreeId; // @synthesize tropicalSavannaTreeId=_tropicalSavannaTreeId;
@property(nonatomic) unsigned int tropicalSavannaBranchCount; // @synthesize tropicalSavannaBranchCount=_tropicalSavannaBranchCount;
@property(nonatomic) double groundAltitudeUncertainty; // @synthesize groundAltitudeUncertainty=_groundAltitudeUncertainty;
@property(nonatomic) double groundAltitude; // @synthesize groundAltitude=_groundAltitude;
@property(nonatomic) double maxAbsSlope; // @synthesize maxAbsSlope=_maxAbsSlope;
@property(nonatomic) double slope; // @synthesize slope=_slope;
@property(nonatomic) double timestampGps; // @synthesize timestampGps=_timestampGps;
@property(nonatomic) double deltaDistanceAccuracy; // @synthesize deltaDistanceAccuracy=_deltaDistanceAccuracy;
@property(nonatomic) double deltaDistance; // @synthesize deltaDistance=_deltaDistance;
@property(nonatomic) double odometer; // @synthesize odometer=_odometer;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000de4501
- (unsigned long long)hash;	// IMP=0x0010000000de3ce7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000de3a90
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000de3900
- (void)copyTo:(id)arg1;	// IMP=0x0010000000de37ae
- (void)writeTo:(id)arg1;	// IMP=0x0010000000de3601
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000de35f4
- (id)dictionaryRepresentation;	// IMP=0x0010000000de2ce6
- (id)description;	// IMP=0x0010000000de2c6f
@property(nonatomic) _Bool hasTropicalSavannaTreeId;
@property(nonatomic) _Bool hasTropicalSavannaBranchCount;
- (int)StringAsTropicalSavannaProximity:(id)arg1;	// IMP=0x0010000000de2b0c
- (id)tropicalSavannaProximityAsString:(int)arg1;	// IMP=0x0010000000de2ad3
@property(nonatomic) _Bool hasTropicalSavannaProximity;
@property(nonatomic) int tropicalSavannaProximity; // @synthesize tropicalSavannaProximity=_tropicalSavannaProximity;
@property(nonatomic) _Bool hasGroundAltitudeUncertainty;
@property(nonatomic) _Bool hasGroundAltitude;
@property(nonatomic) _Bool hasMaxAbsSlope;
@property(nonatomic) _Bool hasSlope;
@property(nonatomic) _Bool hasTimestampGps;
@property(nonatomic) _Bool hasDeltaDistanceAccuracy;
@property(nonatomic) _Bool hasDeltaDistance;
@property(nonatomic) _Bool hasOdometer;
- (struct CLDaemonLocationPrivate)daemonLocationPrivate;	// IMP=0x0010000000da8415
- (id)initWithDaemonLocationPrivate:(const void *)arg1;	// IMP=0x0010000000da7d18

@end

