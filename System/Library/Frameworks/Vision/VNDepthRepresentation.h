//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVDepthData, NSData;

__attribute__((visibility("hidden")))
@interface VNDepthRepresentation : NSObject
{
    AVDepthData *_depthData;	// 8 = 0x8
    unsigned int _orientation;	// 16 = 0x10
}

+ (id)depthRepresentationForImageSource:(struct CGImageSource *)arg1 orientation:(unsigned int)arg2;	// IMP=0x006000000036d377
+ (id)depthRepresentationForDepthData:(id)arg1 orientation:(unsigned int)arg2;	// IMP=0x006000000036d31d
- (void).cxx_destruct;	// IMP=0x000000000036d30d
@property(readonly) unsigned int orientation; // @synthesize orientation=_orientation;
@property(readonly) struct __CVBuffer *depthBuffer;
@property(readonly) NSData *lensDistortionData;
@property(readonly) _Bool absoluteAccuracy;
@property(readonly) _Bool highQuality;
@property(readonly) CDStruct_8e0628e6 cameraIntrinsics;
- (id)_initWithAVDepthData:(id)arg1 orientation:(unsigned int)arg2;	// IMP=0x000000000036d143

@end
