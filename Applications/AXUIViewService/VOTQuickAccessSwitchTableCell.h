//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSwitchTableCell.h>

@class MISSING_TYPE, VOTQuickAccessTableCellAccessibility;

@interface VOTQuickAccessSwitchTableCell : PSSwitchTableCell
{
    VOTQuickAccessTableCellAccessibility *_cellAccessibility;	// 136 = 0x88
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x0020000000015905
@property(retain, nonatomic) VOTQuickAccessTableCellAccessibility *cellAccessibility; // @synthesize cellAccessibility=_cellAccessibility;
- (id)accessibilityCustomActions;	// IMP=0x00100000000158a1
- (_Bool)_accessibilityShouldClearChildren;	// IMP=0x001000000001585d
- (void)accessibilityIncrement;	// IMP=0x0010000000015820
- (void)accessibilityDecrement;	// IMP=0x00100000000157e3
- (unsigned long long)accessibilityTraits;	// IMP=0x0010000000015756

@end

