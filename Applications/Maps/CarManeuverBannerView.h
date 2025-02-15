//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class BNBannerSource, BannerItem, CPUIBannerViewButton, GuidanceManeuverView, MKServerFormattedString, NSLayoutConstraint, NSString, NavSignShieldInfo, UIImageView, UILabel, UIStackView;
@protocol SBUISystemApertureAccessoryView;

@interface CarManeuverBannerView : UIView
{
    GuidanceManeuverView *_maneuverView;	// 8 = 0x8
    UIStackView *_labelStackView;	// 16 = 0x10
    UILabel *_primaryLabel;	// 24 = 0x18
    UILabel *_secondaryLabel;	// 32 = 0x20
    UIImageView *_shieldImageView;	// 40 = 0x28
    CPUIBannerViewButton *_actionButton;	// 48 = 0x30
    NavSignShieldInfo *_cachedShieldInfo;	// 56 = 0x38
    MKServerFormattedString *_selectedPrimaryString;	// 64 = 0x40
    MKServerFormattedString *_selectedSecondaryString;	// 72 = 0x48
    NSLayoutConstraint *_labelsToShieldConstraint;	// 80 = 0x50
    NSLayoutConstraint *_labelsToButtonConstraint;	// 88 = 0x58
    NSLayoutConstraint *_shieldWidthConstraint;	// 96 = 0x60
    _Bool _aperturePresentation;	// 104 = 0x68
    BNBannerSource *_target;	// 112 = 0x70
    BannerItem *_item;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0020000000c627b8
@property(readonly, nonatomic) _Bool aperturePresentation; // @synthesize aperturePresentation=_aperturePresentation;
@property(readonly, nonatomic) BannerItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) __weak BNBannerSource *target; // @synthesize target=_target;
- (id)accessibilityLabel;	// IMP=0x0010000000c62628
- (_Bool)isAccessibilityElement;	// IMP=0x0010000000c62620
@property(readonly, nonatomic) unsigned long long bannerType;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000c6260a
- (void)updateFromBannerItem;	// IMP=0x0010000000c61957
- (id)maneuverItem;	// IMP=0x0010000000c61945
- (id)initWithTarget:(id)arg1 item:(id)arg2 aperturePresentation:(_Bool)arg3;	// IMP=0x0010000000c60be7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<SBUISystemApertureAccessoryView>",?,R,N

@property(nonatomic) _Bool expanded;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<SBUISystemApertureAccessoryView>",?,R,N

@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<SBUISystemApertureAccessoryView>",?,R,N

@property(nonatomic) _Bool showsControls;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView<SBUISystemApertureAccessoryView>",?,R,N


@end

