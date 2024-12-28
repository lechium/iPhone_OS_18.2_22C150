//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIMenuController.h"

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UICalloutBarMenuController : UIMenuController
{
    struct CGRect _targetRect;	// 24 = 0x18
    UIView *_targetView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000011c0502
- (id)_asCalloutBarDelegate;	// IMP=0x00000000011c04f9
- (void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2;	// IMP=0x00000000011c02dd
- (void)calloutBar:(id)arg1 willStartAnimation:(id)arg2;	// IMP=0x00000000011c0121
- (_Bool)_updateAnimated:(_Bool)arg1 checkVisible:(_Bool)arg2;	// IMP=0x00000000011bfb1f
- (void)_reparentCalloutBarIfNeeded;	// IMP=0x00000000011bfa00
- (struct CGRect)menuFrame;	// IMP=0x00000000011bf97d
- (void)update;	// IMP=0x00000000011bf961
- (id)menuItems;	// IMP=0x00000000011bf90a
- (void)setMenuItems:(id)arg1;	// IMP=0x00000000011bf890
- (struct CGRect)_targetRect;	// IMP=0x00000000011bf870
- (id)_targetView;	// IMP=0x00000000011bf857
- (void)_setTargetRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000011bf7ce
- (void)setTargetRect:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x00000000011bf71f
- (void)_windowWillRotate:(id)arg1;	// IMP=0x00000000011bf70d
- (void)hideMenu;	// IMP=0x00000000011bf6d5
- (void)hideMenuFromView:(id)arg1;	// IMP=0x00000000011bf637
- (void)showMenuFromView:(id)arg1 rect:(struct CGRect)arg2;	// IMP=0x00000000011bf46d
- (void)setMenuVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000011bf449
- (void)_hideMenuAnimated:(_Bool)arg1;	// IMP=0x00000000011bf3bf
- (void)_showMenuAnimated:(_Bool)arg1;	// IMP=0x00000000011bf1b8
- (_Bool)_menuHidden;	// IMP=0x00000000011bf0ff
- (_Bool)isMenuVisible;	// IMP=0x00000000011bf044
- (void)_removeWindowWillRotateObserver;	// IMP=0x00000000011befe4
- (void)dealloc;	// IMP=0x00000000011bef62

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
