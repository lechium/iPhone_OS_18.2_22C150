//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSUICommonViewController.h"

@class AMSBinaryPromise, AMSUIMessageLoadingViewController, AMSUIWebAppearance, AMSUIWebClientContext, AMSUIWebLoadingPageModel, AMSUIWebSnapshotView, NSString, NSUUID, UIView, UIViewController;
@protocol AMSUIWebPagePresenter;

__attribute__((visibility("hidden")))
@interface AMSUIWebPlaceholderViewController : AMSUICommonViewController
{
    _Bool _animateFadeIn;	// 8 = 0x8
    _Bool _hasAppeared;	// 9 = 0x9
    _Bool _isVisible;	// 10 = 0xa
    _Bool _shouldSnapshot;	// 11 = 0xb
    AMSUIWebAppearance *_appearance;	// 16 = 0x10
    AMSUIWebLoadingPageModel *_model;	// 24 = 0x18
    UIViewController<AMSUIWebPagePresenter> *_originalViewController;	// 32 = 0x20
    AMSUIWebClientContext *_context;	// 40 = 0x28
    AMSUIMessageLoadingViewController *_loadingController;	// 48 = 0x30
    NSUUID *_snapshotID;	// 56 = 0x38
    AMSBinaryPromise *_snapshotPromise;	// 64 = 0x40
    AMSUIWebSnapshotView *_snapshotView;	// 72 = 0x48
    UIView *_visibleView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000d0fff
@property(retain, nonatomic) UIView *visibleView; // @synthesize visibleView=_visibleView;
@property(retain, nonatomic) AMSUIWebSnapshotView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) AMSBinaryPromise *snapshotPromise; // @synthesize snapshotPromise=_snapshotPromise;
@property(retain, nonatomic) NSUUID *snapshotID; // @synthesize snapshotID=_snapshotID;
@property(nonatomic) _Bool shouldSnapshot; // @synthesize shouldSnapshot=_shouldSnapshot;
@property(retain, nonatomic) AMSUIMessageLoadingViewController *loadingController; // @synthesize loadingController=_loadingController;
@property(nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UIViewController<AMSUIWebPagePresenter> *originalViewController; // @synthesize originalViewController=_originalViewController;
@property(retain, nonatomic) AMSUIWebLoadingPageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AMSUIWebAppearance *appearance; // @synthesize appearance=_appearance;
@property(nonatomic) _Bool animateFadeIn; // @synthesize animateFadeIn=_animateFadeIn;
- (void)_transitionToSnapshot;	// IMP=0x00000000000d0db1
- (void)_transitionToLoadingAnimated:(_Bool)arg1;	// IMP=0x00000000000d0d62
- (void)_animateTransition;	// IMP=0x00000000000d0c77
- (void)_replacePrimaryViewWithViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d0b60
- (void)_replacePrimaryViewWithView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d095d
- (void)_startReappearTransitionTimerAnimated:(_Bool)arg1;	// IMP=0x00000000000d0751
- (void)_applyAppearance;	// IMP=0x00000000000d05ff
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;	// IMP=0x00000000000d03e0
- (id)removeSnapshot;	// IMP=0x00000000000d0390
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000d02c7
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000d0267
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000d005e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000cfdd2
- (void)willAppearAfterDismiss;	// IMP=0x00000000000cfdbe
- (void)loadView;	// IMP=0x00000000000cfb9d
- (void)dealloc;	// IMP=0x00000000000cfb28
- (void)awaitSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cfa61
- (id)initWithSnapshot:(id)arg1 context:(id)arg2 appearance:(id)arg3;	// IMP=0x00000000000cf841
- (id)initWithModel:(id)arg1 context:(id)arg2 appearance:(id)arg3;	// IMP=0x00000000000cf7aa
- (id)initWithContext:(id)arg1;	// IMP=0x00000000000cf70b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
