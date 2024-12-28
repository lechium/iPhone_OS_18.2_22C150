//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MADProtoFaceprint, NSString, VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface MADProtoDetectedFace : PBCodable
{
    double _adjustmentVersion;	// 8 = 0x8
    double _blurScore;	// 16 = 0x10
    double _bodyCenterX;	// 24 = 0x18
    double _bodyCenterY;	// 32 = 0x20
    double _bodyHeight;	// 40 = 0x28
    double _bodyWidth;	// 48 = 0x30
    double _centerX;	// 56 = 0x38
    double _centerY;	// 64 = 0x40
    long long _clusterSequenceNumber;	// 72 = 0x48
    long long _faceAlgorithmVersion;	// 80 = 0x50
    double _gazeCenterX;	// 88 = 0x58
    double _gazeCenterY;	// 96 = 0x60
    double _poseYaw;	// 104 = 0x68
    double _quality;	// 112 = 0x70
    long long _qualityMeasure;	// 120 = 0x78
    double _roll;	// 128 = 0x80
    double _size;	// 136 = 0x88
    long long _sourceHeight;	// 144 = 0x90
    long long _sourceWidth;	// 152 = 0x98
    unsigned int _ageType;	// 160 = 0xa0
    int _detectionType;	// 164 = 0xa4
    unsigned int _ethnicityType;	// 168 = 0xa8
    unsigned int _eyesState;	// 172 = 0xac
    unsigned int _faceExpressionType;	// 176 = 0xb0
    NSString *_faceLocalIdentifier;	// 184 = 0xb8
    MADProtoFaceprint *_faceprint;	// 192 = 0xc0
    unsigned int _facialHairType;	// 200 = 0xc8
    float _gazeAngle;	// 204 = 0xcc
    float _gazeConfidence;	// 208 = 0xd0
    VCPProtoBounds *_gazeRect;	// 216 = 0xd8
    unsigned int _gazeType;	// 224 = 0xe0
    unsigned int _glassesType;	// 228 = 0xe4
    NSString *_groupingIdentifier;	// 232 = 0xe8
    unsigned int _hairColorType;	// 240 = 0xf0
    unsigned int _hairType;	// 244 = 0xf4
    unsigned int _headgearType;	// 248 = 0xf8
    unsigned int _poseType;	// 252 = 0xfc
    unsigned int _sexType;	// 256 = 0x100
    unsigned int _skintoneType;	// 260 = 0x104
    unsigned int _smileType;	// 264 = 0x108
    _Bool _hasFaceMask;	// 268 = 0x10c
    _Bool _hasSmile;	// 269 = 0x10d
    _Bool _hidden;	// 270 = 0x10e
    _Bool _isInTrash;	// 271 = 0x10f
    _Bool _isLeftEyeClosed;	// 272 = 0x110
    _Bool _isRightEyeClosed;	// 273 = 0x111
    _Bool _manual;	// 274 = 0x112
    struct {
        unsigned int adjustmentVersion:1;
        unsigned int blurScore:1;
        unsigned int bodyCenterX:1;
        unsigned int bodyCenterY:1;
        unsigned int bodyHeight:1;
        unsigned int bodyWidth:1;
        unsigned int centerX:1;
        unsigned int centerY:1;
        unsigned int clusterSequenceNumber:1;
        unsigned int faceAlgorithmVersion:1;
        unsigned int gazeCenterX:1;
        unsigned int gazeCenterY:1;
        unsigned int poseYaw:1;
        unsigned int quality:1;
        unsigned int qualityMeasure:1;
        unsigned int roll:1;
        unsigned int size:1;
        unsigned int sourceHeight:1;
        unsigned int sourceWidth:1;
        unsigned int ageType:1;
        unsigned int detectionType:1;
        unsigned int ethnicityType:1;
        unsigned int eyesState:1;
        unsigned int faceExpressionType:1;
        unsigned int facialHairType:1;
        unsigned int gazeAngle:1;
        unsigned int gazeConfidence:1;
        unsigned int gazeType:1;
        unsigned int glassesType:1;
        unsigned int hairColorType:1;
        unsigned int hairType:1;
        unsigned int headgearType:1;
        unsigned int poseType:1;
        unsigned int sexType:1;
        unsigned int skintoneType:1;
        unsigned int smileType:1;
        unsigned int hasFaceMask:1;
        unsigned int hasSmile:1;
        unsigned int hidden:1;
        unsigned int isInTrash:1;
        unsigned int isLeftEyeClosed:1;
        unsigned int isRightEyeClosed:1;
        unsigned int manual:1;
    } _has;	// 276 = 0x114
}

