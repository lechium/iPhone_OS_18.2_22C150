//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MUHoursSummaryViewModel, NSLayoutConstraint, UIImageView, UILayoutGuide, UITapGestureRecognizer;
@protocol MULabelViewProtocol;

__attribute__((visibility("hidden")))
@interface MUHoursSummaryView : UIView
{
    UILayoutGuide *_summaryStackLayoutGuide;	// 8 = 0x8
    UIImageView *_expansionIndicator;	// 16 = 0x10
    _Bool _expanded;	// 24 = 0x18
    UIView<MULabelViewProtocol> *_titleLabel;	// 32 = 0x20
    UIView<MULabelViewProtocol> *_hoursLabel;	// 40 = 0x28
    UIView<MULabelViewProtocol> *_openStateLabel;	// 48 = 0x30
    UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
    NSLayoutConstraint *_titleToOpenStateConstraint;	// 64 = 0x40
    NSLayoutConstraint *_titleToHoursConstraint;	// 72 = 0x48
    NSLayoutConstraint *_hoursToOpenStateConstraint;	// 80 = 0x50
    MUHoursSummaryViewModel *_viewModel;	// 88 = 0x58
    CDUnknownBlockType _actionHandler;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000016d0bd
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) MUHoursSummaryViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)_contentSizeDidChange;	// IMP=0x000000000016d078
- (void)_updateAppearance;	// IMP=0x000000000016cecf
- (void)_handleServiceHoursAnimation;	// IMP=0x000000000016cdf4
- (void)_handleNormalHoursAnimation;	// IMP=0x000000000016cd5d
- (void)handleAnimation;	// IMP=0x000000000016cd14
- (void)_handleAnimationStartForNormalHours;	// IMP=0x000000000016cce7
- (void)handleAnimationStart;	// IMP=0x000000000016cca5
- (void)_updateExpandButton;	// IMP=0x000000000016cb95
- (void)expandButtonTapped;	// IMP=0x000000000016cb08
- (void)_updateForPlatterAvailability;	// IMP=0x000000000016cb02
- (void)_setupConstraints;	// IMP=0x000000000016c07c
- (void)_setupSubviews;	// IMP=0x000000000016badf
- (id)initWithViewModel:(id)arg1;	// IMP=0x000000000016ba0c

@end

