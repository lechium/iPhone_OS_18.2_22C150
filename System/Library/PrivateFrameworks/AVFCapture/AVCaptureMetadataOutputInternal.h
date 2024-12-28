//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AVCaptureMetadataOutputInternal : NSObject
{
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;	// 8 = 0x8
    AVWeakReference *weakReference;	// 16 = 0x10
    NSArray *metadataObjectTypes;	// 24 = 0x18
    struct CGRect rectOfInterest;	// 32 = 0x20
    _Bool faceTrackingMetadataObjectTypesAvailable;	// 64 = 0x40
    long long faceTrackingMaxFaces;	// 72 = 0x48
    _Bool faceTrackingUsesFaceRecognition;	// 80 = 0x50
    _Bool faceTrackingPlusEnabled;	// 81 = 0x51
    float faceTrackingNetworkFailureThresholdMultiplier;	// 84 = 0x54
    float faceTrackingFailureFieldOfViewModifier;	// 88 = 0x58
    _Bool attentionDetectionEnabled;	// 92 = 0x5c
    _Bool videoPreviewHistogramMetadataObjectTypesAvailable;	// 93 = 0x5d
    _Bool appClipCodeObjectTypeAvailable;	// 94 = 0x5e
    _Bool textRegionObjectTypeAvailable;	// 95 = 0x5f
    _Bool sceneClassificationObjectTypeAvailable;	// 96 = 0x60
    _Bool visualIntelligenceObjectTypeAvailable;	// 97 = 0x61
    _Bool headObjectTypesAvailable;	// 98 = 0x62
    _Bool humanHandObjectTypeAvailable;	// 99 = 0x63
    _Bool emitsEmptyObjectDetectionMetadata;	// 100 = 0x64
    _Bool offlineVideoStabilizationMotionMetadataObjectTypesAvailable;	// 101 = 0x65
    NSMutableDictionary *previousTwoCMTimesByDetectorType;	// 104 = 0x68
}

- (void)dealloc;	// IMP=0x00000000000c48b4
- (id)init;	// IMP=0x00000000000c4821

@end
