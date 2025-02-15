//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SSSCropControllerRootView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIScrollView, UIView;
@protocol SSSCropControllerDelegate, SSSScreenshotContainerView;

@interface SSSCropController : NSObject
{
    struct CGRect _cropRect;	// 8 = 0x8
    struct CGRect _saveCropRect;	// 40 = 0x28
    struct CGRect _lastNotifiedCropRect;	// 72 = 0x48
    SSSCropControllerRootView *_rootView;	// 104 = 0x68
    id <SSSCropControllerDelegate> _delegate;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000043020
@property(nonatomic) __weak id <SSSCropControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
- (struct CGRect)cropOverlayViewRectInWindow;	// IMP=0x0010000000042faa
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)cropControllerRootView:(id)arg1 changedToCropRect:(struct CGRect)arg2;	// IMP=0x0010000000042f0e
- (void)cropControllerRootViewWillBeginChangingCropRect:(id)arg1;	// IMP=0x0010000000042ec2
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) NSArray *snapRects;
@property(nonatomic) _Bool cropEnabled;
@property(nonatomic) long long numberOfTouchesRequiredForPanningCrop;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
- (_Bool)isCropped;	// IMP=0x0010000000042d8a
- (void)cancelCrop;	// IMP=0x0010000000042d2d
- (void)doneCrop;	// IMP=0x0010000000042cfc
- (void)resetCrop;	// IMP=0x0010000000042c7b
- (void)enterCrop;	// IMP=0x0010000000042c65
- (void)prepareForFullscreenExperience:(_Bool)arg1;	// IMP=0x0010000000042c4f
- (void)setPageCropRect:(struct CGRect)arg1;	// IMP=0x0010000000042c39
- (void)commitInflightEdits;	// IMP=0x0010000000042c23
- (void)_setCropRect:(struct CGRect)arg1 notify:(_Bool)arg2;	// IMP=0x0010000000042b55
@property(nonatomic) double lineGrabberAlpha;
@property(nonatomic) double lineAlpha;
@property(nonatomic) double cornerGrabberAlpha;
@property(nonatomic) long long editMode;
@property(retain, nonatomic) UIView<SSSScreenshotContainerView> *viewToCrop;
@property(readonly, nonatomic) UIView *cropView;
- (id)init;	// IMP=0x0010000000042960

@end

