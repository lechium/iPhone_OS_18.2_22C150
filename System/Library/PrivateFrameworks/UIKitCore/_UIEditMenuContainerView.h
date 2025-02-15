//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, _UIEditMenuDismissalGestureRecognizer, _UIEditMenuPresentation, _UITouchFallbackView;

__attribute__((visibility("hidden")))
@interface _UIEditMenuContainerView : UIView
{
    _Bool _lastHitTestPassedThrough;	// 8 = 0x8
    _Bool _didDismissFromGesture;	// 9 = 0x9
    _Bool _ignoresPassthroughInPresentationSource;	// 10 = 0xa
    _Bool _dismissesOnViewportResize;	// 11 = 0xb
    _UITouchFallbackView *_touchFallbackView;	// 16 = 0x10
    _UIEditMenuPresentation *_presentation;	// 24 = 0x18
    _UIEditMenuDismissalGestureRecognizer *_dismissalGestureRecognizer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000702903
@property(readonly, nonatomic) _UIEditMenuDismissalGestureRecognizer *dismissalGestureRecognizer; // @synthesize dismissalGestureRecognizer=_dismissalGestureRecognizer;
@property(nonatomic) _Bool dismissesOnViewportResize; // @synthesize dismissesOnViewportResize=_dismissesOnViewportResize;
@property(nonatomic) _Bool ignoresPassthroughInPresentationSource; // @synthesize ignoresPassthroughInPresentationSource=_ignoresPassthroughInPresentationSource;
@property(readonly, nonatomic) __weak _UIEditMenuPresentation *presentation; // @synthesize presentation=_presentation;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000702639
- (_Bool)dismissalGestureRecognizer:(id)arg1 shouldInteractAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x000000000070256e
- (_Bool)touchFallbackView:(id)arg1 shouldHitTestAtLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x000000000070250b
- (void)didRecognizeDismissalGestureRecognizer:(id)arg1;	// IMP=0x0000000000702485
- (void)didMoveToWindow;	// IMP=0x000000000070234a
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000702273
- (void)_installDismissalGesture;	// IMP=0x00000000007021ca
@property(readonly, nonatomic) _UITouchFallbackView *touchFallbackView; // @synthesize touchFallbackView=_touchFallbackView;
- (_Bool)_touchesInsideShouldHideCalloutBar;	// IMP=0x000000000070210a
- (void)_dismissMenuPresentationForSizeChange;	// IMP=0x000000000070200d
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000701f7a
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000701ee7
- (id)initWithPresentation:(id)arg1 enablePassthrough:(_Bool)arg2;	// IMP=0x0000000000701e41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

