//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, _UIRemoteViewController;

__attribute__((visibility("hidden")))
@interface _TtC7ChatKit30AppCardContainerViewController : UIViewController
{
    MISSING_TYPE *remoteViewController;	// 8 = 0x8
    MISSING_TYPE *popoverPresentationLocation;	// 16 = 0x10
    MISSING_TYPE *presentationDelegate;	// 56 = 0x38
    MISSING_TYPE *sendDelegate;	// 72 = 0x48
    MISSING_TYPE *touchTrackingGesture;	// 80 = 0x50
    MISSING_TYPE *didSendInitialPresentationStyleChangeNotification;	// 88 = 0x58
    MISSING_TYPE *initialPresentationStyle;	// 96 = 0x60
    MISSING_TYPE *shouldOverrideExceptionsOnDismissal;	// 104 = 0x68
    MISSING_TYPE *cachedCompactDetentHeight;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000007d8f50
- (void)closeButtonPressed;	// IMP=0x00000000007d9b50
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000007d9550
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x00000000007d9470
- (void)viewDidLayoutSubviews;	// IMP=0x00000000007d9440
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000007d9320
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000007d9220
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000007d9130
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007d9000
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000007d8fb0
- (void)dealloc;	// IMP=0x00000000007d8ec0
- (void)checkForTouchInRemoteProcessIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000007d8370
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000000007d82a0
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewDidLoad;	// IMP=0x00000000007d81c0
- (void)loadView;	// IMP=0x00000000007d7b50
- (void)setShowingDarkEffect:(_Bool)arg1 isInDarkMode:(_Bool)arg2;	// IMP=0x00000000007da1c0
@property(nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

@end

