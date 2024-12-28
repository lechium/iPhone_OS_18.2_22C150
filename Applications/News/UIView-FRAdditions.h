//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@interface UIView (FRAdditions)
+ (id)fr_adjacentSiblingViewsFromViews:(id)arg1;	// IMP=0x002000000007f87e
+ (void)fr_animateWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000007edd7
@property(readonly, nonatomic) _Bool visible;
- (void)fr_recolorLabelSubviewsWithColor:(id)arg1;	// IMP=0x001000000007fe14
- (void)fr_setBlurred:(_Bool)arg1 radius:(double)arg2 animated:(_Bool)arg3 duration:(double)arg4;	// IMP=0x001000000007eebe
- (struct CGRect)fr_adjustedWidthAndXOriginFromFrame:(struct CGRect)arg1;	// IMP=0x001000000007ed9b
- (id)fr_subviewsOfType:(Class)arg1;	// IMP=0x001000000007ebe6
- (id)fr_selfOrFirstAncestorOfType:(Class)arg1;	// IMP=0x001000000007eb57
- (id)fr_firstAncestorOfType:(Class)arg1;	// IMP=0x001000000007eabd
- (_Bool)fr_hasAncestorOfType:(Class)arg1;	// IMP=0x001000000007ea8a
- (void)fr_accessibilityWorkaroundFor20458918ByClearingParentTableCellsChildCache;	// IMP=0x001000000007ea1d
- (void)fr_setHeight:(double)arg1;	// IMP=0x001000000007e9b2
@property(nonatomic) double fr_height;
@property(nonatomic) double fr_width;
- (void)fr_setMaxY:(double)arg1;	// IMP=0x001000000007e84e
- (void)fr_setMinY:(double)arg1;	// IMP=0x001000000007e7e3
- (void)fr_setMaxX:(double)arg1;	// IMP=0x001000000007e773
- (void)fr_setMinX:(double)arg1;	// IMP=0x001000000007e709
- (void)roundOrigin;	// IMP=0x001000000007e684
@end
