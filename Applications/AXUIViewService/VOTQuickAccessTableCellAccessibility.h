//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PSTableCell;

@interface VOTQuickAccessTableCellAccessibility : NSObject
{
    PSTableCell *_cell;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000015432
@property(nonatomic) __weak PSTableCell *cell; // @synthesize cell=_cell;
- (_Bool)_accessibilityShouldClearChildren;	// IMP=0x0010000000015403
- (void)accessibilityIncrement;	// IMP=0x0010000000015315
- (void)accessibilityDecrement;	// IMP=0x001000000001522a
- (unsigned long long)accessibilityTraits;	// IMP=0x001000000001521a
- (id)_settingsItem;	// IMP=0x0010000000015199
- (id)initWithWeakCell:(id)arg1;	// IMP=0x0010000000015131

@end

