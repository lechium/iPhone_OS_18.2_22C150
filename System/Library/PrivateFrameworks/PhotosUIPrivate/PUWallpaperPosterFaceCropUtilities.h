//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUWallpaperPosterFaceCropUtilities : NSObject
{
}

+ (id)_getNormalizedFaceRects:(id)arg1 userInfo:(id)arg2 originalImage:(struct CGRect)arg3 visibleFrame:(struct CGRect)arg4;	// IMP=0x0080000000171b32
+ (struct CGRect)_getBoundingFaceRectFor:(id)arg1 userInfo:(id)arg2 visibleFrame:(struct CGRect)arg3 originalImage:(struct CGRect)arg4;	// IMP=0x00800000001713c6
+ (struct CGRect)_getBestCropForVisibleFrame:(struct CGRect)arg1 preferredCropCrect:(struct CGRect)arg2 acceptableCropRect:(struct CGRect)arg3 faceRect:(struct CGRect)arg4;	// IMP=0x0080000000171269
+ (struct CGRect)_getNormalizedRectForSaliencyRect:(struct CGRect)arg1 originalImage:(struct CGRect)arg2 visibleFrame:(struct CGRect)arg3;	// IMP=0x0080000000171106
+ (struct CGRect)getSquareCropForVisibleFrame:(struct CGRect)arg1 layerStack:(id)arg2 userInfo:(id)arg3 originalImage:(struct CGRect)arg4;	// IMP=0x0080000000170c2d

@end
