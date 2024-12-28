//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, UIPageViewController;
@protocol VideosExtrasImageBrowserViewControllerDataSource, VideosExtrasImageBrowserViewControllerDelegate, VideosExtrasZoomingImageInteractiveTransitionSource;

__attribute__((visibility("hidden")))
@interface VideosExtrasImageBrowserViewController : UIViewController
{
    _Bool _allowsPinchingImageForInteractiveZoomingImageTransition;	// 8 = 0x8
    id <VideosExtrasImageBrowserViewControllerDataSource> _dataSource;	// 16 = 0x10
    id <VideosExtrasImageBrowserViewControllerDelegate> _delegate;	// 24 = 0x18
    id <VideosExtrasZoomingImageInteractiveTransitionSource> _zoomingImageInteractiveTransitionSource;	// 32 = 0x20
    unsigned long long _visibleImageIndex;	// 40 = 0x28
    UIPageViewController *_pageViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000aa98e
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) unsigned long long visibleImageIndex; // @synthesize visibleImageIndex=_visibleImageIndex;
@property(nonatomic) _Bool allowsPinchingImageForInteractiveZoomingImageTransition; // @synthesize allowsPinchingImageForInteractiveZoomingImageTransition=_allowsPinchingImageForInteractiveZoomingImageTransition;
@property(nonatomic) __weak id <VideosExtrasZoomingImageInteractiveTransitionSource> zoomingImageInteractiveTransitionSource; // @synthesize zoomingImageInteractiveTransitionSource=_zoomingImageInteractiveTransitionSource;
@property(nonatomic) __weak id <VideosExtrasImageBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VideosExtrasImageBrowserViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_visibleImageViewController;	// IMP=0x00000000000aa85b
- (void)_updateTitle;	// IMP=0x00000000000aa776
- (void)_updatePageViewController;	// IMP=0x00000000000aa529
- (void)_removePageViewController;	// IMP=0x00000000000aa45a
- (unsigned long long)_numberOfImages;	// IMP=0x00000000000aa407
- (id)_imageViewControllerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000aa100
- (void)_addPageViewForController:(id)arg1 toView:(id)arg2;	// IMP=0x00000000000aa02b
- (void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1;	// IMP=0x00000000000a9eb0
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(_Bool)arg2;	// IMP=0x00000000000a9e0b
- (void)performZoomingImageTransitionWithContext:(id)arg1;	// IMP=0x00000000000a9da2
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;	// IMP=0x00000000000a9ce3
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;	// IMP=0x00000000000a9bb5
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;	// IMP=0x00000000000a9afb
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x00000000000a9a91
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x00000000000a9a43
- (void)viewDidLoad;	// IMP=0x00000000000a996e
- (void)dealloc;	// IMP=0x00000000000a9930
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000a98cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
