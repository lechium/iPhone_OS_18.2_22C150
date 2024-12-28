//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollView.h>

@interface UIScrollView (Bridge)
- (void)ts_setZoomEnabled:(_Bool)arg1;	// IMP=0x003000000000ce8a
- (_Bool)ts_isZoomEnabled;	// IMP=0x003000000000ce78
- (void)ts_setIndicatorInsetAdjustmentBehaviorAlways;	// IMP=0x003000000000ce61
- (void)ts_setIndicatorInsetAdjustmentBehaviorAutomatic;	// IMP=0x003000000000ce4d
- (void)ts_setIndicatorInsetAdjustmentBehaviorNever;	// IMP=0x003000000000ce36
- (_Bool)ts_isAutomaticContentOffsetAdjustmentEnabled;	// IMP=0x003000000000ce24
- (void)ts_setAutomaticContentOffsetAdjustmentEnabled:(_Bool)arg1;	// IMP=0x003000000000ce12
- (_Bool)ts_scrollToTop:(_Bool)arg1 dismissKeyboard:(_Bool)arg2;	// IMP=0x003000000000cd65
- (_Bool)ts_scrollToTop:(_Bool)arg1;	// IMP=0x003000000000ccb0
@property(readonly, nonatomic) double ts_verticalVelocity;
@property(readonly, nonatomic) _Bool ts_isAnimatingScroll;
@property(readonly, nonatomic) _Bool ts_isVerticalBouncing;
@property(readonly, nonatomic) _Bool ts_isScrolling;
@end
