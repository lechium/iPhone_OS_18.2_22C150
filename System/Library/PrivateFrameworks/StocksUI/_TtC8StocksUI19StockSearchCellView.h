//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _TtC8StocksUI19StockSearchCellView : UIView
{
    MISSING_TYPE *symbolLabel;	// 8 = 0x8
    MISSING_TYPE *nameLabel;	// 16 = 0x10
    MISSING_TYPE *exchangeLabel;	// 24 = 0x18
    MISSING_TYPE *priceLabel;	// 32 = 0x20
    MISSING_TYPE *priceChangeLabel;	// 40 = 0x28
    MISSING_TYPE *watchlistSelectionButton;	// 48 = 0x30
    MISSING_TYPE *isSelectable;	// 56 = 0x38
    MISSING_TYPE *isSelected;	// 57 = 0x39
    MISSING_TYPE *isHighlightable;	// 58 = 0x3a
    MISSING_TYPE *isHighlighted;	// 59 = 0x3b
}

- (void).cxx_destruct;	// IMP=0x000000000025f1c0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025f170
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000025f140
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
@property(nonatomic, copy) NSString *accessibilityHint;
- (_Bool)accessibilityActivate;	// IMP=0x000000000025f710
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;

@end

