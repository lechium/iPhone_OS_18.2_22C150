//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UINavigationBarPalette.h"

@class NSString, UINavigationController, UIView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarBridgingPalette : _UINavigationBarPalette
{
    UIView *_temporaryBackgroundView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000048447c
- (void)_setupBackgroundViewIfNecessary;	// IMP=0x0000000000484476
- (void)_resetHeightConstraintConstant;	// IMP=0x0000000000484470
- (void)_resetConstraintConstants:(double)arg1;	// IMP=0x000000000048446a
- (void)_enableConstraints;	// IMP=0x0000000000484464
- (void)_disableConstraints;	// IMP=0x000000000048445e
- (void)_configurePaletteConstraintsForBoundary;	// IMP=0x0000000000484458
- (void)_updateBackgroundConstraintsIfNecessary;	// IMP=0x0000000000484452
- (_Bool)_shouldUpdateBackground;	// IMP=0x000000000048444a
- (void)_configureConstraintsForBackground:(id)arg1;	// IMP=0x0000000000484444
- (void)_setAttached:(_Bool)arg1 didComplete:(_Bool)arg2;	// IMP=0x000000000048443e
- (void)_updateBackgroundView;	// IMP=0x0000000000484438
- (id)_attachedPinningTopBar;	// IMP=0x0000000000484430
- (_Bool)paletteIsHidden;	// IMP=0x00000000004843fd
- (_Bool)isAttached;	// IMP=0x00000000004843ca
@property(nonatomic) struct UIEdgeInsets preferredContentInsets;
@property(nonatomic, getter=isVisibleWhenPinningBarIsHidden) _Bool visibleWhenPinningBarIsHidden;
@property(nonatomic) _Bool paletteShadowIsHidden;
@property(nonatomic) _Bool pinningBarShadowIsHidden;
@property(nonatomic) _Bool pinningBarShadowWasHidden;
@property(readonly, nonatomic) unsigned long long boundaryEdge;
@property(readonly, nonatomic) UINavigationController *navController;
- (void)_setLeftConstraintConstant:(double)arg1;	// IMP=0x0000000000484363
- (void)_setTopConstraintConstant:(double)arg1;	// IMP=0x000000000048435d
@property(nonatomic, setter=_setPaletteOverridesPinningBar:) _Bool _paletteOverridesPinningBar;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
- (void)resetBackgroundConstraints;	// IMP=0x0000000000484343
- (void)setFrame:(struct CGRect)arg1 isAnimating:(_Bool)arg2;	// IMP=0x00000000004842a5
- (void)_setSize:(struct CGSize)arg1;	// IMP=0x0000000000484290
- (void)setSize:(struct CGSize)arg1;	// IMP=0x000000000048427e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isPinned) _Bool pinned;
@property(readonly) Class superclass;

@end

