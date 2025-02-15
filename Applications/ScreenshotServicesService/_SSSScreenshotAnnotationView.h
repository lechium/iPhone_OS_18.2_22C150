//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, SSSScreenshot, _SSSScreenshotContentOverlayController;

@interface _SSSScreenshotAnnotationView : UIView
{
    _Bool _overlayControllerActive;	// 8 = 0x8
    _Bool _screenshotEditsSnapshotted;	// 9 = 0x9
    _SSSScreenshotContentOverlayController *_overlayController;	// 16 = 0x10
    SSSScreenshot *_screenshot;	// 24 = 0x18
    UIView *_annotationOverlayView;	// 32 = 0x20
    UIView *_vellumView;	// 40 = 0x28
    double _vellumOpacity;	// 48 = 0x30
    double _cornerRadius;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000004290d
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double vellumOpacity; // @synthesize vellumOpacity=_vellumOpacity;
@property(retain, nonatomic) UIView *vellumView; // @synthesize vellumView=_vellumView;
@property(nonatomic) _Bool screenshotEditsSnapshotted; // @synthesize screenshotEditsSnapshotted=_screenshotEditsSnapshotted;
@property(retain, nonatomic) UIView *annotationOverlayView; // @synthesize annotationOverlayView=_annotationOverlayView;
@property(retain, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
@property(readonly, nonatomic) _SSSScreenshotContentOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)setCachedViewsHidden:(_Bool)arg1;	// IMP=0x0010000000042867
- (void)deselectAllAnnotations;	// IMP=0x0010000000042861
- (void)updatePaletteVisibilityIfNecessary:(_Bool)arg1;	// IMP=0x001000000004285b
- (void)generateSnapshotImageIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042849
- (void)_hideAndShowViewsForScreenshotEditsSnapshotted:(_Bool)arg1;	// IMP=0x00100000000426b2
- (void)_updateOverlayControllerForBeingActiveForScreenshotEditsSnapshotted:(_Bool)arg1;	// IMP=0x001000000004263a
- (void)_cancelScheduledHideCachedOverlayView;	// IMP=0x0010000000042614
- (void)_scheduleHideCachedOverlayViewWithDelay:(double)arg1;	// IMP=0x00100000000425f9
- (void)_asyncHideCachedOverlayView;	// IMP=0x0010000000042528
- (void)setOverlayControllerActive:(_Bool)arg1;	// IMP=0x0010000000042340
@property(readonly, nonatomic) _Bool didDrawPenStroke;
- (void)endedEditing;	// IMP=0x00100000000422de
- (void)enterEditing;	// IMP=0x0010000000042266
- (void)setRulerHostView:(id)arg1;	// IMP=0x00100000000421f6
- (void)setGesturesEnabled:(_Bool)arg1;	// IMP=0x00100000000421d9
- (void)updateUndoState;	// IMP=0x00100000000421bc
- (MISSING_TYPE *)dealloc;	// IMP=0x001000000004217e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000042115

@end

