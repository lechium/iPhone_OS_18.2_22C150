//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageView;

__attribute__((visibility("hidden")))
@interface PSUICellularDataPlanTableCell
{
    UIImageView *_iconView;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000075bfa
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (id)getLogger;	// IMP=0x0000000000075bb5
- (_Bool)_isDisabledPhysicalSIM:(id)arg1;	// IMP=0x0000000000075b5b
- (void)infoSymbolTapped:(id)arg1;	// IMP=0x00000000000759ea
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x00000000000759bb
- (id)planStatus;	// IMP=0x000000000007573c
- (id)planDescription;	// IMP=0x0000000000075734
- (id)detailText;	// IMP=0x00000000000756bf
- (id)primaryText;	// IMP=0x0000000000075643
- (_Bool)canBeChecked;	// IMP=0x000000000007563b
- (id)_cellularPlanItem;	// IMP=0x00000000000755eb
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000754be

@end
