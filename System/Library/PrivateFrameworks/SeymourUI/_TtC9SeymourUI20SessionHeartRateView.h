//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI20SessionHeartRateView : UIView
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *state;	// 0 = 0x0
    MISSING_TYPE *metricBuilder;	// 0 = 0x0
    MISSING_TYPE *heartView;	// 0 = 0x0
    MISSING_TYPE *label;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000045c650
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000045c5f0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000045c5d0
- (void)layoutSubviews;	// IMP=0x000000000045c5a0
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)accessibilityDidUpdateHeartRate:(_Bool)arg1 lastKnownHR:(id)arg2;	// IMP=0x000000000045ca20

@end
