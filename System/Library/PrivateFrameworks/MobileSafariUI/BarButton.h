//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

__attribute__((visibility("hidden")))
@interface BarButton : UIButton
{
    _Bool _shouldRespectContextMenuOrdering;	// 8 = 0x8
    struct CGRect _barButtonHitRect;	// 16 = 0x10
}

+ (id)sidebarButtonWithPrimaryAction:(id)arg1;	// IMP=0x006000000017f169
@property(nonatomic) _Bool shouldRespectContextMenuOrdering; // @synthesize shouldRespectContextMenuOrdering=_shouldRespectContextMenuOrdering;
@property(nonatomic) struct CGRect barButtonHitRect; // @synthesize barButtonHitRect=_barButtonHitRect;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000017f0ff
- (struct CGRect)_selectedIndicatorBounds;	// IMP=0x000000000017efda
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x000000000017ef71
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000017ef22
- (struct CGRect)_barButtonHitRect;	// IMP=0x000000000017eeb4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000017edaa

@end

