//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CALayer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BCSCircularEffectView : UIView
{
    NSMutableArray *_circles;	// 8 = 0x8
    CALayer *_centerRing;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001d499
- (void)revealCenterGlyphAndRings;	// IMP=0x000000000001d2d1
- (void)animateRingsRotationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001cf18
- (void)animateCenterGlyphAndRings;	// IMP=0x000000000001cba0
- (void)_buildRings;	// IMP=0x000000000001c083
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001c014

@end

