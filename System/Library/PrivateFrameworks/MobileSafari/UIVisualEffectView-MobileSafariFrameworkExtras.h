//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIVisualEffectView.h>

@interface UIVisualEffectView (MobileSafariFrameworkExtras)
+ (id)sf_startPageBackgroundTraits;	// IMP=0x00300000000ce5d9
+ (id)sf_startPageLabelVibrancyEffectView;	// IMP=0x00300000000ce545
+ (id)sf_startPageCellBackgroundEffectViewWithShadow:(_Bool)arg1 shadowRadius:(double)arg2;	// IMP=0x00300000000ce387
+ (id)sf_startPageCellBackgroundEffectViewWithShadow:(_Bool)arg1;	// IMP=0x00300000000ce36d
+ (id)safari_statusBarGradientBlurEffectView;	// IMP=0x00300000000ce29a
- (void)sf_setHighlighted:(_Bool)arg1 cellState:(id)arg2 nonVibrantBackgroundColor:(id)arg3;	// IMP=0x00100000000ceb8e
- (void)sf_setHighlighted:(_Bool)arg1 cellState:(id)arg2;	// IMP=0x00100000000ceacc
- (void)sf_configureAsStartPageForegroundWithEffectStyle:(long long)arg1;	// IMP=0x00100000000ce9c2
- (void)sf_configureAsStartPageBackgroundWithNonVibrantBackgroundColor:(id)arg1;	// IMP=0x00100000000ce7c9
- (void)sf_configureAsStartPageBackgroundIgnoringVibrancyWithBackgroundColor:(id)arg1;	// IMP=0x00100000000ce700
- (void)sf_configureAsStartPageBackgroundIgnoringVibrancy;	// IMP=0x00100000000ce6ad
- (void)sf_configureAsStartPageBackground;	// IMP=0x00100000000ce65a
@end
