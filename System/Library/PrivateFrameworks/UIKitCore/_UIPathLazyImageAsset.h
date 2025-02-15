//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageAsset.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIPathLazyImageAsset : UIImageAsset
{
    struct {
        unsigned int haveCGCacheImages:1;
        unsigned int imagesHaveBeenLoaded:1;
    } _plaFlags;	// 88 = 0x58
    _Bool _haveCGCacheImages;	// 92 = 0x5c
    NSArray *_imagePaths;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000d0ba33
@property(readonly, nonatomic) _Bool haveCGCacheImages; // @synthesize haveCGCacheImages=_haveCGCacheImages;
@property(readonly, copy, nonatomic) NSArray *imagePaths; // @synthesize imagePaths=_imagePaths;
- (_Bool)_containsImagesInPath:(id)arg1;	// IMP=0x0000000000d0b8de
- (void)_clearResolvedImageResources;	// IMP=0x0000000000d0b6e7
- (id)imageWithConfiguration:(id)arg1;	// IMP=0x0000000000d0b45d
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2 imagePaths:(id)arg3 haveCGCacheImages:(_Bool)arg4;	// IMP=0x0000000000d0b3b0
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2;	// IMP=0x0000000000d0b274
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;	// IMP=0x0000000000d0b157
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d0b128
- (id)init;	// IMP=0x0000000000d0afd4

@end

