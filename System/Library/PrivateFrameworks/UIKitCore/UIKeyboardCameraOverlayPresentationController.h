//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, UIKeyboardCameraGrabberView, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIKeyboardCameraOverlayPresentationController
{
    NSLayoutConstraint *_topLayoutConstraint;	// 8 = 0x8
    UIPanGestureRecognizer *_panGestureRecognizer;	// 16 = 0x10
    UIKeyboardCameraGrabberView *_grabberView;	// 24 = 0x18
    double _keyboardCameraNormalHeight;	// 32 = 0x20
    double _keyboardCameraFullScreenHeight;	// 40 = 0x28
    double _keyboardCameraHeight;	// 48 = 0x30
    double _panningStartingHeight;	// 56 = 0x38
    _Bool _isLandscape;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000086ff0d
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000086fb4d
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x000000000086f9f9
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000086f9bb
- (void)dismissalTransitionWillBegin;	// IMP=0x000000000086f97a
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x000000000086f91c
- (void)presentationTransitionWillBegin;	// IMP=0x000000000086f876
- (void)_installGrabber;	// IMP=0x000000000086f428
- (void)_handlePan:(id)arg1;	// IMP=0x000000000086f0e5
- (void)_determinePortraitHeights;	// IMP=0x000000000086eddf
- (_Bool)updatesGuideDuringRotation;	// IMP=0x000000000086edca

@end
