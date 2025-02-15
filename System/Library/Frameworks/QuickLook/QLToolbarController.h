//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, UIColor, UIToolbar, UIView, _UIToolbarConfiguration;

__attribute__((visibility("hidden")))
@interface QLToolbarController : NSObject
{
    NSLayoutConstraint *_clippingExtensionContainerHeightConstraint;	// 8 = 0x8
    NSLayoutConstraint *_clippingExtensionContainerBottomConstraint;	// 16 = 0x10
    NSLayoutConstraint *_toolbarHeightConstraint;	// 24 = 0x18
    NSLayoutConstraint *_accessoryContainerHeightConstraint;	// 32 = 0x20
    NSLayoutConstraint *_toolbarBottomConstraint;	// 40 = 0x28
    UIView *_clippingExtensionContainer;	// 48 = 0x30
    UIView *_accessoryViewContainer;	// 56 = 0x38
    _UIToolbarConfiguration *_originalToolbarConfiguration;	// 64 = 0x40
    _UIToolbarConfiguration *_customToolbarConfiguration;	// 72 = 0x48
    double _derivedToolbarExtensionHeight;	// 80 = 0x50
    _Bool _accessoryViewHidden;	// 88 = 0x58
    _Bool _hidden;	// 89 = 0x59
    double _accessoryViewHiddenProgress;	// 96 = 0x60
    UIToolbar *_originalToolbar;	// 104 = 0x68
    UIToolbar *_customToolbar;	// 112 = 0x70
    UIView *_accessoryView;	// 120 = 0x78
    double _preferredAccesoryViewHeight;	// 128 = 0x80
    double _toolbarAlpha;	// 136 = 0x88
    double _originalToolbarAlpha;	// 144 = 0x90
    double _accessoryViewAlpha;	// 152 = 0x98
    double _hiddenProgress;	// 160 = 0xa0
    UIColor *_barTintColor;	// 168 = 0xa8
    UIView *_preferredSuperview;	// 176 = 0xb0
    UIView *_preferredParentViewForSafeAreaInset;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000001faf3
@property(readonly, nonatomic) __weak UIView *preferredParentViewForSafeAreaInset; // @synthesize preferredParentViewForSafeAreaInset=_preferredParentViewForSafeAreaInset;
@property(readonly, nonatomic) __weak UIView *preferredSuperview; // @synthesize preferredSuperview=_preferredSuperview;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(nonatomic) double hiddenProgress; // @synthesize hiddenProgress=_hiddenProgress;
@property(nonatomic) double accessoryViewAlpha; // @synthesize accessoryViewAlpha=_accessoryViewAlpha;
@property(nonatomic) double originalToolbarAlpha; // @synthesize originalToolbarAlpha=_originalToolbarAlpha;
@property(nonatomic) double toolbarAlpha; // @synthesize toolbarAlpha=_toolbarAlpha;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) double preferredAccesoryViewHeight; // @synthesize preferredAccesoryViewHeight=_preferredAccesoryViewHeight;
@property(nonatomic) __weak UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly) UIToolbar *customToolbar; // @synthesize customToolbar=_customToolbar;
@property(nonatomic) __weak UIToolbar *originalToolbar; // @synthesize originalToolbar=_originalToolbar;
@property(nonatomic, getter=isOriginalToolbarHidden) _Bool originalToolbarHidden;
- (void)setAccessoryView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001f48f
@property(nonatomic) double accessoryViewHiddenProgress; // @synthesize accessoryViewHiddenProgress=_accessoryViewHiddenProgress;
@property(nonatomic, getter=isAccessoryViewHidden) _Bool accessoryViewHidden; // @synthesize accessoryViewHidden=_accessoryViewHidden;
- (void)setPreferredSuperview:(id)arg1 preferredParentViewForSafeAreaInset:(id)arg2;	// IMP=0x000000000001f28a
- (void)updateLayout;	// IMP=0x000000000001ef74
- (void)restoreOriginalConfiguration;	// IMP=0x000000000001ef3d
- (void)restoreOriginalToolbar;	// IMP=0x000000000001eec3
- (void)_embedAccessoryView;	// IMP=0x000000000001ed99
- (double)_toolbarExtensionHeight;	// IMP=0x000000000001ed3d
- (double)_totalHeight;	// IMP=0x000000000001ec9f
- (void)_layoutAccessoryView:(id)arg1;	// IMP=0x000000000001eb2c
- (double)_originalToolbarHeightIncludingSafeAreaBottomInset:(_Bool)arg1;	// IMP=0x000000000001ea8d
- (double)_computeClippingExtensionContainerHeightForCurrentHiddenProgress;	// IMP=0x000000000001ea31
- (double)_computeClippingExtensionContainerBottomConstraint;	// IMP=0x000000000001e9ba
- (double)_toolbarSafeAreaInsetBottom;	// IMP=0x000000000001e8bf
- (_Bool)_tryToSetUp:(_Bool)arg1;	// IMP=0x000000000001e106
- (id)init;	// IMP=0x000000000001e0bd

@end

