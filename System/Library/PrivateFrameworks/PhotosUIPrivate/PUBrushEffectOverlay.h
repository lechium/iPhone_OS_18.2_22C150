//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSObject, VFXNode, VFXView, VFXWorld;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUBrushEffectOverlay : UIView
{
    VFXWorld *_world;	// 8 = 0x8
    VFXView *_vfxView;	// 16 = 0x10
    VFXNode *_emitterWand;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004c4212
- (void)layoutSubviews;	// IMP=0x00000000004c41d1
- (void)_layoutSubviews;	// IMP=0x00000000004c417a
- (void)_recycleVFXView;	// IMP=0x00000000004c3fec
- (void)loadEffect;	// IMP=0x00000000004c3d7a
- (void)setBrushRadius:(double)arg1;	// IMP=0x00000000004c3c47
- (void)setBrushPosition:(struct CGPoint)arg1;	// IMP=0x00000000004c3bbf
- (void)_disableRendersContinuously:(id)arg1;	// IMP=0x00000000004c3ba0
- (void)endEmission;	// IMP=0x00000000004c3b03
- (void)startEmission;	// IMP=0x00000000004c3a57
- (void)setNormalizedBrushPosition:(struct CGPoint)arg1;	// IMP=0x00000000004c38ce
- (void)setMaxEDR:(double)arg1;	// IMP=0x00000000004c378d
- (id)initWithTimeScale:(double)arg1;	// IMP=0x00000000004c36c6

@end
