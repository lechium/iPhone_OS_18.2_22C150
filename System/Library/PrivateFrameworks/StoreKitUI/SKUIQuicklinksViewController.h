//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, SKUIColorScheme, SKUIQuicklinksView, UICollectionView;
@protocol SKUIQuicklinksViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIQuicklinksViewController : UIViewController
{
    UICollectionView *_collectionView;	// 8 = 0x8
    SKUIColorScheme *_colorScheme;	// 16 = 0x10
    id <SKUIQuicklinksViewControllerDelegate> _delegate;	// 24 = 0x18
    NSArray *_links;	// 32 = 0x20
    SKUIQuicklinksView *_quicklinksView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003a4d1a
@property(copy, nonatomic) NSArray *links; // @synthesize links=_links;
@property(nonatomic) __weak id <SKUIQuicklinksViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_numberOfRows;	// IMP=0x00000000003a4c5c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000003a4b47
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000003a4974
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000003a48ad
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000003a4735
- (void)setTitle:(id)arg1;	// IMP=0x00000000003a46c3
- (void)loadView;	// IMP=0x00000000003a434d
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000003a420b
- (void)setColoringWithColorScheme:(id)arg1;	// IMP=0x00000000003a4165
@property(readonly, nonatomic) NSArray *indexPathsForVisibleItems;
- (struct CGRect)frameForLinkAtIndex:(long long)arg1;	// IMP=0x00000000003a406e
- (void)dealloc;	// IMP=0x00000000003a4007

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
