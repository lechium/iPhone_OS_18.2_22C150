//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImage.h>

@class UIImageView;

@interface UIImage (ITKUtilities)
+ (struct CGRect)itk_aspectFitImageFrameForViewWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00200000000107d1
+ (id)itk_imageWithColor:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0020000000010714
+ (id)itk_fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;	// IMP=0x0020000000010021
+ (id)itk_orientationMetadataFromImageOrientation:(long long)arg1;	// IMP=0x002000000000ef6e
+ (id)itk_imageWithCVPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x002000000000eef7
+ (id)itk_imageWithData:(id)arg1 scale:(double)arg2;	// IMP=0x002000000000ee89
+ (id)itk_imageWithData:(id)arg1;	// IMP=0x002000000000ee70
+ (id)itk_imageWithCGImage:(struct CGImage *)arg1;	// IMP=0x002000000000ee4c
+ (id)itk_imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x002000000000ee33
+ (id)itk_imageWithCIImage:(id)arg1;	// IMP=0x002000000000ec97
+ (id)itk_orientedImageFromImage:(id)arg1 toOrientation:(long long)arg2;	// IMP=0x002000000000ebfa
+ (id)itk_orientedImageFromImage:(id)arg1 fromOrientation:(long long)arg2;	// IMP=0x002000000000eb13
+ (id)itk_orientedImageFromCGImage:(struct CGImage *)arg1 scale:(double)arg2 transform:(struct CGAffineTransform)arg3;	// IMP=0x002000000000e92b
+ (id)itk_UIImageFromCIImage:(id)arg1;	// IMP=0x002000000000e83d
+ (id)itk_symbolImageWithName:(id)arg1;	// IMP=0x002000000000e460
+ (id)itk_imageNamed:(id)arg1 withTint:(id)arg2 size:(struct CGSize)arg3;	// IMP=0x002000000000de50
+ (id)itk_imageNamed:(id)arg1 withTint:(id)arg2;	// IMP=0x002000000000ddb6
+ (id)itk_mainScreenScaledImageWithData:(id)arg1;	// IMP=0x002000000000dcb6
+ (id)itk_imageWithContentsOfURL:(id)arg1;	// IMP=0x002000000000dc2f
- (struct CGRect)itk_cropRectZeroAlpha;	// IMP=0x0010000000010941
- (id)itk_decodeInBackground;	// IMP=0x00100000000105fa
- (void)itk_decodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001039c
- (void)itk_imageDataWithRequirements:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f7ea
- (id)itk_imageDataWithRequirements:(id)arg1;	// IMP=0x001000000000f5e3
- (id)itk_imageDataWithUTType:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000000f45f
- (id)itk_imageDataWithUTType:(id)arg1;	// IMP=0x001000000000f379
- (id)itk_HEICDataLossless;	// IMP=0x001000000000f35f
- (id)itk_HEICData;	// IMP=0x001000000000f345
- (id)itk_HEICDataWithCompressionQuality:(double)arg1 orientation:(long long)arg2;	// IMP=0x001000000000f248
- (id)itk_HEICDataWithCompressionQuality:(double)arg1;	// IMP=0x001000000000f205
- (id)itk_PNGDataWithOrientation:(long long)arg1;	// IMP=0x001000000000f16a
- (id)itk_PNGData;	// IMP=0x001000000000f0ff
- (id)itk_JPEGDataWithOrientation:(long long)arg1;	// IMP=0x001000000000f064
- (id)itk_JPEGData;	// IMP=0x001000000000f033
- (unsigned int)itk_cgImagePropertyOrientation;	// IMP=0x001000000000ef54
- (id)itk_horizontallyMirroredImage;	// IMP=0x001000000000eea2
- (long long)itk_imageOrientation;	// IMP=0x001000000000ee5e
- (id)itk_ciImage;	// IMP=0x001000000000ee21
- (struct CGImage *)itk_cgImageGeneratingIfNecessary;	// IMP=0x001000000000ed07
- (struct CGImage *)itk_cgImage;	// IMP=0x001000000000eced
- (id)itk_debug;	// IMP=0x001000000000ece4
- (id)itk_squareStickerImageWithEdgeLength:(double)arg1;	// IMP=0x001000000000e6b9
- (id)itk_imageFromSubrect:(struct CGRect)arg1;	// IMP=0x001000000000e479
- (id)itk_scaledImageWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x001000000000e322
- (id)itk_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;	// IMP=0x001000000000e29c
- (id)itk_scaledImageMinDimension:(double)arg1 scale:(double)arg2;	// IMP=0x001000000000e216
@property(readonly, nonatomic) double itk_scale;
@property(readonly, nonatomic) UIImageView *itk_imageView;
- (id)itk_imageWithTint:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x001000000000def4
@end

