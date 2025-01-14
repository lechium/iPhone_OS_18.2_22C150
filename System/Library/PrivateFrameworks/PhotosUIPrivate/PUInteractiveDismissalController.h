//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PUTileController, PUTilingView, UIView, UIViewController;
@protocol PUInteractiveDismissalControllerDelegate, PUInterruptibleViewControllerTransition, PUTilingViewControllerTransition;

__attribute__((visibility("hidden")))
@interface PUInteractiveDismissalController : NSObject
{
    _Bool _isHandlingDismissalInteraction;	// 8 = 0x8
    _Bool __needsUpdateGestureRecognizers;	// 9 = 0x9
    id <PUInteractiveDismissalControllerDelegate> _delegate;	// 16 = 0x10
    double _dismissalInteractionProgress;	// 24 = 0x18
    UIViewController *__viewController;	// 32 = 0x20
    UIView *__viewHostingGestureRecognizers;	// 40 = 0x28
    id <PUInterruptibleViewControllerTransition> __interruptibleViewControllerTransition;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000344587
@property(nonatomic, setter=_setNeedsUpdateGestureRecognizers:) _Bool _needsUpdateGestureRecognizers; // @synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers;
@property(retain, nonatomic, setter=_setInterruptibleViewControllerTransition:) id <PUInterruptibleViewControllerTransition> _interruptibleViewControllerTransition; // @synthesize _interruptibleViewControllerTransition=__interruptibleViewControllerTransition;
@property(retain, nonatomic, setter=_setViewHostingGestureRecognizers:) UIView *_viewHostingGestureRecognizers; // @synthesize _viewHostingGestureRecognizers=__viewHostingGestureRecognizers;
@property(nonatomic, setter=_setViewController:) __weak UIViewController *_viewController; // @synthesize _viewController=__viewController;
@property(readonly, nonatomic) double dismissalInteractionProgress; // @synthesize dismissalInteractionProgress=_dismissalInteractionProgress;
@property(readonly, nonatomic) _Bool isHandlingDismissalInteraction; // @synthesize isHandlingDismissalInteraction=_isHandlingDismissalInteraction;
@property(nonatomic) __weak id <PUInteractiveDismissalControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateInterruptibleViewControllerTransitionIfNeeded;	// IMP=0x00000000003443c9
- (void)_invalidateInterruptibleViewControllerTransition;	// IMP=0x00000000003443b5
- (void)_updateGestureRecognizersIfNeeded;	// IMP=0x000000000034433b
- (void)_invalidateGestureRecognizers;	// IMP=0x0000000000344324
- (void)_updateViewHostingGestureRecognizersIfNeeded;	// IMP=0x0000000000344271
- (void)_invalidateViewHostingGestureRecognizers;	// IMP=0x0000000000344241
- (void)_updateViewControllerIfNeeded;	// IMP=0x000000000034418e
- (void)_invalidateViewController;	// IMP=0x000000000034415e
- (void)setDismissalInteractionProgress:(double)arg1;	// IMP=0x00000000003440f5
- (void)setIsHandlingDismissalInteraction:(_Bool)arg1;	// IMP=0x0000000000344096
- (void)endDismissal:(_Bool)arg1;	// IMP=0x0000000000343f94
- (void)updateDismissalWithInteractionProgress:(double)arg1 interactionWillFinish:(_Bool)arg2;	// IMP=0x0000000000343e58
- (void)beginDismissal;	// IMP=0x0000000000343af0
- (long long)_preferredDismissalTransitionType;	// IMP=0x00000000003439c5
- (_Bool)canBeginDismissalAtLocationFromProvider:(id)arg1;	// IMP=0x0000000000343915
@property(readonly, nonatomic) id <PUTilingViewControllerTransition> tilingViewControllerTransition;
@property(readonly, nonatomic) PUTileController *designatedTileController;
@property(readonly, nonatomic) PUTilingView *tilingView;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;	// IMP=0x00000000003437ff
- (void)_updateIfNeeded;	// IMP=0x00000000003437b7
- (void)invalidateDelegateData;	// IMP=0x000000000034377c
- (void)viewControllerWillAppear;	// IMP=0x0000000000343767

@end

