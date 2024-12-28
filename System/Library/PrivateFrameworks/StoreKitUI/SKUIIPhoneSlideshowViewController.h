//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, SKUIClientContext, SKUIGiftThemeCollectionView, UIPageControl;
@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIPhoneSlideshowViewController : UIViewController
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    SKUIGiftThemeCollectionView *_collectionView;	// 16 = 0x10
    id <SKUISlideshowViewControllerDataSource> _dataSource;	// 24 = 0x18
    id <SKUISlideshowViewControllerDelegate> _delegate;	// 32 = 0x20
    UIPageControl *_pageControl;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    NSOperationQueue *_placeholderQueue;	// 56 = 0x38
    NSMutableArray *_images;	// 64 = 0x40
    NSMutableDictionary *_placeholderImages;	// 72 = 0x48
    long long _indexToScrollToOnLoadView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000002c3c60
@property(nonatomic) __weak id <SKUISlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SKUISlideshowViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reloadSize;	// IMP=0x00000000002c3917
- (void)_reloadPageControl;	// IMP=0x00000000002c38a4
- (void)_setImage:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000000002c37d5
- (id)_placeholderImageAtIndex:(long long)arg1;	// IMP=0x00000000002c3392
- (id)_imageAtIndex:(long long)arg1;	// IMP=0x00000000002c32f6
- (void)_doneAction:(id)arg1;	// IMP=0x00000000002c3280
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000002c31a2
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000002c3185
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000002c3173
@property(nonatomic) long long currentIndex;
- (void)reloadData;	// IMP=0x00000000002c291b
- (void)viewDidLayoutSubviews;	// IMP=0x00000000002c281a
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000002c27e1
- (void)loadView;	// IMP=0x00000000002c1f05
- (void)dealloc;	// IMP=0x00000000002c1d79
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002c1bb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
