//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EQKitBox;

__attribute__((visibility("hidden")))
@interface EQKitOverlayBox
{
    EQKitBox *_box;	// 8 = 0x8
    EQKitBox *_overlayBox;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005f432
@property(readonly, nonatomic) EQKitBox *overlayBox; // @synthesize overlayBox=_overlayBox;
@property(readonly, nonatomic) EQKitBox *box; // @synthesize box=_box;
- (id)description;	// IMP=0x000000000005f2f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005f13f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005f085
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;	// IMP=0x000000000005f013
- (id)hitTest:(struct CGPoint)arg1;	// IMP=0x000000000005eff6
- (_Bool)appendOpticalAlignToSpec:(void *)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000005efd9
- (void)renderIntoContext:(id)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000005ef1b
- (struct CGRect)erasableBounds;	// IMP=0x000000000005ee73
- (double)depth;	// IMP=0x000000000005ee56
- (double)height;	// IMP=0x000000000005ee39
- (double)width;	// IMP=0x000000000005ee1c
- (id)containedBoxes;	// IMP=0x000000000005ed3b
- (_Bool)canContainBoxes;	// IMP=0x000000000005ed33
- (id)initWithBox:(id)arg1 overlayBox:(id)arg2;	// IMP=0x000000000005ec73

@end

