//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNHumanBodyPoseDetector
{
}

+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00800000002e2206
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x00800000002e21a3
+ (Class)recognizedPointsObservationClass;	// IMP=0x00800000002e2192
- (id)_vcpRequestRevisionForOptions:(id)arg1;	// IMP=0x00000000002e2ba7
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e299a
- (_Bool)shouldBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000002e2854
- (_Bool)canBehaveAsDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000002e272a
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002e2501

@end
