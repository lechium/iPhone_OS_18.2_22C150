//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSMutableDictionary, NSOperationQueue, NSString, SKUIClientContext, UIPageViewController;
@protocol SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUISlideshowViewController : UIViewController
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    UIPageViewController *_pageViewController;	// 16 = 0x10
    NSOperationQueue *_remoteLoadQueue;	// 24 = 0x18
    NSMutableDictionary *_itemViewControllersCache;	// 32 = 0x20
    _Bool _overlayVisible;	// 40 = 0x28
    _Bool _shouldCancelDelayedOverlayVisibilityChange;	// 41 = 0x29
    _Bool _overlayVisibilityWillChangeWithDelay;	// 42 = 0x2a
    _Bool _lockOverlayControlsVisible;	// 43 = 0x2b
    struct {
        long long style;
        _Bool hidden;
    } _savedStatusBarState;	// 48 = 0x30
    id <SKUISlideshowViewControllerDataSource> _dataSource;	// 64 = 0x40
    id <SKUISlideshowViewControllerDelegate> _delegate;	// 72 = 0x48
    long long _currentIndex;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000024a9f0
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <SKUISlideshowViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SKUISlideshowViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_restoreStatusBarAppearanceState;	// IMP=0x000000000024a8c4
- (void)_saveStatusBarAppearanceState;	// IMP=0x000000000024a858
- (void)_setOverlayVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000024a6a5
- (void)_fadeOutOverlayAfterDelay:(unsigned long long)arg1;	// IMP=0x000000000024a56c
- (void)_toggleFadeOverlay;	// IMP=0x000000000024a50e
- (void)_doneButtonTapped:(id)arg1;	// IMP=0x000000000024a498
- (void)_contentViewTapped:(id)arg1;	// IMP=0x000000000024a330
- (void)_updateTitleWithIndex:(long long)arg1;	// IMP=0x000000000024a100
- (void)_updateCurrentIndex;	// IMP=0x000000000024a0e3
- (id)_itemViewControllerForIndex:(long long)arg1;	// IMP=0x0000000000249cd3
- (void)slideshowItemViewControllerDidDismissWithPinchGesture:(id)arg1 ratio:(double)arg2;	// IMP=0x0000000000249c37
- (void)slideshowItemViewControllerDidBeginPinchGesture:(id)arg1;	// IMP=0x0000000000249c1e
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;	// IMP=0x0000000000249bef
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;	// IMP=0x0000000000249b53
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x0000000000249b1e
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x0000000000249ae9
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000249a51
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000002499bc
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000002499b1
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000024994c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000249900
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000002498bf
- (void)viewDidLoad;	// IMP=0x0000000000249873
- (void)loadView;	// IMP=0x0000000000249612
- (id)currentItemViewController;	// IMP=0x0000000000249566
- (void)reloadData;	// IMP=0x0000000000249549
- (id)animatorForDismissedController:(id)arg1;	// IMP=0x000000000024916b
- (id)animatorForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000002490a4
- (void)dealloc;	// IMP=0x000000000024903d
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000248e2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
