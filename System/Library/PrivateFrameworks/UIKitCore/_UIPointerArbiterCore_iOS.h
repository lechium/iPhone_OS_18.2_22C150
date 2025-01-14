//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSString, PSPointerClientController, PSPointerHoverRegion, PSPointerPortalSourceCollection, UIPointerRegion, UIPointerStyle, _UIAssertionController, _UILumaTrackingBackdropView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIPointerArbiterCore_iOS : NSObject
{
    _Bool _hasRunningTransaction;	// 8 = 0x8
    _Bool _updatesPausedViaAssertion;	// 9 = 0x9
    NSMutableArray *_pendingTransactionBlocks;	// 16 = 0x10
    UIPointerStyle *_activePointerStyle;	// 24 = 0x18
    UIPointerRegion *_activePointerRegion;	// 32 = 0x20
    PSPointerHoverRegion *_lastSentHoverRegion;	// 40 = 0x28
    unsigned long long _lastMaterialLuminance;	// 48 = 0x30
    NSMapTable *_pointerRegionToMatchMoveSourceMap;	// 56 = 0x38
    PSPointerClientController *_pointerClientController;	// 64 = 0x40
    PSPointerPortalSourceCollection *_pointerPortalSourceCollection;	// 72 = 0x48
    _UIPortalView *_pointerPortalView;	// 80 = 0x50
    _UIPortalView *_overlayEffectPortalView;	// 88 = 0x58
    _UILumaTrackingBackdropView *_samplingBackdropView;	// 96 = 0x60
    unsigned long long _transactionRevisionID;	// 104 = 0x68
    UIPointerRegion *_scrollingRegion;	// 112 = 0x70
    _UIAssertionController *_pauseAssertionController;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000bcb705
@property(nonatomic) _Bool updatesPausedViaAssertion; // @synthesize updatesPausedViaAssertion=_updatesPausedViaAssertion;
@property(retain, nonatomic) _UIAssertionController *pauseAssertionController; // @synthesize pauseAssertionController=_pauseAssertionController;
@property(retain, nonatomic) UIPointerRegion *scrollingRegion; // @synthesize scrollingRegion=_scrollingRegion;
@property(nonatomic) unsigned long long transactionRevisionID; // @synthesize transactionRevisionID=_transactionRevisionID;
@property(retain, nonatomic) _UILumaTrackingBackdropView *samplingBackdropView; // @synthesize samplingBackdropView=_samplingBackdropView;
@property(retain, nonatomic) _UIPortalView *overlayEffectPortalView; // @synthesize overlayEffectPortalView=_overlayEffectPortalView;
@property(retain, nonatomic) _UIPortalView *pointerPortalView; // @synthesize pointerPortalView=_pointerPortalView;
@property(copy, nonatomic) PSPointerPortalSourceCollection *pointerPortalSourceCollection; // @synthesize pointerPortalSourceCollection=_pointerPortalSourceCollection;
@property(retain, nonatomic) PSPointerClientController *pointerClientController; // @synthesize pointerClientController=_pointerClientController;
@property(retain, nonatomic) NSMapTable *pointerRegionToMatchMoveSourceMap; // @synthesize pointerRegionToMatchMoveSourceMap=_pointerRegionToMatchMoveSourceMap;
@property(nonatomic) unsigned long long lastMaterialLuminance; // @synthesize lastMaterialLuminance=_lastMaterialLuminance;
@property(retain, nonatomic) PSPointerHoverRegion *lastSentHoverRegion; // @synthesize lastSentHoverRegion=_lastSentHoverRegion;
@property(retain, nonatomic) UIPointerRegion *activePointerRegion; // @synthesize activePointerRegion=_activePointerRegion;
@property(retain, nonatomic) UIPointerStyle *activePointerStyle; // @synthesize activePointerStyle=_activePointerStyle;
@property(retain, nonatomic) NSMutableArray *pendingTransactionBlocks; // @synthesize pendingTransactionBlocks=_pendingTransactionBlocks;
@property(nonatomic) _Bool hasRunningTransaction; // @synthesize hasRunningTransaction=_hasRunningTransaction;
- (void)assertionActivationStateChangedToState:(_Bool)arg1 forType:(unsigned long long)arg2;	// IMP=0x0000000000bcb4f1
- (_Bool)assertionActivationStateForType:(unsigned long long)arg1;	// IMP=0x0000000000bcb4dc
- (void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2;	// IMP=0x0000000000bcb28f
- (void)_getPointerRegion:(inout id *)arg1 andStyle:(inout id *)arg2 atLocation:(struct CGPoint)arg3 inWindow:(id)arg4;	// IMP=0x0000000000bcae0d
- (id)_psPointerShapeFromUIPointerShape:(id)arg1 atScale:(double)arg2;	// IMP=0x0000000000bcabeb
- (id)_pointerShapeForStyle:(id)arg1 region:(id)arg2;	// IMP=0x0000000000bcaa64
- (id)_hoverRegionWithStyle:(id)arg1 forRegion:(id)arg2;	// IMP=0x0000000000bc9b83
- (id)_coordinateSpaceSourceViewForRegion:(id)arg1 withStyle:(id)arg2;	// IMP=0x0000000000bc9a42
- (void)_preparePointerPortalSourceCollectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000bc91c9
- (void)_prepareContentMatchMoveSourceForPointerRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000bc8c3d
- (void)_performTransactionUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000bc8b37
- (void)_performNextTransaction;	// IMP=0x0000000000bc89a5
- (void)pointerClientControllerClientInteractionStateDidChange:(id)arg1;	// IMP=0x0000000000bc885e
- (void)pointerClientControllerWillDecelerate:(id)arg1 targetPointerPosition:(inout struct CGPoint *)arg2 velocity:(struct CGPoint)arg3 inContextID:(unsigned int)arg4 cursorRegionLookupRadius:(double)arg5 cursorRegionLookupResolution:(double)arg6 lookupConeAngle:(double)arg7;	// IMP=0x0000000000bc7fe2
- (void)pointerClientController:(id)arg1 didInvalidatePortalSourceCollections:(id)arg2 matchMoveSources:(id)arg3;	// IMP=0x0000000000bc7e4f
- (id)obtainPointerUpdatePauseAssertion;	// IMP=0x0000000000bc7df2
- (void)endScrollingWithRegion:(id)arg1;	// IMP=0x0000000000bc7a84
- (void)beginScrollingWithRegion:(id)arg1;	// IMP=0x0000000000bc77eb
- (void)_notifyPointerStateDidChange;	// IMP=0x0000000000bc776a
@property(readonly, nonatomic) long long pointerState;
- (void)_clearMatchMoveSourceForRegion:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x0000000000bc7499
- (void)_setActiveHoverRegion:(id)arg1 style:(id)arg2 forPointerRegion:(id)arg3 transactionID:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000bc710e
- (void)exitRegion:(id)arg1 removeStyle:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000bc6eee
- (void)applyStyle:(id)arg1 forRegion:(id)arg2 effectSourceHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000bc6524
- (id)init;	// IMP=0x0000000000bc64b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

