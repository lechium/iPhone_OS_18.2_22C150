//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _HKBodyMarginsLayout : UIView
{
    UIView *_leftMarginView;	// 8 = 0x8
    UIView *_bodyView;	// 16 = 0x10
    UIView *_rightMarginView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f67af
@property(retain, nonatomic) UIView *rightMarginView; // @synthesize rightMarginView=_rightMarginView;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) UIView *leftMarginView; // @synthesize leftMarginView=_leftMarginView;
- (double)_totalViewWidth;	// IMP=0x00000000000f64a1
- (double)_maximumViewHeight;	// IMP=0x00000000000f6207
- (void)_invalidateLayout;	// IMP=0x00000000000f61d9
- (void)layoutSubviews;	// IMP=0x00000000000f5df0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000f5dde
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000f5d9c
- (id)init;	// IMP=0x00000000000f5a8e

@end
