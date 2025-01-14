//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@class UIImageView;

@interface UIImage (Utilities)
+ (struct CGRect)vk_aspectFitImageFrameForViewWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00200000000db2ff
+ (id)vk_imageWithColor:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00200000000db242
+ (id)vk_fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;	// IMP=0x00200000000dab7f
+ (id)vk_orientationMetadataFromImageOrientation:(long long)arg1;	// IMP=0x00200000000d9aa9
+ (id)vk_imageWithData:(id)arg1;	// IMP=0x00200000000d9a21
+ (id)vk_imageWithCVPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00200000000d99a9
+ (id)vk_imageWithCGImage:(struct CGImage *)arg1;	// IMP=0x00200000000d9997
+ (id)vk_imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x00200000000d997e
+ (id)vk_imageWithCIImage:(id)arg1;	// IMP=0x00200000000d97cd
+ (id)vk_orientedImageFromImage:(id)arg1 toOrientation:(long long)arg2;	// IMP=0x00200000000d9730
+ (id)vk_orientedImageFromImage:(id)arg1 fromOrientation:(long long)arg2;	// IMP=0x00200000000d9649
+ (id)vk_orientedImageFromCGImage:(struct CGImage *)arg1 scale:(double)arg2 transform:(struct CGAffineTransform)arg3;	// IMP=0x00200000000d9447
+ (id)vk_UIImageFromCIImage:(id)arg1;	// IMP=0x00200000000d9359
+ (id)vk_symbolImageWithName:(id)arg1;	// IMP=0x00200000000d9100
+ (id)vk_imageNamed:(id)arg1 withTint:(id)arg2 size:(struct CGSize)arg3;	// IMP=0x00200000000d8b4c
+ (id)vk_imageNamed:(id)arg1 withTint:(id)arg2;	// IMP=0x00200000000d8ab2
+ (id)vk_imageWithContentsOfURL:(id)arg1;	// IMP=0x00200000000d8a2b
- (struct CGRect)vk_cropRectZeroAlpha;	// IMP=0x00100000000db46f
- (id)vk_decodeInBackground;	// IMP=0x00100000000db128
- (void)vk_decodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000daefa
- (void)vk_imageDataWithRequirements:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000da348
- (id)vk_imageDataWithRequirements:(id)arg1;	// IMP=0x00100000000da154
- (id)vk_imageDataWithUTType:(id)arg1 metadata:(id)arg2;	// IMP=0x00100000000d9f9a
- (id)vk_imageDataWithUTType:(id)arg1;	// IMP=0x00100000000d9eb4
- (id)vk_HEICDataLossless;	// IMP=0x00100000000d9e9a
- (id)vk_HEICData;	// IMP=0x00100000000d9e80
- (id)vk_HEICDataWithCompressionQuality:(double)arg1 orientation:(long long)arg2;	// IMP=0x00100000000d9d83
- (id)vk_HEICDataWithCompressionQuality:(double)arg1;	// IMP=0x00100000000d9d40
- (id)vk_PNGDataWithOrientation:(long long)arg1;	// IMP=0x00100000000d9ca5
- (id)vk_PNGData;	// IMP=0x00100000000d9c3a
- (id)vk_JPEGDataWithOrientation:(long long)arg1;	// IMP=0x00100000000d9b9f
- (id)vk_JPEGData;	// IMP=0x00100000000d9b6e
- (unsigned int)vk_cgImagePropertyOrientation;	// IMP=0x00100000000d9a8f
- (id)vk_horizontallyMirroredImage;	// IMP=0x00100000000d9a3a
- (long long)vk_imageOrientation;	// IMP=0x00100000000d9a0f
- (id)vk_ciImage;	// IMP=0x00100000000d996c
- (struct CGImage *)vk_cgImageGeneratingIfNecessary;	// IMP=0x00100000000d9834
- (struct CGImage *)vk_cgImage;	// IMP=0x00100000000d981a
- (id)vk_imageFromSubrect:(struct CGRect)arg1;	// IMP=0x00100000000d9119
- (id)vk_scaledImageWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x00100000000d8fc2
- (id)vk_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;	// IMP=0x00100000000d8f3c
- (id)vk_scaledImageMinDimension:(double)arg1 scale:(double)arg2;	// IMP=0x00100000000d8eb6
@property(readonly, nonatomic) UIImageView *vk_imageView;
- (id)vk_imageWithTint:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00100000000d8bf0
@end

