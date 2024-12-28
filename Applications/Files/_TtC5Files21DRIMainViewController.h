//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOCConfiguration, MISSING_TYPE;

@interface _TtC5Files21DRIMainViewController
{
    MISSING_TYPE *currentQuickLookPreviewController;	// 8 = 0x8
    MISSING_TYPE *currentQuickLookPreviewItemObserver;	// 16 = 0x10
    MISSING_TYPE *currentLocationTitleObserver;	// 24 = 0x18
    MISSING_TYPE *currentQuickLookURL;	// 0 = 0x0
    MISSING_TYPE *quicklookStateRestorationActivityIdentifier;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_internalConfiguration;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000305250
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000003051e0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003051b0
- (id)initForOpeningContentTypes:(id)arg1;	// IMP=0x0010000000305090
- (id)initForOpeningFilesWithContentTypes:(id)arg1;	// IMP=0x0010000000304f40
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;	// IMP=0x0010000000304d70
- (id)excludedActivityTypesForPreviewController:(id)arg1;	// IMP=0x0010000000304cf0
- (void)previewController:(id)arg1 willSaveEditedItem:(id)arg2;	// IMP=0x0010000000304c60
- (_Bool)previewController:(id)arg1 shouldAllowKeyCommandWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000304c40
- (_Bool)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1;	// IMP=0x0010000000304c10
- (id)dismissActionsForPreviewController:(id)arg1;	// IMP=0x0010000000304bb0
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;	// IMP=0x0010000000304b40
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;	// IMP=0x0010000000304ac0
- (void)previewControllerDidDismiss:(id)arg1;	// IMP=0x0010000000304a70
- (void)documentBrowser:(id)arg1 didPickImportedURLs:(id)arg2;	// IMP=0x00100000003041a0
- (void)documentBrowser:(id)arg1 didPickDocumentsAtURLs:(id)arg2;	// IMP=0x0010000000303d20
- (void)viewDidLoad;	// IMP=0x00100000002feb60
@property(nonatomic, retain) DOCConfiguration *configuration;

@end