+ (id)protoFromPhotosFace:(id)arg1;	// IMP=0x00100000000aa7ce
- (void).cxx_destruct;	// IMP=0x000000000038e613
@property(retain, nonatomic) NSString *groupingIdentifier; // @synthesize groupingIdentifier=_groupingIdentifier;
@property(retain, nonatomic) MADProtoFaceprint *faceprint; // @synthesize faceprint=_faceprint;
@property(nonatomic) float gazeConfidence; // @synthesize gazeConfidence=_gazeConfidence;
@property(nonatomic) float gazeAngle; // @synthesize gazeAngle=_gazeAngle;
@property(retain, nonatomic) VCPProtoBounds *gazeRect; // @synthesize gazeRect=_gazeRect;
@property(nonatomic) double gazeCenterY; // @synthesize gazeCenterY=_gazeCenterY;
@property(nonatomic) double gazeCenterX; // @synthesize gazeCenterX=_gazeCenterX;
@property(nonatomic) unsigned int gazeType; // @synthesize gazeType=_gazeType;
@property(nonatomic) _Bool hasFaceMask; // @synthesize hasFaceMask=_hasFaceMask;
@property(nonatomic) unsigned int ethnicityType; // @synthesize ethnicityType=_ethnicityType;
@property(nonatomic) unsigned int skintoneType; // @synthesize skintoneType=_skintoneType;
@property(nonatomic) unsigned int poseType; // @synthesize poseType=_poseType;
@property(nonatomic) unsigned int hairType; // @synthesize hairType=_hairType;
@property(nonatomic) unsigned int headgearType; // @synthesize headgearType=_headgearType;
@property(nonatomic) unsigned int faceExpressionType; // @synthesize faceExpressionType=_faceExpressionType;
@property(nonatomic) unsigned int glassesType; // @synthesize glassesType=_glassesType;
@property(nonatomic) unsigned int hairColorType; // @synthesize hairColorType=_hairColorType;
@property(nonatomic) unsigned int facialHairType; // @synthesize facialHairType=_facialHairType;
@property(nonatomic) unsigned int smileType; // @synthesize smileType=_smileType;
@property(nonatomic) unsigned int eyesState; // @synthesize eyesState=_eyesState;
@property(nonatomic) unsigned int sexType; // @synthesize sexType=_sexType;
@property(nonatomic) unsigned int ageType; // @synthesize ageType=_ageType;
@property(nonatomic) long long faceAlgorithmVersion; // @synthesize faceAlgorithmVersion=_faceAlgorithmVersion;
@property(nonatomic) double poseYaw; // @synthesize poseYaw=_poseYaw;
@property(nonatomic) double adjustmentVersion; // @synthesize adjustmentVersion=_adjustmentVersion;
@property(nonatomic) _Bool isRightEyeClosed; // @synthesize isRightEyeClosed=_isRightEyeClosed;
@property(nonatomic) _Bool isLeftEyeClosed; // @synthesize isLeftEyeClosed=_isLeftEyeClosed;
@property(nonatomic) double blurScore; // @synthesize blurScore=_blurScore;
@property(nonatomic) _Bool hasSmile; // @synthesize hasSmile=_hasSmile;
@property(nonatomic) _Bool manual; // @synthesize manual=_manual;
@property(nonatomic) _Bool isInTrash; // @synthesize isInTrash=_isInTrash;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double roll; // @synthesize roll=_roll;
@property(nonatomic) long long sourceHeight; // @synthesize sourceHeight=_sourceHeight;
@property(nonatomic) long long sourceWidth; // @synthesize sourceWidth=_sourceWidth;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(nonatomic) long long qualityMeasure; // @synthesize qualityMeasure=_qualityMeasure;
@property(nonatomic) long long clusterSequenceNumber; // @synthesize clusterSequenceNumber=_clusterSequenceNumber;
@property(nonatomic) int detectionType; // @synthesize detectionType=_detectionType;
@property(nonatomic) double bodyHeight; // @synthesize bodyHeight=_bodyHeight;
@property(nonatomic) double bodyWidth; // @synthesize bodyWidth=_bodyWidth;
@property(nonatomic) double bodyCenterY; // @synthesize bodyCenterY=_bodyCenterY;
@property(nonatomic) double bodyCenterX; // @synthesize bodyCenterX=_bodyCenterX;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *faceLocalIdentifier; // @synthesize faceLocalIdentifier=_faceLocalIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000038dc34
- (unsigned long long)hash;	// IMP=0x000000000038c72e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000038bcf8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000038b62b
- (void)copyTo:(id)arg1;	// IMP=0x000000000038afe1
- (void)writeTo:(id)arg1;	// IMP=0x000000000038a965
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000038a958
- (id)dictionaryRepresentation;	// IMP=0x0000000000388153
- (id)description;	// IMP=0x00000000003880a4
@property(readonly, nonatomic) _Bool hasGroupingIdentifier;
@property(readonly, nonatomic) _Bool hasFaceprint;
@property(nonatomic) _Bool hasGazeConfidence;
@property(nonatomic) _Bool hasGazeAngle;
@property(readonly, nonatomic) _Bool hasGazeRect;
@property(nonatomic) _Bool hasGazeCenterY;
@property(nonatomic) _Bool hasGazeCenterX;
@property(nonatomic) _Bool hasGazeType;
@property(nonatomic) _Bool hasHasFaceMask;
@property(nonatomic) _Bool hasEthnicityType;
@property(nonatomic) _Bool hasSkintoneType;
@property(nonatomic) _Bool hasPoseType;
@property(nonatomic) _Bool hasHairType;
@property(nonatomic) _Bool hasHeadgearType;
@property(nonatomic) _Bool hasFaceExpressionType;
@property(nonatomic) _Bool hasGlassesType;
@property(nonatomic) _Bool hasHairColorType;
@property(nonatomic) _Bool hasFacialHairType;
@property(nonatomic) _Bool hasSmileType;
@property(nonatomic) _Bool hasEyesState;
@property(nonatomic) _Bool hasSexType;
@property(nonatomic) _Bool hasAgeType;
@property(nonatomic) _Bool hasFaceAlgorithmVersion;
@property(nonatomic) _Bool hasPoseYaw;
@property(nonatomic) _Bool hasAdjustmentVersion;
@property(nonatomic) _Bool hasIsRightEyeClosed;
@property(nonatomic) _Bool hasIsLeftEyeClosed;
@property(nonatomic) _Bool hasBlurScore;
@property(nonatomic) _Bool hasHasSmile;
@property(nonatomic) _Bool hasManual;
@property(nonatomic) _Bool hasIsInTrash;
@property(nonatomic) _Bool hasHidden;
@property(nonatomic) _Bool hasRoll;
@property(nonatomic) _Bool hasSourceHeight;
@property(nonatomic) _Bool hasSourceWidth;
@property(nonatomic) _Bool hasQuality;
@property(nonatomic) _Bool hasQualityMeasure;
@property(nonatomic) _Bool hasClusterSequenceNumber;
@property(nonatomic) _Bool hasDetectionType;
@property(nonatomic) _Bool hasBodyHeight;
@property(nonatomic) _Bool hasBodyWidth;
@property(nonatomic) _Bool hasBodyCenterY;
@property(nonatomic) _Bool hasBodyCenterX;
@property(nonatomic) _Bool hasCenterY;
@property(nonatomic) _Bool hasCenterX;
@property(nonatomic) _Bool hasSize;
@property(readonly, nonatomic) _Bool hasFaceLocalIdentifier;
- (id)vcpPhotosFace;	// IMP=0x00000000000aadda

@end
