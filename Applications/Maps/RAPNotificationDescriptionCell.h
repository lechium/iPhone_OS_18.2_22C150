//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RAPNotificationDescriptionViewModel, UIButton, UIImageView, UILabel, UILayoutGuide, UIStackView, UIView;
@protocol RAPNotificationDescriptionCellDelegate;

@interface RAPNotificationDescriptionCell
{
    UIStackView *_descriptionTitleContainer;	// 8 = 0x8
    UIStackView *_containerView;	// 16 = 0x10
    id <RAPNotificationDescriptionCellDelegate> _delegate;	// 24 = 0x18
    RAPNotificationDescriptionViewModel *_viewModel;	// 32 = 0x20
    UILayoutGuide *_cellLayoutGuide;	// 40 = 0x28
    UIImageView *_statusIcon;	// 48 = 0x30
    UIView *_statusIconBackground;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    UILabel *_descriptionLabel;	// 72 = 0x48
    UIButton *_linkButton;	// 80 = 0x50
}

+ (id)identifier;	// IMP=0x00400000004bb8e9
- (void).cxx_destruct;	// IMP=0x00200000004bd0c5
@property(retain, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *statusIconBackground; // @synthesize statusIconBackground=_statusIconBackground;
@property(retain, nonatomic) UIImageView *statusIcon; // @synthesize statusIcon=_statusIcon;
@property(retain, nonatomic) UILayoutGuide *cellLayoutGuide; // @synthesize cellLayoutGuide=_cellLayoutGuide;
@property(retain, nonatomic) RAPNotificationDescriptionViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <RAPNotificationDescriptionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_linkButtonClick;	// IMP=0x00100000004bcb72
- (void)_setupLinkButtonIfNeeded;	// IMP=0x00100000004bc902
- (void)_setupConstraints;	// IMP=0x00100000004bc18f
- (void)_setupViews;	// IMP=0x00100000004bb96d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000004bb8fb

@end

