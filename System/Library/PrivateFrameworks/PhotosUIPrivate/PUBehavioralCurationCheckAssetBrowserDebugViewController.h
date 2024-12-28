//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUPhotosAlbumViewController.h"

@class NSPredicate, NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface PUBehavioralCurationCheckAssetBrowserDebugViewController : PUPhotosAlbumViewController
{
    NSPredicate *_predicate;	// 8 = 0x8
    NSString *_selectionName;	// 16 = 0x10
    _Bool _sortAscending;	// 24 = 0x18
    UIPickerView *_scorePickerView;	// 32 = 0x20
    UIPickerView *_sortPickerView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000590623
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000059055c
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;	// IMP=0x000000000059054e
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x0000000000590496
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0000000000590430
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x0000000000590425
- (double)semanticScoreFromBehavioralScore:(double)arg1;	// IMP=0x000000000059040a
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000059008c
- (id)phScoreKeyPathsForSelectionName:(id)arg1;	// IMP=0x0000000000590007
- (id)sortDescriptorForSelectionName:(id)arg1;	// IMP=0x000000000058ff45
- (id)predicateForSelectionName:(id)arg1;	// IMP=0x000000000058fe02
- (id)_goldAssetUUIDs;	// IMP=0x000000000058fcdb
- (id)selectionNames;	// IMP=0x000000000058fc5e
- (void)_doneEditingSettings:(id)arg1;	// IMP=0x000000000058fc45
- (void)_editSettings:(id)arg1;	// IMP=0x000000000058f46f
- (void)_update;	// IMP=0x000000000058f19b
- (id)newToolbarItems;	// IMP=0x000000000058f0bc
- (_Bool)shouldShowToolbar;	// IMP=0x000000000058f0b4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000058f073
- (void)viewDidLoad;	// IMP=0x000000000058ef24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
