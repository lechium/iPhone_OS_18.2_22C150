//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class MISSING_TYPE;

@interface _TtC9SeymourUI22BrowsingViewController : UINavigationController
{
    MISSING_TYPE *dynamicOfferCoordinator;	// 8 = 0x8
    MISSING_TYPE *eventHub;	// 16 = 0x10
    MISSING_TYPE *purchaseCoordinator;	// 32 = 0x20
    MISSING_TYPE *webUserInterfaceCoordinator;	// 40 = 0x28
    MISSING_TYPE *bag;	// 48 = 0x30
    MISSING_TYPE *dependencies;	// 56 = 0x38
    MISSING_TYPE *navigationRouter;	// 64 = 0x40
    MISSING_TYPE *pictureInPicturePresenter;	// 72 = 0x48
    MISSING_TYPE *purchaseHandler;	// 80 = 0x50
    MISSING_TYPE *rootViewController;	// 88 = 0x58
    MISSING_TYPE *siriUserActivityHandler;	// 96 = 0x60
    MISSING_TYPE *_analyticsConsentShowingEnabled;	// 0 = 0x0
    MISSING_TYPE *_forceAnalayticsConsentAcknowledgement;	// 0 = 0x0
    MISSING_TYPE *subscriptionToken;	// 0 = 0x0
    MISSING_TYPE *browsingBeganEventState;	// 0 = 0x0
    MISSING_TYPE *palette;	// 0 = 0x0
    MISSING_TYPE *paletteViewController;	// 0 = 0x0
    MISSING_TYPE *planCompletionTracker;	// 0 = 0x0
    MISSING_TYPE *presentingAnalyticsConsent;	// 0 = 0x0
    MISSING_TYPE *_welcomeAcknowledgementShowingEnabled;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000009d62f0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000009d6290
- (id)initWithRootViewController:(id)arg1;	// IMP=0x00000000009d61c0
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;	// IMP=0x00000000009d6120
- (void)scrollToTop;	// IMP=0x00000000009d6060
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000009d5560
@property(nonatomic, readonly) long long preferredStatusBarStyle;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000009d54b0
- (void)viewDidLoad;	// IMP=0x00000000009d50b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009d5090

@end

