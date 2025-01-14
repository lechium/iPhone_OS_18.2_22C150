//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextRecognition/NSObject-Protocol.h>

@class CRImage, CRMetalPolygonRectifier, CRNeuralRecognizerConfiguration, NSArray, NSObject;
@protocol CRTextRecognizerModelInput;

@protocol CRTextRecognizerModelInputProvider <NSObject>
- (NSObject<CRTextRecognizerModelInput> *)inputBatchFromLineRegions:(NSArray *)arg1 image:(CRImage *)arg2 regionWidth:(double)arg3 configuration:(CRNeuralRecognizerConfiguration *)arg4 rectifier:(CRMetalPolygonRectifier *)arg5;
@end

