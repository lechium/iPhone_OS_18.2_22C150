//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIMenuController.h"

@class NSArray, NSString, UIEditMenuInteraction, UIView;

__attribute__((visibility("hidden")))
@interface _UIEditMenuInteractionMenuController : UIMenuController
{
    UIEditMenuInteraction *_currentMenuInteraction;	// 24 = 0x18
    NSArray *_extraMenuItems;	// 32 = 0x20
    UIView *_targetView;	// 40 = 0x28
    struct CGRect _targetRect;	// 48 = 0x30
    _Bool _menuNeedsUpdate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000011c15fb
- (id)_editMenuInteraction:(id)arg1 firstResponderTargetForConfiguration:(id)arg2;	// IMP=0x00000000011c13d2
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;	// IMP=0x00000000011c12e1
- (void)editMenuInteraction:(id)arg1 willDismissMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000011c111a
- (void)editMenuInteraction:(id)arg1 willPresentMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000011c0fff
- (struct CGRect)editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;	// IMP=0x00000000011c0fdf
- (void)_applicationDidAddDeactivationReason:(id)arg1;	// IMP=0x00000000011c0f43
- (long long)_resolvedEditMenuArrowDirection;	// IMP=0x00000000011c0f22
- (_Bool)_shouldPassthroughInView;	// IMP=0x00000000011c0e10
- (void)_presentEditMenu;	// IMP=0x00000000011c0d2f
- (void)_dismissEditMenu;	// IMP=0x00000000011c0d12
- (void)_prepareEditMenuInteractionIfNeeded;	// IMP=0x00000000011c0b45
- (void)_setTargetRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000011c0a7f
- (struct CGRect)_targetRect;	// IMP=0x00000000011c0a5f
- (id)_targetView;	// IMP=0x00000000011c0a46
- (struct CGRect)menuFrame;	// IMP=0x00000000011c0937
- (void)update;	// IMP=0x00000000011c08c2
- (void)setMenuItems:(id)arg1;	// IMP=0x00000000011c0895
- (id)menuItems;	// IMP=0x00000000011c0880
- (void)hideMenu;	// IMP=0x00000000011c086e
- (void)hideMenuFromView:(id)arg1;	// IMP=0x00000000011c07f2
- (void)showMenuFromView:(id)arg1 rect:(struct CGRect)arg2;	// IMP=0x00000000011c072a
- (void)setTargetRect:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x00000000011c0713
- (void)setMenuVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000011c064d
- (_Bool)isMenuVisible;	// IMP=0x00000000011c0630
- (void)dealloc;	// IMP=0x00000000011c05a7
- (id)init;	// IMP=0x00000000011c0513

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

