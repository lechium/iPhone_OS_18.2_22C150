//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNNode;

__attribute__((visibility("hidden")))
@interface AVTStickerCamera : NSObject
{
    SCNNode *_node;	// 8 = 0x8
}

+ (id)cameraFromDictionary:(id)arg1 assetsPath:(id)arg2;	// IMP=0x0060000000023b06
+ (id)stickerCameraCache;	// IMP=0x0060000000023ab1
- (void).cxx_destruct;	// IMP=0x0000000000023f02
@property(retain, nonatomic) SCNNode *node; // @synthesize node=_node;
- (id)buildNode;	// IMP=0x0000000000023dfe
- (id)initWithCameraNode:(id)arg1;	// IMP=0x0000000000023d93

@end

