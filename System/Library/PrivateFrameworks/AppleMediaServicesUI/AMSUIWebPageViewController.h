//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonViewController.h"

@class AMSUIWebAppOverlayViewController, AMSUIWebAppearance, AMSUIWebClientContext, AMSUIWebPageModel, AMSUIWebView, NSString, NSURL;
@protocol AMSUIWebPageViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIWebPageViewController : AMSUICommonViewController
{
    id <AMSUIWebPageViewControllerDelegate> _delegate;	// 8 = 0x8
    AMSUIWebView *_webView;	// 16 = 0x10
    NSURL *_URL;	// 24 = 0x18
    AMSUIWebAppearance *_appearance;	// 32 = 0x20
    AMSUIWebClientContext *_context;	// 40 = 0x28
    AMSUIWebAppOverlayViewController *_appOverlayViewController;	// 48 = 0x30
    AMSUIWebPageModel *_model;	// 56 = 0x38
    struct CGSize _contentSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000cee3b
@property(retain, nonatomic) AMSUIWebPageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AMSUIWebAppOverlayViewController *appOverlayViewController; // @synthesize appOverlayViewController=_appOverlayViewController;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) AMSUIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <AMSUIWebPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_willEncodeRequest:(id)arg1;	// IMP=0x00000000000cec47
- (void)_updateLayout;	// IMP=0x00000000000ceb9f
- (void)_updateToolbarButtonItems;	// IMP=0x00000000000ce8bb
- (void)_downloadHTMLForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cda8e
- (void)_didEncodeRequest:(id)arg1;	// IMP=0x00000000000cd9e4
- (id)_appOverlayTransitioning;	// IMP=0x00000000000cd9b6
- (void)_applyAppearance;	// IMP=0x00000000000cd810
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;	// IMP=0x00000000000cd5d6
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000000cd5c4
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00000000000cd5b2
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00000000000cd523
- (id)contentScrollViewForEdge:(unsigned long long)arg1;	// IMP=0x00000000000cd4a9
- (id)presentAppOverlayWithAdamID:(id)arg1;	// IMP=0x00000000000cd248
- (id)dismissAppOverlay;	// IMP=0x00000000000cd16e
- (id)loadRequest:(id)arg1;	// IMP=0x00000000000ccdf3
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000ccdb2
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000ccd71
- (void)loadView;	// IMP=0x00000000000ccca8
- (id)initWithContext:(id)arg1 dataProvider:(id)arg2;	// IMP=0x00000000000ccbee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

