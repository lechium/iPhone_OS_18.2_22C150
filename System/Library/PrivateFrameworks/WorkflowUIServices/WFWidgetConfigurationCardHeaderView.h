//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIButton, UILabel, UIStackView;
@protocol WFWidgetConfigurationCardHeaderViewDelegate;

__attribute__((visibility("hidden")))
@interface WFWidgetConfigurationCardHeaderView : UIView
{
    id <WFWidgetConfigurationCardHeaderViewDelegate> _delegate;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    NSLayoutConstraint *_bottomAreaHeightConstraint;	// 32 = 0x20
    UIStackView *_labelsStackView;	// 40 = 0x28
    UIView *_blendedBorderView;	// 48 = 0x30
    UIButton *_closeButton;	// 56 = 0x38
    double _widgetDescriptionTallScriptCompensatedSpacing;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000568c1
@property(nonatomic) double widgetDescriptionTallScriptCompensatedSpacing; // @synthesize widgetDescriptionTallScriptCompensatedSpacing=_widgetDescriptionTallScriptCompensatedSpacing;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UIView *blendedBorderView; // @synthesize blendedBorderView=_blendedBorderView;
@property(readonly, nonatomic) UIStackView *labelsStackView; // @synthesize labelsStackView=_labelsStackView;
@property(readonly, nonatomic) NSLayoutConstraint *bottomAreaHeightConstraint; // @synthesize bottomAreaHeightConstraint=_bottomAreaHeightConstraint;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WFWidgetConfigurationCardHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)close;	// IMP=0x00000000000567d0
- (void)updateIconBorderColor;	// IMP=0x0000000000056601
- (void)updateIconBorderWidth;	// IMP=0x00000000000564ee
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000562eb
- (id)initWithIcon:(id)arg1 closeButton:(id)arg2 title:(id)arg3 subtitle:(id)arg4;	// IMP=0x0000000000054d2b
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000054762

@end

