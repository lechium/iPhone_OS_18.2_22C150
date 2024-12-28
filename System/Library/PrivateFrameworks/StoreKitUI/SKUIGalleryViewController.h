//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSMapTable, NSObject, NSString, SKUIGalleryPageComponent, SKUIMediaComponent, SKUIResourceLoader, UIPageControl, UIPageViewController, UITapGestureRecognizer;
@protocol OS_dispatch_source, SKUIEmbeddedMediaViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGalleryViewController : UIViewController
{
    SKUIResourceLoader *_artworkLoader;	// 8 = 0x8
    NSMapTable *_componentArtworkRequests;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_cycleTimer;	// 24 = 0x18
    id <SKUIEmbeddedMediaViewDelegate> _embeddedMediaDelegate;	// 32 = 0x20
    SKUIGalleryPageComponent *_galleryComponent;	// 40 = 0x28
    UIPageControl *_pageIndicator;	// 48 = 0x30
    UIPageViewController *_pageViewController;	// 56 = 0x38
    UITapGestureRecognizer *_tapGestureRecognizer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000339abb
@property(readonly, nonatomic) SKUIGalleryPageComponent *galleryComponent; // @synthesize galleryComponent=_galleryComponent;
@property(nonatomic) __weak id <SKUIEmbeddedMediaViewDelegate> embeddedMediaDelegate; // @synthesize embeddedMediaDelegate=_embeddedMediaDelegate;
- (void)_stopCycleTimer;	// IMP=0x0000000000339a57
- (void)_startCycleTimer;	// IMP=0x00000000003398d0
- (void)_showNextPaneAnimated:(_Bool)arg1;	// IMP=0x0000000000339673
- (id)_selectedViewController;	// IMP=0x00000000003395fc
- (id)_newViewWithMediaComponent:(id)arg1;	// IMP=0x0000000000339504
- (id)_newViewControllerWithIndex:(long long)arg1;	// IMP=0x000000000033932f
- (void)_finishPaneAnimation;	// IMP=0x00000000003392bf
- (void)_tapAction:(id)arg1;	// IMP=0x000000000033927e
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000033926c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000033925a
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;	// IMP=0x00000000003391f6
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x00000000003391bb
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x0000000000339180
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x0000000000339051
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000033900b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000338fc5
- (void)loadView;	// IMP=0x000000000033895a
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000003387f5
@property(readonly, nonatomic) SKUIMediaComponent *selectedMediaComponent;
- (void)performActionForSelectedComponentAnimated:(_Bool)arg1;	// IMP=0x000000000033872f
- (void)loadArtworkForChildComponent:(id)arg1 reason:(long long)arg2 constraintWidth:(double)arg3;	// IMP=0x000000000033850c
- (void)dealloc;	// IMP=0x0000000000338476
- (id)initWithGalleryComponent:(id)arg1 artworkLoader:(id)arg2;	// IMP=0x000000000033834d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
