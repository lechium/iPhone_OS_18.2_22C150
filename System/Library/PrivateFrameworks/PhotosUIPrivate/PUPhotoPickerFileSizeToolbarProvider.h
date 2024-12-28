//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSSet, NSString, PUPhotoPickerResizeTaskDescriptor, UIBarButtonItem, UILabel, UITableViewController;
@protocol PUPhotoPickerFileSizeToolbarProviderDelegate, PUPhotosGridViewSupplementalToolbarDataSource;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerFileSizeToolbarProvider : NSObject
{
    id <PUPhotosGridViewSupplementalToolbarDataSource> _dataSource;	// 8 = 0x8
    UIBarButtonItem *_sizePickerItem;	// 16 = 0x10
    UILabel *_sizePickerDescriptionLabel;	// 24 = 0x18
    UITableViewController *_sizePickerViewController;	// 32 = 0x20
    _Bool _preparingToPresentSizePickerViewController;	// 40 = 0x28
    NSArray *_toolbarItems;	// 48 = 0x30
    NSArray *_resizeTaskDescriptors;	// 56 = 0x38
    NSSet *_cachedAssetSet;	// 64 = 0x40
    PUPhotoPickerResizeTaskDescriptor *_selectedTaskDescriptor;	// 72 = 0x48
    NSMutableDictionary *_taskDescriptorsToCachedLabels;	// 80 = 0x50
    id <PUPhotoPickerFileSizeToolbarProviderDelegate> _delegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000004c0947
@property(nonatomic) __weak id <PUPhotoPickerFileSizeToolbarProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_computeSelectedIndexPath;	// IMP=0x00000000004c088d
- (void)_updateTableViewSelection;	// IMP=0x00000000004c074e
- (void)_updateSizePickerItemIfNeeded;	// IMP=0x00000000004c0694
- (id)_localizedLabelForResizeTaskDescriptor:(id)arg1;	// IMP=0x00000000004c0531
- (void)_presentSizePicker:(id)arg1;	// IMP=0x00000000004c037d
- (id)_orderedResizeTaskDescriptorsForCurrentlySelectedAssets;	// IMP=0x00000000004bff8d
- (id)_orderedResizeTaskDescriptors;	// IMP=0x00000000004bfe58
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000004bfd0c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000004bfbe6
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000004bfba2
- (id)_sizePickerItem;	// IMP=0x00000000004bf8c4
@property(readonly, copy, nonatomic) NSArray *toolbarItems;
@property(readonly, nonatomic) _Bool shouldShowToolbar;
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000004bf366

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
