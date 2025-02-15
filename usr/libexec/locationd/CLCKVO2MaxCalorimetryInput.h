//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CLCKVO2MaxCalorimetryInput : PBCodable
{
    double _cadence;	// 8 = 0x8
    double _grade;	// 16 = 0x10
    double _hrTime;	// 24 = 0x18
    double _pace;	// 32 = 0x20
    double _startTime;	// 40 = 0x28
    int _gradeType;	// 48 = 0x30
    float _hr;	// 52 = 0x34
    float _hrConfidence;	// 56 = 0x38
    int _metSource;	// 60 = 0x3c
    float _mets;	// 64 = 0x40
    int _workoutType;	// 68 = 0x44
    _Bool _hasGPS;	// 72 = 0x48
    _Bool _hasStrideCal;	// 73 = 0x49
    _Bool _isStroller;	// 74 = 0x4a
    struct {
        unsigned int cadence:1;
        unsigned int grade:1;
        unsigned int hrTime:1;
        unsigned int pace:1;
        unsigned int startTime:1;
        unsigned int gradeType:1;
        unsigned int hr:1;
        unsigned int hrConfidence:1;
        unsigned int metSource:1;
        unsigned int mets:1;
        unsigned int workoutType:1;
        unsigned int hasGPS:1;
        unsigned int hasStrideCal:1;
        unsigned int isStroller:1;
    } _has;	// 76 = 0x4c
}

@property(nonatomic) double hrTime; // @synthesize hrTime=_hrTime;
@property(nonatomic) _Bool isStroller; // @synthesize isStroller=_isStroller;
@property(nonatomic) double pace; // @synthesize pace=_pace;
@property(nonatomic) double cadence; // @synthesize cadence=_cadence;
@property(nonatomic) int workoutType; // @synthesize workoutType=_workoutType;
@property(nonatomic) _Bool hasStrideCal; // @synthesize hasStrideCal=_hasStrideCal;
@property(nonatomic) _Bool hasGPS; // @synthesize hasGPS=_hasGPS;
@property(nonatomic) double grade; // @synthesize grade=_grade;
@property(nonatomic) int gradeType; // @synthesize gradeType=_gradeType;
@property(nonatomic) float hrConfidence; // @synthesize hrConfidence=_hrConfidence;
@property(nonatomic) float hr; // @synthesize hr=_hr;
@property(nonatomic) int metSource; // @synthesize metSource=_metSource;
- (float);	// IMP=0x00100000009f4916
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000009f475a
- (unsigned long long)hash;	// IMP=0x00100000009f3eb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000009f3bb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000009f39cc
- (void)copyTo:(id)arg1;	// IMP=0x00100000009f3822
- (void)writeTo:(id)arg1;	// IMP=0x00100000009f3609
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000009f35fc
- (id)dictionaryRepresentation;	// IMP=0x00100000009f2a82
- (id)description;	// IMP=0x00100000009f2a0b
@property(nonatomic) _Bool hasHrTime;
@property(nonatomic) _Bool hasIsStroller;
@property(nonatomic) _Bool hasPace;
@property(nonatomic) _Bool hasCadence;
@property(nonatomic) _Bool hasWorkoutType;
@property(nonatomic) _Bool hasHasStrideCal;
@property(nonatomic) _Bool hasHasGPS;
@property(nonatomic) _Bool hasGrade;
@property(nonatomic) _Bool hasGradeType;
@property(nonatomic) _Bool hasHrConfidence;
@property(nonatomic) _Bool hasHr;
@property(nonatomic) _Bool hasMetSource;
@property(nonatomic) _Bool hasMets;
@property(nonatomic) float mets; // @synthesize mets=_mets;
@property(nonatomic) _Bool hasStartTime;

@end

