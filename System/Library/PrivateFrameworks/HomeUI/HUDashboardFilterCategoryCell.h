//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class HFItem, HUGridCellLayoutOptions, MISSING_TYPE, UICellConfigurationState;
@protocol HUBackgroundEffectViewGrouping;

@interface HUDashboardFilterCategoryCell : UICollectionViewListCell
{
    MISSING_TYPE *layoutOptions;	// 8 = 0x8
    MISSING_TYPE *areCellContentsHidden;	// 16 = 0x10
    MISSING_TYPE *item;	// 24 = 0x18
    MISSING_TYPE *backgroundDisplayStyle;	// 32 = 0x20
    MISSING_TYPE *backgroundEffectGrouper;	// 40 = 0x28
    MISSING_TYPE *isRearranging;	// 48 = 0x30
}

+ (Class)layoutOptionsClass;	// IMP=0x0010000000045b60
- (void).cxx_destruct;	// IMP=0x0000000000045b00
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000045aa0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000045910
@property(nonatomic) _Bool rearranging; // @synthesize rearranging=isRearranging;
- (_Bool)isRearranging;	// IMP=0x0000000000045420
@property(nonatomic, retain) id <HUBackgroundEffectViewGrouping> backgroundEffectGrouper; // @synthesize backgroundEffectGrouper;
@property(nonatomic) unsigned long long backgroundDisplayStyle; // @synthesize backgroundDisplayStyle;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;	// IMP=0x00000000000442f0
@property(nonatomic, retain) HFItem *item; // @synthesize item;
@property(nonatomic) _Bool cellContentsHidden; // @synthesize cellContentsHidden=areCellContentsHidden;
- (_Bool)areCellContentsHidden;	// IMP=0x0000000000043f60
@property(nonatomic, retain) HUGridCellLayoutOptions *layoutOptions; // @synthesize layoutOptions;
@property(nonatomic, readonly) UICellConfigurationState *_bridgedConfigurationState;
- (void)prepareForReuse;	// IMP=0x0000000000043c20
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x0000000000045ba0

@end
