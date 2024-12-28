//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPInterAssetAnalyzer : NSObject
{
}

+ (struct CGSize)thumbnailSizeForAsset:(id)arg1 withResources:(id)arg2;	// IMP=0x0080000000309b5f
+ (_Bool)canUseLastFrameOfAsset:(id)arg1 withResources:(id)arg2;	// IMP=0x0080000000309a8a
- (int)computeDistance:(float *)arg1 fromArray:(id)arg2 toArray:(id)arg3;	// IMP=0x000000000030aa78
- (int)computeDistance:(float *)arg1 withDescriptorClass:(id)arg2 fromAsset:(id)arg3 toAsset:(id)arg4;	// IMP=0x000000000030a89a
- (int)generateDistanceDescriptor:(id *)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3 withResources:(id)arg4 lastFrame:(_Bool)arg5;	// IMP=0x000000000030a667
- (struct __CVBuffer *)_getThumbnailForAsset:(id)arg1 withResouces:(id)arg2 andPixelFormat:(int)arg3;	// IMP=0x000000000030a1c1
- (int)_generateLastFrameDistanceDescriptor:(id *)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3;	// IMP=0x0000000000309cd9
- (id)init;	// IMP=0x0000000000309a3c

@end
