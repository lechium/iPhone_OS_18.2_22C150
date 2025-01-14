//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSMutableArray, NSOperationQueue, NSString, SKUIClientContext, SKUIScreenshotDataConsumer, SKUIVideoImageDataConsumer, UICollectionView;
@protocol SKUIScreenshotsDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScreenshotsViewController : UIViewController
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    SKUIScreenshotDataConsumer *_dataConsumer;	// 24 = 0x18
    id <SKUIScreenshotsDelegate> _delegate;	// 32 = 0x20
    NSOperationQueue *_operationQueue;	// 40 = 0x28
    NSArray *_screenshots;	// 48 = 0x30
    NSMutableArray *_screenshotImages;	// 56 = 0x38
    NSMutableArray *_screenshotRawImages;	// 64 = 0x40
    struct CGSize _screenshotMaxSize;	// 72 = 0x48
    SKUIVideoImageDataConsumer *_trailerConsumer;	// 88 = 0x58
    NSArray *_trailers;	// 96 = 0x60
    NSMutableArray *_trailerImages;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000230714
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <SKUIScreenshotsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_setTrailerImage:(id)arg1 forIndex:(long long)arg2;	// IMP=0x00000000002305e2
- (void)_setImage:(id)arg1 forIndex:(long long)arg2;	// IMP=0x00000000002304c6
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x00000000002304be
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000023041a
- (id)slideshowViewController:(id)arg1 poppedImageViewAtIndex:(long long)arg2;	// IMP=0x00000000002300b9
- (void)slideshowViewController:(id)arg1 scrollToImageAtIndex:(long long)arg2;	// IMP=0x0000000000230009
- (id)slideshowViewController:(id)arg1 dataConsumerAtIndex:(long long)arg2;	// IMP=0x000000000022ff34
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2;	// IMP=0x000000000022fecc
- (id)slideshowViewController:(id)arg1 placeholderImageAtIndex:(long long)arg2;	// IMP=0x000000000022fdfa
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;	// IMP=0x000000000022fddd
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000022fc62
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000022fbf8
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x000000000022fbed
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000022faf0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000022f80e
- (void)loadView;	// IMP=0x000000000022f582
- (void)reloadData;	// IMP=0x000000000022eb80
- (id)initWithTrailers:(id)arg1 screenshots:(id)arg2 clientContext:(id)arg3;	// IMP=0x000000000022e4cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

