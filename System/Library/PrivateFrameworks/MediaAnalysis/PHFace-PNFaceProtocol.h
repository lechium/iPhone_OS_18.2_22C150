//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFace.h>

@class NSData, NSString;

@interface PHFace (PNFaceProtocol)
@property(nonatomic) long long qualityMeasure; // @dynamic qualityMeasure;
@property(readonly, nonatomic) NSData *faceprintData;
- (double)photosFaceRepresentationQuality;	// IMP=0x002000000019ad4a
- (double)photosFaceRepresentationRoll;	// IMP=0x002000000019ad38
- (id)photosFaceRepresentationLocalIdentifier;	// IMP=0x002000000019ad26
- (long long)photosFaceRepresentationClusterSequenceNumber;	// IMP=0x002000000019ad14
- (long long)photosFaceRepresentationQualityMeasure;	// IMP=0x002000000019ad02
- (_Bool)photosFaceRepresentationIsRightEyeClosed;	// IMP=0x002000000019acf0
- (_Bool)photosFaceRepresentationIsLeftEyeClosed;	// IMP=0x002000000019acde
- (_Bool)photosFaceRepresentationHasSmile;	// IMP=0x002000000019accc
- (double)photosFaceRepresentationBlurScore;	// IMP=0x002000000019acba
- (double)photosFaceRepresentationSize;	// IMP=0x002000000019aca8
- (double)photosFaceRepresentationCenterY;	// IMP=0x002000000019ac96
- (double)photosFaceRepresentationCenterX;	// IMP=0x002000000019ac84
- (long long)photosFaceRepresentationSourceHeight;	// IMP=0x002000000019ac72
- (long long)photosFaceRepresentationSourceWidth;	// IMP=0x002000000019ac60
- (struct CGRect)vcp_normalizedBodyBounds;	// IMP=0x00200000002f41ef
- (_Bool)vcp_hasBody;	// IMP=0x00200000002f416a
- (struct CGRect)vcp_normalizedFaceBounds;	// IMP=0x00200000002f4026
- (_Bool)vcp_hasFace;	// IMP=0x00200000002f3fba

// Remaining properties
@property(readonly, nonatomic) unsigned short ageType;
@property(readonly, nonatomic) double centerX;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) long long clusterSequenceNumber;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *personLocalIdentifier;
@property(readonly, nonatomic) unsigned short poseType;
@property(readonly, nonatomic) double poseYaw;
@property(readonly, nonatomic) double size;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long vuObservationID;
@end

