//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HUItemCollectionViewController.h"

@class MISSING_TYPE;

@interface HUShortcutsAccessoryPickerViewController : HUItemCollectionViewController
{
    MISSING_TYPE *configuration;	// 8 = 0x8
    MISSING_TYPE *home;	// 48 = 0x30
    MISSING_TYPE *selectionController;	// 56 = 0x38
    MISSING_TYPE *moduleContext;	// 72 = 0x48
    MISSING_TYPE *module;	// 80 = 0x50
    MISSING_TYPE *moduleController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000001253c0
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;	// IMP=0x0000000000125360
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;	// IMP=0x00000000001252b0
- (void)setServices:(id)arg1;	// IMP=0x0000000000125180
- (id)getServices;	// IMP=0x0000000000125090
- (void)configureWithDefaultSelectionController;	// IMP=0x0000000000124fc0
- (id)buildItemModuleControllerForModule:(id)arg1;	// IMP=0x0000000000124be0
- (id)initWithHome:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000124110

@end

