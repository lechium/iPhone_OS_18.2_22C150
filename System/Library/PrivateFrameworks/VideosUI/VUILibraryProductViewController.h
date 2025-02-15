//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VUIDownloadButton, VUILibraryProductInfoView, VUIMediaItem, VUIProductLockupView, VUIViewControllerContentPresenter;

__attribute__((visibility("hidden")))
@interface VUILibraryProductViewController
{
    VUIMediaItem *_mediaItem;	// 8 = 0x8
    VUIProductLockupView *_productLockupView;	// 16 = 0x10
    VUILibraryProductInfoView *_productInfoView;	// 24 = 0x18
    VUIDownloadButton *_downloadButton;	// 32 = 0x20
    VUIViewControllerContentPresenter *_contentPresenter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000139d6f
@property(retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property(retain, nonatomic) VUIDownloadButton *downloadButton; // @synthesize downloadButton=_downloadButton;
- (void)reportMetricsPageEvent;	// IMP=0x0000000000139d16
- (void)_updateAfterContentWasManuallyDeleted:(_Bool)arg1;	// IMP=0x0000000000139cc3
- (id)_productSectionForHeader:(id)arg1 data:(id)arg2 group:(id)arg3 maxItemCount:(unsigned long long)arg4;	// IMP=0x0000000000139ad6
- (id)_productInfoViewWithMediaItem:(id)arg1;	// IMP=0x0000000000139502
- (id)_productLockupViewWithMediaItem:(id)arg1;	// IMP=0x000000000013946d
- (void)didSelectButton:(id)arg1;	// IMP=0x0000000000139099
- (void)contentDescriptionExpanded;	// IMP=0x000000000013902f
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0000000000138e51
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000138db5
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000138d0e
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000138d03
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000138cf8
- (void)start;	// IMP=0x00000000001388c7
- (void)configureWithCollectionView:(id)arg1;	// IMP=0x000000000013885c
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000138793
- (void)loadView;	// IMP=0x0000000000138722
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001386e1
- (void)viewDidLoad;	// IMP=0x0000000000138625
- (id)initWithMediaItem:(id)arg1;	// IMP=0x00000000001383aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

