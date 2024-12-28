//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class AVCaptureVideoPreviewLayer, BCSActionCoordinator, BCSCoachingMessageView, BCSPreviewContainerView, BCSScanningAnimator, BCSSubjectIndicatorView, BCSTorchButtonView, NSLayoutConstraint, NSString, UIImageView, UITapGestureRecognizer, UIView;
@protocol BCSLiveViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface BCSLiveViewController : UIViewController
{
    AVCaptureVideoPreviewLayer *_previewLayer;	// 8 = 0x8
    BCSPreviewContainerView *_previewContainerView;	// 16 = 0x10
    BCSCoachingMessageView *_coachingMessageView;	// 24 = 0x18
    BCSSubjectIndicatorView *_focusIndicator;	// 32 = 0x20
    UIView *_focusIndicatorInsetView;	// 40 = 0x28
    BCSTorchButtonView *_torchButtonView;	// 48 = 0x30
    BCSScanningAnimator *_animator;	// 56 = 0x38
    UITapGestureRecognizer *_tapGestureRecognizer;	// 64 = 0x40
    UIImageView *_targetQRImage;	// 72 = 0x48
    NSLayoutConstraint *_coachingMessageTopAnchorConstraint;	// 80 = 0x50
    double _videoRotationAngle;	// 88 = 0x58
    id <BCSLiveViewControllerDelegate> _delegate;	// 96 = 0x60
    BCSActionCoordinator *_actionCoordinator;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000006d18
@property(readonly, nonatomic) BCSActionCoordinator *actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
@property(nonatomic) __weak id <BCSLiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sessionControlsWillExitFullscreenAppearance:(id)arg1;	// IMP=0x0000000000006cd4
- (void)sessionControlsWillEnterFullscreenAppearance:(id)arg1;	// IMP=0x0000000000006cce
- (void)sessionControlsDidBecomeInactive:(id)arg1;	// IMP=0x0000000000006c60
- (void)sessionControlsDidBecomeActive:(id)arg1;	// IMP=0x0000000000006bef
- (void)torchButtonView:(id)arg1 torchModeChangedTo:(_Bool)arg2;	// IMP=0x0000000000006ba0
- (void)actionCoordinator:(id)arg1 didFinishPerformingAction:(id)arg2;	// IMP=0x0000000000006b89
- (id)actionCoordinatorViewForContextMenu:(id)arg1;	// IMP=0x0000000000006b74
- (id)actionCoordinatorPresentingViewController:(id)arg1;	// IMP=0x0000000000006b62
- (void)actionCoordinator:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x0000000000006b4b
- (void)rotationAnimationDidFinish;	// IMP=0x0000000000006b2e
- (void)rotationAnimationWillStart;	// IMP=0x0000000000006b11
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000006b09
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000069f8
- (void)_layOutWithPreviewSize:(struct CGSize)arg1 angle:(double)arg2 isPortrait:(_Bool)arg3;	// IMP=0x0000000000006852
- (void)compensateForInterfaceOrientationInLiveView:(long long)arg1 referenceSize:(struct CGSize)arg2;	// IMP=0x0000000000006735
- (void)compensateForVideoRotationAngleInLiveView:(double)arg1;	// IMP=0x000000000000662c
- (void)_setTorchButtonPosition;	// IMP=0x0000000000006418
- (void)_applyTorchButtonRotationForDeviceOrientation;	// IMP=0x0000000000006355
- (void)torchActivenessChangedTo:(_Bool)arg1;	// IMP=0x0000000000006338
- (void)torchAvailabilityChangedTo:(_Bool)arg1;	// IMP=0x000000000000631b
- (void)cameraDeviceDidChange;	// IMP=0x00000000000062b5
- (struct CGPoint)_convertPointFromCaptureDeviceLocation:(struct CGPoint)arg1;	// IMP=0x00000000000061fc
- (struct CGPoint)_convertPointToCaptureDeviceLocation:(struct CGPoint)arg1;	// IMP=0x000000000000613c
- (struct CGPoint)_pointFromNormalizedPoint:(struct CGPoint)arg1;	// IMP=0x0000000000006098
- (id)_perspectiveCorrectedImage:(id)arg1 imageQuad:(id)arg2;	// IMP=0x0000000000005e5c
- (struct CGPoint)_convertLogicalPoint:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x0000000000005e40
- (struct CGPoint)_normalize:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;	// IMP=0x0000000000005e24
- (void)_continueToPopAnimationForDetectedCode:(id)arg1;	// IMP=0x00000000000053df
- (void)didCaptureVisualCode:(id)arg1 image:(id)arg2 shouldAnimate:(_Bool)arg3;	// IMP=0x0000000000004002
- (void)updateQRCodeAvailability:(long long)arg1;	// IMP=0x0000000000003f9a
- (void)_updateCoacheMessageWithString:(id)arg1;	// IMP=0x0000000000003f34
- (void)_liveViewTapped;	// IMP=0x0000000000003e5b
- (void)resetUIAndStartCapturing:(_Bool)arg1;	// IMP=0x0000000000003c65
- (void)viewDidLoad;	// IMP=0x00000000000030cb
- (id)initWithPreviewLayer:(id)arg1;	// IMP=0x0000000000003015

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
