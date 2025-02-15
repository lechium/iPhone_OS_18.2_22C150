//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSString, PHCollection, PHPhotoLibrary, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSourceManagerConfiguration;
@protocol PXImportAlbumPickerDelegate, PXMemoryAssetsActionFactory;

__attribute__((visibility("hidden")))
@interface PUImportAddToLibraryAndAlbumsPickerViewController : UITableViewController
{
    PHCollection *_selectedCollection;	// 8 = 0x8
    PHCollection *_createdAlbum;	// 16 = 0x10
    _Bool _needsDatasourceUpdate;	// 24 = 0x18
    PXPhotoKitCollectionsDataSourceManagerConfiguration *_dataSourceManagerConfiguration;	// 32 = 0x20
    id <PXImportAlbumPickerDelegate> _delegate;	// 40 = 0x28
    PHPhotoLibrary *_photoLibrary;	// 48 = 0x30
    PXPhotoKitCollectionsDataSource *_dataSource;	// 56 = 0x38
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;	// 64 = 0x40
}

+ (unsigned long long)cellTypeForPosition:(id)arg1;	// IMP=0x0010000000205bcd
+ (id)dataSourceShiftedIndexPath:(id)arg1;	// IMP=0x0010000000205b75
+ (long long)dataSourceOffset;	// IMP=0x0010000000205b6a
- (void).cxx_destruct;	// IMP=0x00000000002058ad
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) __weak id <PXImportAlbumPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration; // @synthesize dataSourceManagerConfiguration=_dataSourceManagerConfiguration;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x0000000000205805
- (id)undoManagerForActionPerformer:(id)arg1;	// IMP=0x00000000002057f3
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000205578
- (void)configureDataSourceManagerConfiguration:(id)arg1;	// IMP=0x0000000000205572
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000204ef9
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000204a78
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000204a5c
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000020498e
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;	// IMP=0x000000000020497d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000002047fc
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000020470f
- (id)posterImageForCollection:(id)arg1 indexPath:(id)arg2 forCellType:(unsigned long long)arg3;	// IMP=0x0000000000204604
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002044db
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000204471
- (void)viewDidLoad;	// IMP=0x00000000002043b2
- (id)init;	// IMP=0x0000000000204338
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00000000002042a9
- (void)_dismissPicker;	// IMP=0x000000000020425e
- (void)_updateDatasource;	// IMP=0x0000000000204166
- (id)_userCreatredAlbumsPhotoKitConfiguration;	// IMP=0x000000000020401b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<PXMemoryAssetsActionFactory>",?,R,N

@property(readonly) Class superclass;

@end

