//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class SKUIOnboardingProgressView, UIButton;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingFooterView : UIView
{
    UIButton *_leftButton;	// 8 = 0x8
    SKUIOnboardingProgressView *_progressView;	// 16 = 0x10
    UIButton *_rightButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003a3fc5
@property(retain, nonatomic) SKUIOnboardingProgressView *progressView; // @synthesize progressView=_progressView;
- (void)_showButton:(id)arg1 withTitle:(id)arg2 animation:(long long)arg3;	// IMP=0x00000000003a3c12
- (id)_newButton;	// IMP=0x00000000003a3bc9
- (void)_hideButton:(id)arg1 withAnimation:(long long)arg2;	// IMP=0x00000000003a388d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003a371e
- (void)layoutSubviews;	// IMP=0x00000000003a33b5
- (void)showRightButtonWithTitle:(id)arg1 animation:(long long)arg2;	// IMP=0x00000000003a32fd
- (void)showLeftButtonWithTitle:(id)arg1 animation:(long long)arg2;	// IMP=0x00000000003a3245
@property(readonly, nonatomic) UIButton *rightButton;
@property(readonly, nonatomic) UIButton *leftButton;
- (void)hideRightButtonWithAnimation:(long long)arg1;	// IMP=0x00000000003a2fc0
- (void)hideLeftButtonWithAnimation:(long long)arg1;	// IMP=0x00000000003a2f4d

@end

