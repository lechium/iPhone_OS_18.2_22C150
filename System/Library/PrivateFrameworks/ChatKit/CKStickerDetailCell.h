//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CKAnimatedImageView, NSArray, NSDate, NSLayoutConstraint, NSString, UIButton, UIDateLabel, UILabel, UIView;
@protocol CKStickerDetailCellDelegate;

__attribute__((visibility("hidden")))
@interface CKStickerDetailCell : UITableViewCell
{
    id _stickerPreview;	// 8 = 0x8
    NSString *_titleText;	// 16 = 0x10
    NSString *_subtitleText;	// 24 = 0x18
    NSDate *_timestampDate;	// 32 = 0x20
    unsigned long long _additionalActionType;	// 40 = 0x28
    id <CKStickerDetailCellDelegate> _delegate;	// 48 = 0x30
    CKAnimatedImageView *_stickerView;	// 56 = 0x38
    UIView *_labelContainerView;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    UILabel *_subtitleLabel;	// 80 = 0x50
    UIDateLabel *_timestampLabel;	// 88 = 0x58
    UIButton *_viewButton;	// 96 = 0x60
    UIButton *_saveButton;	// 104 = 0x68
    NSArray *_buttonsHiddenConstraints;	// 112 = 0x70
    NSArray *_saveButtonVisibleConstraints;	// 120 = 0x78
    NSArray *_viewButtonVisibleConstraints;	// 128 = 0x80
    NSLayoutConstraint *_subtitleLabelTopSpacingConstraint;	// 136 = 0x88
    NSLayoutConstraint *_timestampLabelTopSpacingConstraint;	// 144 = 0x90
}

+ (id)identifier;	// IMP=0x006000000007d086
- (void).cxx_destruct;	// IMP=0x000000000007f8fd
@property(retain, nonatomic) NSLayoutConstraint *timestampLabelTopSpacingConstraint; // @synthesize timestampLabelTopSpacingConstraint=_timestampLabelTopSpacingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelTopSpacingConstraint; // @synthesize subtitleLabelTopSpacingConstraint=_subtitleLabelTopSpacingConstraint;
@property(retain, nonatomic) NSArray *viewButtonVisibleConstraints; // @synthesize viewButtonVisibleConstraints=_viewButtonVisibleConstraints;
@property(retain, nonatomic) NSArray *saveButtonVisibleConstraints; // @synthesize saveButtonVisibleConstraints=_saveButtonVisibleConstraints;
@property(retain, nonatomic) NSArray *buttonsHiddenConstraints; // @synthesize buttonsHiddenConstraints=_buttonsHiddenConstraints;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UIButton *viewButton; // @synthesize viewButton=_viewButton;
@property(retain, nonatomic) UIDateLabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *labelContainerView; // @synthesize labelContainerView=_labelContainerView;
@property(retain, nonatomic) CKAnimatedImageView *stickerView; // @synthesize stickerView=_stickerView;
@property(nonatomic) __weak id <CKStickerDetailCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long additionalActionType; // @synthesize additionalActionType=_additionalActionType;
@property(retain, nonatomic) NSDate *timestampDate; // @synthesize timestampDate=_timestampDate;
@property(retain, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) id stickerPreview; // @synthesize stickerPreview=_stickerPreview;
- (void)_viewButtonSelected;	// IMP=0x000000000007f626
- (void)_saveButtonSelected;	// IMP=0x000000000007f58d
- (void)_configureConstraintsForCurrentAction;	// IMP=0x000000000007f38a
- (void)didMoveToWindow;	// IMP=0x000000000007efe7
- (void)layoutSubviews;	// IMP=0x000000000007ef1b
- (void)prepareForReuse;	// IMP=0x000000000007ee94
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000007d093

@end

