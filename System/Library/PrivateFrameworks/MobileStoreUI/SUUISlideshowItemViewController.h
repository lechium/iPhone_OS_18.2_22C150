//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

#import <MobileStoreUI/UIScrollViewDelegate-Protocol.h>

@class NSString, SUUIClientContext, SUUISlideshowImageScrollView, UIImage, UIView;
@protocol SUUISlideshowItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SUUISlideshowItemViewController : UIViewController <UIScrollViewDelegate>
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    UIView *_loadingView;	// 16 = 0x10
    _Bool _zoomingGestureThresholdBroken;	// 24 = 0x18
    struct CGPoint _lastContentOffset;	// 32 = 0x20
    double _lastZoomScale;	// 48 = 0x30
    id <SUUISlideshowItemViewControllerDelegate> _delegate;	// 56 = 0x38
    SUUISlideshowImageScrollView *_imageScrollView;	// 64 = 0x40
    long long _indexInCollection;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000012698a
@property(nonatomic) long long indexInCollection; // @synthesize indexInCollection=_indexInCollection;
@property(readonly, nonatomic) SUUISlideshowImageScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(nonatomic) __weak id <SUUISlideshowItemViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_pinchGestureAction:(id)arg1;	// IMP=0x00000000001267aa
- (id)_newLoadingView;	// IMP=0x000000000012637a
- (_Bool)_gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;	// IMP=0x0000000000126372
- (_Bool)_gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;	// IMP=0x000000000012636a
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x000000000012634d
@property(retain, nonatomic) UIImage *itemImage;
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000012625f
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000126216
- (void)viewDidLoad;	// IMP=0x0000000000126055
- (void)dealloc;	// IMP=0x000000000012600a
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000125efa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
