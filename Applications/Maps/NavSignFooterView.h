//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIButton, UILayoutGuide;

@interface NavSignFooterView : UIView
{
    UIView *_leftGrabber;	// 8 = 0x8
    UIView *_rightGrabber;	// 16 = 0x10
    UILayoutGuide *_contentAreaGuide;	// 24 = 0x18
    _Bool _shouldShowEndButton;	// 32 = 0x20
    double _layoutProgress;	// 40 = 0x28
    double _bottomPadding;	// 48 = 0x30
    UIButton *_endButton;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000065dd37
@property(nonatomic) _Bool shouldShowEndButton; // @synthesize shouldShowEndButton=_shouldShowEndButton;
@property(readonly, nonatomic) UIButton *endButton; // @synthesize endButton=_endButton;
@property(nonatomic) double bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) double layoutProgress; // @synthesize layoutProgress=_layoutProgress;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000065db35
- (void)_updateEndButtonFont;	// IMP=0x001000000065da34
- (void)_updateGrabber;	// IMP=0x001000000065d91c
- (double)currentHeight;	// IMP=0x001000000065d84d
- (double)maximumHeight;	// IMP=0x001000000065d832
- (double)minimumHeight;	// IMP=0x001000000065d824
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000065cb09

@end

