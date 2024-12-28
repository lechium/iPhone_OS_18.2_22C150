//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewTableCell.h>

@class NSArray, NSLayoutConstraint, NSMutableArray, UIImageView, UILabel, UILongPressGestureRecognizer, UIProgressView, UIView, _UIDocumentPickerContainerItem, _UIDocumentPickerDocumentCollectionViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerCell : UICollectionViewTableCell
{
    _Bool _transitioningLayout;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UILabel *_subtitle2Label;	// 32 = 0x20
    UILabel *_subtitleJoiner;	// 40 = 0x28
    UIImageView *_tagView;	// 48 = 0x30
    UIImageView *_thumbnailView;	// 56 = 0x38
    UIProgressView *_progressView;	// 64 = 0x40
    long long _cellStyle;	// 72 = 0x48
    NSArray *_actions;	// 80 = 0x50
    _UIDocumentPickerDocumentCollectionViewController *_collectionView;	// 88 = 0x58
    _UIDocumentPickerContainerItem *_item;	// 96 = 0x60
    NSLayoutConstraint *_thumbnailCenterWidthConstraint;	// 104 = 0x68
    NSLayoutConstraint *_thumbnailCenterHeightConstraint;	// 112 = 0x70
    NSArray *_gridConstraints;	// 120 = 0x78
    NSArray *_tableConstraints;	// 128 = 0x80
    NSArray *_indentedConstraints;	// 136 = 0x88
    NSArray *_activeConstraints;	// 144 = 0x90
    UIView *_indentationHelperView;	// 152 = 0x98
    NSLayoutConstraint *_indentationConstraint;	// 160 = 0xa0
    UIImageView *_selectionView;	// 168 = 0xa8
    UIView *_selectionViewsThumbnailView;	// 176 = 0xb0
    NSMutableArray *_selectionViewConstraints;	// 184 = 0xb8
    UILongPressGestureRecognizer *_pickableDiagnosticGestureRecognizer;	// 192 = 0xc0
    UILongPressGestureRecognizer *_actionGestureRecognizer;	// 200 = 0xc8
    NSArray *_availableActions;	// 208 = 0xd0
    UIView *_cachedSelectedBackgroundView;	// 216 = 0xd8
}

+ (struct CGSize)thumbnailSizeForTraits:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x00600000000023bc
+ (id)_subtitleFontForTable:(_Bool)arg1;	// IMP=0x0060000000002330
+ (id)_titleFontForTable:(_Bool)arg1;	// IMP=0x00600000000022a4
+ (struct CGSize)defaultSizeForCellStyle:(long long)arg1 traitCollection:(id)arg2;	// IMP=0x0060000000002080
- (void).cxx_destruct;	// IMP=0x0000000000008ac9
@property(retain, nonatomic) UIView *cachedSelectedBackgroundView; // @synthesize cachedSelectedBackgroundView=_cachedSelectedBackgroundView;
@property(retain, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property(retain, nonatomic) UILongPressGestureRecognizer *actionGestureRecognizer; // @synthesize actionGestureRecognizer=_actionGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *pickableDiagnosticGestureRecognizer; // @synthesize pickableDiagnosticGestureRecognizer=_pickableDiagnosticGestureRecognizer;
@property(retain, nonatomic) NSMutableArray *selectionViewConstraints; // @synthesize selectionViewConstraints=_selectionViewConstraints;
@property(retain, nonatomic) UIView *selectionViewsThumbnailView; // @synthesize selectionViewsThumbnailView=_selectionViewsThumbnailView;
@property(retain, nonatomic) UIImageView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) NSLayoutConstraint *indentationConstraint; // @synthesize indentationConstraint=_indentationConstraint;
@property(retain, nonatomic) UIView *indentationHelperView; // @synthesize indentationHelperView=_indentationHelperView;
@property(nonatomic, getter=isTransitioningLayout) _Bool transitioningLayout; // @synthesize transitioningLayout=_transitioningLayout;
@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) NSArray *indentedConstraints; // @synthesize indentedConstraints=_indentedConstraints;
@property(retain, nonatomic) NSArray *tableConstraints; // @synthesize tableConstraints=_tableConstraints;
@property(retain, nonatomic) NSArray *gridConstraints; // @synthesize gridConstraints=_gridConstraints;
@property(retain, nonatomic) NSLayoutConstraint *thumbnailCenterHeightConstraint; // @synthesize thumbnailCenterHeightConstraint=_thumbnailCenterHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *thumbnailCenterWidthConstraint; // @synthesize thumbnailCenterWidthConstraint=_thumbnailCenterWidthConstraint;
@property(retain, nonatomic) _UIDocumentPickerContainerItem *item; // @synthesize item=_item;
@property(nonatomic) __weak _UIDocumentPickerDocumentCollectionViewController *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *subtitleJoiner; // @synthesize subtitleJoiner=_subtitleJoiner;
@property(retain, nonatomic) UILabel *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_showPickableDiagnostic;	// IMP=0x0000000000008715
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000000870d
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000000861a
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x000000000000860a
- (void)_showActions:(id)arg1;	// IMP=0x0000000000008498
- (void)updateActionGestureRecognizer;	// IMP=0x00000000000082cf
- (void)_moveAction:(id)arg1;	// IMP=0x0000000000008206
- (void)_activityAction:(id)arg1;	// IMP=0x000000000000813d
- (void)_renameAction:(id)arg1;	// IMP=0x0000000000008074
- (void)_moreAction:(id)arg1;	// IMP=0x0000000000007fab
- (void)_infoAction:(id)arg1;	// IMP=0x0000000000007ee2
- (void)_deleteAction:(id)arg1;	// IMP=0x0000000000007e1c
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000078aa
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000000784a
- (void)_udpateLabelAlpha;	// IMP=0x00000000000075b0
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000007359
- (void)updateForEditingState:(_Bool)arg1;	// IMP=0x0000000000007267
- (void)_updateConstraintsForCellStyle;	// IMP=0x00000000000044b0
- (void)setEditing:(_Bool)arg1;	// IMP=0x000000000000444d
- (void)_updateSeparatorInset;	// IMP=0x00000000000043d1
- (void)_updateAccessoryType;	// IMP=0x0000000000004241
- (void)_updateFonts;	// IMP=0x00000000000040b9
- (void)_updateSelectionState:(_Bool)arg1;	// IMP=0x00000000000034b7
- (void)_updateIconSize;	// IMP=0x00000000000033d6
- (void)reloadItem:(_Bool)arg1;	// IMP=0x00000000000033d0
- (void)dealloc;	// IMP=0x0000000000003387
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;	// IMP=0x0000000000003344
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;	// IMP=0x00000000000032b6
- (void)prepareForReuse;	// IMP=0x000000000000311c
- (void)_dynamicTypeSizeChanged:(id)arg1;	// IMP=0x0000000000002fe5
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000002fa4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000246f

@end
