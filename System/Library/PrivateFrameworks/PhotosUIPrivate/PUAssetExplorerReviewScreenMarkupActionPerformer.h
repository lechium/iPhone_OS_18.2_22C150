//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol PUPhotoMarkupViewControllerObserver, PUReviewAssetProvider;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenMarkupActionPerformer
{
    id <PUReviewAssetProvider> _reviewAssetProvider;	// 8 = 0x8
    id <PUPhotoMarkupViewControllerObserver> _markupObserver;	// 16 = 0x10
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x006000000020882b
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;	// IMP=0x006000000020880b
- (void).cxx_destruct;	// IMP=0x0000000000208b63
@property(nonatomic) __weak id <PUPhotoMarkupViewControllerObserver> markupObserver; // @synthesize markupObserver=_markupObserver;
@property(retain, nonatomic) id <PUReviewAssetProvider> reviewAssetProvider; // @synthesize reviewAssetProvider=_reviewAssetProvider;
- (void)_presentMarkupViewControllerForReviewAsset:(id)arg1;	// IMP=0x0000000000208a26
- (void)performUserInteractionTask;	// IMP=0x00000000002088dc

@end
