//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString, UITraitCollection;

@interface UIView (StatusBarAdditions_Internal)
- (void)_ui_removeFromParentLayoutItem;	// IMP=0x002000000001fe5a
- (void)_ui_insertSubLayoutItem:(id)arg1 atIndex:(long long)arg2;	// IMP=0x002000000001fe3f
- (void)_ui_addSubLayoutItem:(id)arg1;	// IMP=0x002000000001fe1d
- (void)_ui_addToView:(id)arg1 atIndex:(long long)arg2;	// IMP=0x002000000001fd95
@property(nonatomic) _Bool _ui_usesManualLayout;
@property(readonly, nonatomic) UIView *_ui_view;
@property(readonly, nonatomic) UIView *_ui_superview;
@property(nonatomic) struct CGRect _ui_frame;
@property(readonly, nonatomic) struct CGRect _ui_bounds;

// Remaining properties
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *lastBaselineAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor;
@end

