//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HUItemCollectionViewController.h"

@class HUTriggerActionFlow, MISSING_TYPE;
@protocol HUTriggerEditorDelegate;

@interface HUTriggerActionPickerViewController : HUItemCollectionViewController
{
    MISSING_TYPE *actionSetModule;	// 8 = 0x8
    MISSING_TYPE *accessoryModule;	// 16 = 0x10
    MISSING_TYPE *selectionController;	// 24 = 0x18
    MISSING_TYPE *triggerBuilder;	// 32 = 0x20
    MISSING_TYPE *flow;	// 40 = 0x28
    MISSING_TYPE *delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000074cb0
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;	// IMP=0x0000000000074c50
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;	// IMP=0x0000000000074ba0
- (id)listContentConfigurationForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000000074970
- (void)itemManagerDidUpdate:(id)arg1;	// IMP=0x00000000000748f0
- (void)nextWithSender:(id)arg1;	// IMP=0x0000000000074650
- (void)cancelWithSender:(id)arg1;	// IMP=0x00000000000740d0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000073ae0
- (id)buildItemModuleControllerForModule:(id)arg1;	// IMP=0x0000000000073a80
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000000735d0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000073370
- (void)viewDidLoad;	// IMP=0x0000000000073340
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000072e20
- (id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;	// IMP=0x0000000000072120
@property(nonatomic, readonly) id <HUTriggerEditorDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) HUTriggerActionFlow *flow; // @synthesize flow;
@property(nonatomic, readonly) id triggerBuilder; // @synthesize triggerBuilder;
- (void)homeWorkflowEditorViewController:(id)arg1 didFinishWithHomeWorkflow:(id)arg2 includesSecureAccessory:(_Bool)arg3;	// IMP=0x00000000000d3cc0

@end

