//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIButton;

__attribute__((visibility("hidden")))
@interface _UIFloatingTabBarPageButton : UIView
{
    UIButton *_button;	// 8 = 0x8
    long long _direction;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000056f747
@property(readonly, nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
- (struct CGRect)_sourceRectForPresentationInWindow:(id)arg1;	// IMP=0x000000000056f6c9
- (struct CGRect)_frameInCoordinateSpace:(id)arg1 window:(id)arg2;	// IMP=0x000000000056f61f
- (id)_tintColorForButton;	// IMP=0x000000000056f52a
- (void)_updateButtonColor;	// IMP=0x000000000056f466
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000056f3cd
- (void)layoutSubviews;	// IMP=0x000000000056f2e4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000056f26e
- (void)_configureButton;	// IMP=0x000000000056eeef
- (id)_imageNameForCurrentDirection;	// IMP=0x000000000056eec7
@property(nonatomic) double contentOpacity;
- (id)initWithDirection:(long long)arg1;	// IMP=0x000000000056edb3

@end
