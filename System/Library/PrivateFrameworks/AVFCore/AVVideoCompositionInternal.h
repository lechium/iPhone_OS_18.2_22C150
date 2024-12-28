//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVideoCompositionCoreAnimationTool, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVVideoCompositionInternal : NSObject
{
    unsigned long long changeSeed;	// 8 = 0x8
    NSString *builtInCompositorName;	// 16 = 0x10
    Class customCompositorClass;	// 24 = 0x18
    CDStruct_1b6d18a9 frameDuration;	// 32 = 0x20
    int sourceTrackIDForFrameTiming;	// 56 = 0x38
    struct CGSize renderSize;	// 64 = 0x40
    float renderScale;	// 80 = 0x50
    NSString *colorPrimaries;	// 88 = 0x58
    NSString *colorYCbCrMatrix;	// 96 = 0x60
    NSString *colorTransferFunction;	// 104 = 0x68
    NSString *perFrameHDRDisplayMetadataPolicy;	// 112 = 0x70
    NSArray *instructions;	// 120 = 0x78
    _Bool auxiliaryTrackLayerSetLast;	// 128 = 0x80
    AVVideoCompositionCoreAnimationTool *animationTool;	// 136 = 0x88
    NSArray *sourceSampleDataTracks;	// 144 = 0x90
    NSDictionary *sourceVideoTrackWindowsForTrackIDs;	// 152 = 0x98
    NSDictionary *sourceSampleDataTrackWindowsForTrackIDs;	// 160 = 0xa0
}

@end
