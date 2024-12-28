//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, SUUIColorScheme, SUUIQuicklinksView, UICollectionView;
@protocol SUUIQuicklinksViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIQuicklinksViewController : UIViewController
{
    UICollectionView *_collectionView;	// 8 = 0x8
    SUUIColorScheme *_colorScheme;	// 16 = 0x10
    id <SUUIQuicklinksViewControllerDelegate> _delegate;	// 24 = 0x18
    NSArray *_links;	// 32 = 0x20
    SUUIQuicklinksView *_quicklinksView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000036d3e6
@property(copy, nonatomic) NSArray *links; // @synthesize links=_links;
@property(nonatomic) __weak id <SUUIQuicklinksViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_numberOfRows;	// IMP=0x000000000036d328
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000036d213
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000036d040
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000036cf79
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000036ce01
- (void)setTitle:(id)arg1;	// IMP=0x000000000036cd8f
- (void)loadView;	// IMP=0x000000000036ca63
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000036c921
- (void)setColoringWithColorScheme:(id)arg1;	// IMP=0x000000000036c87b
@property(readonly, nonatomic) NSArray *indexPathsForVisibleItems;
- (struct CGRect)frameForLinkAtIndex:(long long)arg1;	// IMP=0x000000000036c784
- (void)dealloc;	// IMP=0x000000000036c71d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
