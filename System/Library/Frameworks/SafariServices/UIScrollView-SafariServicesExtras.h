//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollView.h>

@interface UIScrollView (SafariServicesExtras)
+ (_Bool)_sf_baseHorizontalScrollIndicatorInsetsExtendFullWidth:(struct UIEdgeInsets)arg1;	// IMP=0x00200000000db2ef
+ (_Bool)_sf_baseVerticalScrollIndicatorInsetsExtendFullHeight:(struct UIEdgeInsets)arg1;	// IMP=0x00200000000db2c3
+ (struct UIEdgeInsets)_sf_baseInsetsForHorizontalScrollIndicatorInScrollViewContainerView:(id)arg1;	// IMP=0x00200000000daea9
+ (struct UIEdgeInsets)_sf_baseInsetsForVerticalScrollIndicatorInScrollViewContainerView:(id)arg1;	// IMP=0x00200000000daa4b
- (void)_sf_setContentInsetAdjustments:(struct UIEdgeInsets)arg1;	// IMP=0x00100000000da8e7
@property(nonatomic, setter=_sf_setScrollIndicatorInsets:) struct SFScrollIndicatorInsets _sf_scrollIndicatorInsets;
@property(readonly, nonatomic) _Bool _sf_isScrolledPastTop;
@property(readonly, nonatomic) _Bool _sf_isScrolledToOrPastBottom;
@end

