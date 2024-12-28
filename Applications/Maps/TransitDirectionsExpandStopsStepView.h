//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsLargerHitTargetButton, NSLayoutConstraint, NSString, TransitDirectionsColoredLine, TransitDirectionsListItem, UIColor;
@protocol TransitDirectionsExpandableCellDelegate, TransitDirectionsListExpandableItem;

@interface TransitDirectionsExpandStopsStepView
{
    TransitDirectionsColoredLine *_line;	// 40 = 0x28
    _Bool _checkedItemIsExpandable;	// 48 = 0x30
    TransitDirectionsListItem<TransitDirectionsListExpandableItem> *_expandableItem;	// 56 = 0x38
    NSLayoutConstraint *_lineWidthConstraint;	// 64 = 0x40
    NSLayoutConstraint *_lineHeightConstraint;	// 72 = 0x48
    id <TransitDirectionsExpandableCellDelegate> _expandableCellDelegate;	// 80 = 0x50
    MapsLargerHitTargetButton *_detailButton;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000cbfaaa
@property(readonly, nonatomic) MapsLargerHitTargetButton *detailButton; // @synthesize detailButton=_detailButton;
@property(nonatomic) __weak id <TransitDirectionsExpandableCellDelegate> expandableCellDelegate; // @synthesize expandableCellDelegate=_expandableCellDelegate;
- (void)_updateNavigationStateAlpha:(double)arg1;	// IMP=0x0010000000cbf9d7
- (void)_updateExpandButton;	// IMP=0x0010000000cbf785
- (void)updateExpandCollapseStyling;	// IMP=0x0010000000cbf757
- (void)_updateLinkStyles;	// IMP=0x0010000000cbf661
- (void)_updateLinkColors;	// IMP=0x0010000000cbf5f3
@property(readonly, nonatomic) __weak TransitDirectionsListItem<TransitDirectionsListExpandableItem> *expandableItem;
@property(retain, nonatomic) UIColor *lineColor;
- (void)configureWithItem:(id)arg1;	// IMP=0x0010000000cbf3f4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000cbf273
- (void)_contentSizeCategoryDidChange;	// IMP=0x0010000000cbf232
- (void)_updateFonts;	// IMP=0x0010000000cbf19a
- (void)_detailButtonTapped:(id)arg1;	// IMP=0x0010000000cbf129
- (double)_minimumLinkHeight;	// IMP=0x0010000000cbf100
- (id)_imageViewPositionConstraints;	// IMP=0x0010000000cbefa3
- (id)_initialConstraints;	// IMP=0x0010000000cbe9c8
- (void)_createSubviews;	// IMP=0x0010000000cbe640

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
