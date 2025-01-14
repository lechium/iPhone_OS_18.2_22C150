//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextEffectsWindow.h"

@class CAContext, FBSScene, FBSSceneIdentityToken, FBSSceneLayer, NSDictionary, NSString, UIScreen, _UIContextBinder;

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindow : UITextEffectsWindow
{
    NSDictionary *_perScreenOptions;	// 232 = 0xe8
    UIScreen *_intendedScreen;	// 240 = 0xf0
    _Bool _arePlaceholdersInitialised;	// 248 = 0xf8
    FBSSceneLayer *_keyboardSceneLayer;	// 256 = 0x100
    FBSScene *_activeScene;	// 264 = 0x108
    _Bool _resetRequired;	// 272 = 0x110
}

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(_Bool)arg2;	// IMP=0x00100000010b9ea0
+ (_Bool)_isHostedInAnotherProcess;	// IMP=0x00100000010b9e98
- (void).cxx_destruct;	// IMP=0x00000000010bb262
- (void)_configureAlphaIfNecessary;	// IMP=0x00000000010bb16d
- (_Bool)_isEligibleForFocusOcclusion;	// IMP=0x00000000010bb165
- (_Bool)isTransparentFocusItem;	// IMP=0x00000000010bb15d
- (void)dealloc;	// IMP=0x00000000010baffc
- (long long)_orientationForClassicPresentation;	// IMP=0x00000000010bafeb
- (void)endDisablingInterfaceAutorotation;	// IMP=0x00000000010baf9d
- (void)resetScene;	// IMP=0x00000000010baf5b
- (void)_resetScene;	// IMP=0x00000000010baefb
@property(readonly, nonatomic) FBSSceneIdentityToken *activeSceneIdentity;
- (void)detachBindable;	// IMP=0x00000000010bae65
- (_Bool)shouldDetachBindable;	// IMP=0x00000000010bad4d
- (void)attachBindable;	// IMP=0x00000000010bab8b
- (_Bool)shouldAttachBindable;	// IMP=0x00000000010baacf
- (id)_layerForCoordinateSpaceConversion;	// IMP=0x00000000010baaba
- (double)_adjustedWindowLevelFromLevel:(double)arg1;	// IMP=0x00000000010baab4
- (_Bool)_isTextEffectsWindowNotificationOwner;	// IMP=0x00000000010baaac
- (_Bool)_isRemoteKeyboardWindow;	// IMP=0x00000000010baaa4
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000010baa0e
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(_Bool)arg3 duration:(double)arg4 force:(_Bool)arg5 isRotating:(_Bool)arg6;	// IMP=0x00000000010ba910
- (void)setWindowLevel:(double)arg1;	// IMP=0x00000000010ba867
- (_Bool)_isFullscreen;	// IMP=0x00000000010ba7ff
- (_Bool)_usesWindowServerHitTesting;	// IMP=0x00000000010ba7ed
- (long long)_orientationInSceneSpace;	// IMP=0x00000000010ba794
- (_Bool)_canIgnoreInteractionEvents;	// IMP=0x00000000010ba78c
- (_Bool)_alwaysGetsContexts;	// IMP=0x00000000010ba784
- (_Bool)_isHostedInAnotherProcess;	// IMP=0x00000000010ba76a
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x00000000010ba762
- (_Bool)_wantsSceneAssociation;	// IMP=0x00000000010ba75a
- (_Bool)_isAlwaysKeyboardWindow;	// IMP=0x00000000010ba752
- (_Bool)isInternalWindow;	// IMP=0x00000000010ba665
- (void)invalidate;	// IMP=0x00000000010ba649
@property(readonly) NSDictionary *_options;
@property(readonly) UIScreen *_intendedScreen;
- (_Bool)_matchingOptions:(id)arg1;	// IMP=0x00000000010ba617
- (id)_initWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x00000000010ba4f5
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x00000000010ba303

// Remaining properties
@property(readonly, nonatomic) CDStruct_b73e569c _bindingDescription;
@property(nonatomic, setter=_setBoundContext:) __weak CAContext *_boundContext;
@property(nonatomic, setter=_setContextBinder:) __weak _UIContextBinder *_contextBinder;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

