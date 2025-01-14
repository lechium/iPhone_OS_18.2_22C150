//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, SKUIClientContext, UICollectionView, _UIContentUnavailableView;
@protocol SKUIDownloadsChildViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIIPadDownloadsViewController : UIViewController
{
    UICollectionView *_collectionView;	// 8 = 0x8
    NSArray *_downloads;	// 16 = 0x10
    _UIContentUnavailableView *_noContentView;	// 24 = 0x18
    id <SKUIDownloadsChildViewControllerDelegate> _delegate;	// 32 = 0x20
    _Bool _editing;	// 40 = 0x28
    SKUIClientContext *_clientContext;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001868a5
@property(retain, nonatomic) NSArray *downloads; // @synthesize downloads=_downloads;
@property(nonatomic) __weak id <SKUIDownloadsChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reloadNavigationItem;	// IMP=0x00000000001863be
- (void)_reloadLayout;	// IMP=0x000000000018629f
- (void)_reload;	// IMP=0x0000000000186030
- (void)_deleteAction:(id)arg1;	// IMP=0x0000000000185dd5
- (void)_cancelAction:(id)arg1;	// IMP=0x0000000000185db8
- (void)_editAction:(id)arg1;	// IMP=0x0000000000185d9b
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000185cd5
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000185c0f
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000185bad
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000185b42
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000000185970
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000185932
- (void)loadView;	// IMP=0x0000000000185704
- (void)reloadDownloadsAtIndexes:(id)arg1;	// IMP=0x0000000000185494

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

