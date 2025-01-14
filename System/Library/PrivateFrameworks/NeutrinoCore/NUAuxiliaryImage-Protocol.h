//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class AVDepthData, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, NSDictionary, NUColorSpace;

@protocol NUAuxiliaryImage <NSObject>
@property(readonly, nonatomic) NUColorSpace *colorSpace;
@property(readonly, nonatomic) struct CGImageMetadata *metadata;
@property(readonly) long long auxiliaryImageType;
- (struct CGImage *)cgImageRef;
- (struct __CVBuffer *)cvPixelBufferRef;
- (unsigned int)pixelFormatType;
- (NSDictionary *)dictionaryRepresentation;
- (NSDictionary *)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
- (id)auxiliaryImageByUpdatingMetadata:(struct CGImageMetadata *)arg1;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)arg1;

@optional
- (AVSemanticSegmentationMatte *)underlyingAVSemanticSegmentationMatte;
- (AVPortraitEffectsMatte *)underlyingAVPortraitEffectsMatte;
- (AVDepthData *)underlyingAVDepthData;
@end

