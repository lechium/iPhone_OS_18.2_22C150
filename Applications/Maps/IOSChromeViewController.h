//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, StaleMapEffectView, UIView;

@interface IOSChromeViewController
{
    StaleMapEffectView *_staleMapEffectView;	// 48 = 0x30
    UIView *_staleMapEffectDimmingOverlayView;	// 56 = 0x38
    _Bool _forceStaleMapEffect;	// 64 = 0x40
    id _luminanceChromeDeactivationToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000efaa2f
- (void)userDefaultsDidChange:(id)arg1;	// IMP=0x0010000000efa986
- (struct UIEdgeInsets)mapAttributionInsets;	// IMP=0x0010000000efa889
- (void)lightLevelController:(id)arg1 didUpdateLightLevel:(long long)arg2;	// IMP=0x0010000000efa764
- (id)preferredFocusEnvironments;	// IMP=0x0010000000efa6db
- (void)_updateOverlayVisibilityWithCurrentContainerStyle:(unsigned long long)arg1 progress:(double)arg2;	// IMP=0x0010000000efa353
- (_Bool)isDisplayingNavigation;	// IMP=0x0010000000efa272
- (id)createMapReplacementView;	// IMP=0x0010000000efa26a
- (void)handleMoveToOrFromSecureLockscreenUI:(_Bool)arg1;	// IMP=0x0010000000efa0d0
- (void)_acquireChromeDeactivationTokenForLuminanceIfNeeded;	// IMP=0x0010000000efa033
- (void)_updateStaleMapEffectViewForLuminanceChange;	// IMP=0x0010000000ef9abd
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000ef99de
- (void)didBecomeInactive:(_Bool)arg1;	// IMP=0x0010000000ef9994
- (void)_updateStaleMapEffectWithAnimation:(id)arg1;	// IMP=0x0010000000ef892d
- (void)updateComponent:(id)arg1 forTiming:(unsigned long long)arg2 withAnimation:(id)arg3;	// IMP=0x0010000000ef88dd
- (id)allComponents;	// IMP=0x0010000000ef886b
- (void)contextStackDidUpdateFrom:(id)arg1 to:(id)arg2 withAnimation:(id)arg3;	// IMP=0x0010000000ef8640
- (void)contextStackWillUpdateFrom:(id)arg1 to:(id)arg2 withAnimation:(id)arg3;	// IMP=0x0010000000ef851a
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000ef8473
- (void)viewDidLoad;	// IMP=0x0010000000ef83a9
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000ef8285
- (id)keyCommands;	// IMP=0x0010000000ef80f1
- (void)initKeyCommand;	// IMP=0x00100000002523ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

