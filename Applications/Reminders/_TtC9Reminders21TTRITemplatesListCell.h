//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewListCell.h>

@class MISSING_TYPE, NSArray, NSString, UICellConfigurationState;

@interface _TtC9Reminders21TTRITemplatesListCell : UICollectionViewListCell
{
    MISSING_TYPE *viewModel;	// 0 = 0x0
    MISSING_TYPE *listContentView;	// 0 = 0x0
    MISSING_TYPE *badgeContainerView;	// 0 = 0x0
    MISSING_TYPE *badgeViewConstraints;	// 0 = 0x0
    MISSING_TYPE *separatorConstraint;	// 0 = 0x0
    MISSING_TYPE *infoButtonMenuProvider;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_infoButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_placeholderImageForBadge;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000391e30
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000391df0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000391cd0
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic, copy) NSArray *accessibilityElements;
@property(nonatomic) _Bool isAccessibilityElement;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;	// IMP=0x0010000000390f60
@property(nonatomic, readonly) UICellConfigurationState *_bridgedConfigurationState;

@end

