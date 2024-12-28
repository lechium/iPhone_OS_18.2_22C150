//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class NSIndexPath, NSLayoutConstraint, NSString, UIButton, UILabel;
@protocol UIDebuggingInformationHierarchyCellDelegate;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationHierarchyCell : UICollectionViewCell
{
    UIButton *_disclosureButton;	// 8 = 0x8
    UILabel *_mainLabel;	// 16 = 0x10
    UIButton *_infoButton;	// 24 = 0x18
    NSIndexPath *_indexPath;	// 32 = 0x20
    _Bool _collapsedBeneath;	// 40 = 0x28
    NSLayoutConstraint *_disclosureButtonAvailableConstraint;	// 48 = 0x30
    NSLayoutConstraint *_disclosureButtonUnavailableConstraint;	// 56 = 0x38
    _Bool _disclosureIndicatorHidden;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    id <UIDebuggingInformationHierarchyCellDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000001845308
@property(nonatomic) _Bool disclosureIndicatorHidden; // @synthesize disclosureIndicatorHidden=_disclosureIndicatorHidden;
@property(nonatomic) __weak id <UIDebuggingInformationHierarchyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)prepareForReuse;	// IMP=0x0000000001845237
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000018451ab
@property(readonly, nonatomic) NSIndexPath *indexPath;
@property(readonly, nonatomic) UIButton *infoButton;
- (void)displayDetailsForCell;	// IMP=0x00000000018450e1
- (void)deliverToggle;	// IMP=0x000000000184506a
- (void)layoutSubviews;	// IMP=0x00000000018442f3

@end
