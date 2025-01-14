//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (SBFSurfaceUtilities)
+ (id)sbf_imageWithIOSurface:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x0060000000040e6a
+ (id)sbf_imageFromBGRAContextWithSize:(struct CGSize)arg1 scale:(double)arg2 colorSpace:(struct CGColorSpace *)arg3 withAlpha:(_Bool)arg4 pool:(id)arg5 drawing:(CDUnknownBlockType)arg6 encapsulation:(CDUnknownBlockType)arg7;	// IMP=0x00600000000429ba
+ (id)sbf_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5 encapsulation:(CDUnknownBlockType)arg6;	// IMP=0x006000000004299a
+ (id)sbf_imageFromContextWithSize:(struct CGSize)arg1 scale:(double)arg2 type:(long long)arg3 pool:(id)arg4 drawing:(CDUnknownBlockType)arg5;	// IMP=0x006000000004297a
+ (unsigned long long)sbf_bytesNeededForSize:(struct CGSize)arg1 scale:(double)arg2 withContextType:(long long)arg3;	// IMP=0x006000000004280f
- (id)sbf_resizeImageToSize:(struct CGSize)arg1;	// IMP=0x0010000000041606
- (id)sbf_resizeImageToSize:(struct CGSize)arg1 preservingAspectRatio:(_Bool)arg2;	// IMP=0x0010000000041515
- (id)sbf_scaleImage:(double)arg1 canUseIOSurface:(_Bool)arg2;	// IMP=0x00100000000413f9
- (id)sbf_scaleImage:(double)arg1;	// IMP=0x00100000000413e2
- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3 canUseIOSurface:(_Bool)arg4;	// IMP=0x00100000000410ff
- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 canUseIOSurface:(_Bool)arg3;	// IMP=0x00100000000410e6
- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3;	// IMP=0x00100000000410cf
- (id)sbf_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2;	// IMP=0x00100000000410b8
- (long long)sbf_EXIFOrientation;	// IMP=0x0010000000041925
- (id)sbf_ATXSafeCGImageBackedImage;	// IMP=0x0010000000042606
- (id)sbf_imageByConvertingToColorSpace:(struct CGColorSpace *)arg1 type:(long long)arg2;	// IMP=0x0010000000041d93
- (id)sbf_imageUsingContextType:(long long)arg1;	// IMP=0x0010000000041d7c
- (id)sbf_imageByManipulatingInDeviceColorSpaceWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000004196a
- (struct CGColorSpace *)sbf_colorSpace;	// IMP=0x001000000004193f
- (id)sbf_memoryMappedImageWithPool:(id)arg1;	// IMP=0x0010000000042d32
- (id)sbf_downscaledImageByDrawingIntoContextOfType:(long long)arg1 downscaleFactor:(double)arg2;	// IMP=0x00100000000429fc
- (id)sbf_imageByDrawingIntoContextOfType:(long long)arg1;	// IMP=0x00100000000429e2
- (id)sbf_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1 skipCIF10FitsInSRGBCheck:(_Bool)arg2;	// IMP=0x0010000000042faa
- (id)sbf_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1;	// IMP=0x0010000000042f96
- (id)sbf_CGImageBackedImage;	// IMP=0x0010000000042f7d
- (id)sbf_imageByTilingCenterPixel;	// IMP=0x00100000000431a5
- (id)sbf_imageHashData;	// IMP=0x0010000000043261
- (id)sbf_resizedImageForCurrentMagnifyMode;	// IMP=0x0010000000051740
@end

