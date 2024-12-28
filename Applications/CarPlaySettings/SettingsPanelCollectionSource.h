//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSettingsCollectionPanel, NSArray, NSString;

@interface SettingsPanelCollectionSource : NSObject
{
    CARSettingsCollectionPanel *_panel;	// 8 = 0x8
    NSArray *_specifiers;	// 16 = 0x10
    NSArray *_sections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000028558
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
@property(nonatomic) __weak CARSettingsCollectionPanel *panel; // @synthesize panel=_panel;
- (id)accessibilityNumberFormatter;	// IMP=0x001000000002848d
- (id)_specifierAtIndexPath:(id)arg1;	// IMP=0x001000000002832b
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0010000000028223
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x001000000002800d
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000027f80
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000027f78
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000027eda
- (void)collectionView:(id)arg1 didUpdateContentSize:(struct CGSize)arg2;	// IMP=0x0010000000027e52
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000027c81
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000027ab0
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00100000000279b6
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0010000000027937
@property(nonatomic) _Bool needsScrollBar;
- (id)initWithPanel:(id)arg1 sections:(id)arg2;	// IMP=0x0010000000027816
- (id)initWithPanel:(id)arg1 specifiers:(id)arg2;	// IMP=0x0010000000027783

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
