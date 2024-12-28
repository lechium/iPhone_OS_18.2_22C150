//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EQKitBox, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EQKitOverlay : NSObject
{
    NSMutableArray *_overlayBoxes;	// 8 = 0x8
    EQKitBox *_box;	// 16 = 0x10
    double _scale;	// 24 = 0x18
    struct CGRect _erasableBounds;	// 32 = 0x20
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGRect erasableBounds; // @synthesize erasableBounds=_erasableBounds;
@property(readonly, nonatomic) EQKitBox *box; // @synthesize box=_box;
@property(readonly, nonatomic) NSMutableArray *overlayBoxes; // @synthesize overlayBoxes=_overlayBoxes;
- (void)addOpticalAlignForEdge:(unsigned int)arg1 config:(id)arg2;	// IMP=0x0000000000030c1a
- (id)pOpticalAlignOverlayBoxesForBox:(id)arg1 topLevelBox:(id)arg2 minDistance:(double)arg3;	// IMP=0x0000000000030423
- (id)pLineBoxFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withWithRGBA:(double *)arg3 scale:(double)arg4;	// IMP=0x000000000003033c
- (void)addOpticalAlignWithMinimumDistance:(double)arg1;	// IMP=0x00000000000301f1
- (void)addErasableBounds;	// IMP=0x00000000000300da
- (void)addOverlayBox:(id)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000003002e
- (void)renderIntoContext:(id)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000002fef5
- (id)initWithLayout:(id)arg1 scale:(double)arg2;	// IMP=0x000000000002fe4a

@end
