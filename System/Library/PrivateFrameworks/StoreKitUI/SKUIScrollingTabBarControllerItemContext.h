//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SKUIViewControllerContainerCollectionViewCell, UIScrollView, UIViewController;
@protocol SKUIScrollingTabBarControllerItemContextDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingTabBarControllerItemContext : NSObject
{
    _Bool _adjustingNestedPagingScrollViewContentOffset;	// 8 = 0x8
    struct UIEdgeInsets _appliedContentInsetsAdjustment;	// 16 = 0x10
    CDStruct_17994511 _desiredContentInsetAdjustmentDescriptor;	// 48 = 0x30
    UIScrollView *_insetAdjustedContentScrollView;	// 88 = 0x58
    double _lastSeenContentWidth;	// 96 = 0x60
    CDStruct_19149c72 _lastSentAppearanceStatus;	// 104 = 0x68
    UIScrollView *_observedNestedPagingScrollView;	// 120 = 0x78
    unsigned long long _originalAutoresizingMask;	// 128 = 0x80
    _Bool _readyForDisplay;	// 136 = 0x88
    BOOL _viewControllerIsNavigationController;	// 137 = 0x89
    SKUIViewControllerContainerCollectionViewCell *_collectionViewCell;	// 144 = 0x90
    id <SKUIScrollingTabBarControllerItemContextDelegate> _delegate;	// 152 = 0x98
    unsigned long long _lastSelectedPageIndex;	// 160 = 0xa0
    UIViewController *_viewController;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000003a18f1
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) unsigned long long lastSelectedPageIndex; // @synthesize lastSelectedPageIndex=_lastSelectedPageIndex;
@property(nonatomic) __weak id <SKUIScrollingTabBarControllerItemContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIViewControllerContainerCollectionViewCell *collectionViewCell; // @synthesize collectionViewCell=_collectionViewCell;
- (void)_updateAppliedContentInsetsAdjustment;	// IMP=0x00000000003a1690
- (void)_prepareViewControllerForTearDown;	// IMP=0x00000000003a152b
- (void)_prepareViewControllerForDisplayWithViewFrame:(struct CGRect)arg1 updateContentOffset:(_Bool)arg2 contentOffset:(struct CGPoint)arg3;	// IMP=0x00000000003a12b0
- (void)_notifyDelegateOfUpdatedContentWidthInObservedNestedPagingScrollView;	// IMP=0x00000000003a1229
- (id)_nestedPagedScrollingConformingViewControllerForcingViewLoading:(_Bool)arg1;	// IMP=0x00000000003a10a8
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 withOldContentInset:(struct UIEdgeInsets)arg2 toContentScrollView:(id)arg3;	// IMP=0x00000000003a0e9a
- (id)_appearanceStatusObserver;	// IMP=0x00000000003a0d9c
- (id)viewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;	// IMP=0x00000000003a0d3b
- (void)updateNestedPagingScrollViewContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000003a0c80
- (void)updateForPossibleNestedPagingScrollViewChange;	// IMP=0x00000000003a0b95
- (void)prepareViewControllerForTearDown;	// IMP=0x00000000003a0b83
- (void)prepareViewControllerForDisplayWithSize:(struct CGSize)arg1;	// IMP=0x00000000003a0b2d
- (void)notifyOfUpdatedAppearanceStatus:(CDStruct_19149c72)arg1;	// IMP=0x00000000003a0a8e
- (void)applyNewContentInsetDescriptor:(CDStruct_17994511)arg1;	// IMP=0x00000000003a0a1a
@property(readonly, nonatomic) _Bool viewControllerIsNavigationController;
@property(readonly, nonatomic) double nestedPagingScrollViewContentWidth;
@property(readonly, nonatomic) UIScrollView *nestedPagingScrollView;
- (void)observedNavigationStackDidChange:(id)arg1;	// IMP=0x00000000003a08b5
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000003a07bb
- (void)dealloc;	// IMP=0x00000000003a077d
- (id)initWithViewController:(id)arg1;	// IMP=0x00000000003a06b1
- (id)init;	// IMP=0x00000000003a069d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
