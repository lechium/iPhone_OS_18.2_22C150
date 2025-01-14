//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, _UIUCBKBSelectionBackground;
@protocol _UIButtonBarAppearanceDelegate;

__attribute__((visibility("hidden")))
@interface _UIUCBGroupBarButtonVisualProviderIOS
{
    _UIUCBKBSelectionBackground *_selectionBackgroundView;	// 56 = 0x38
    id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;	// 64 = 0x40
    _Bool _lightKeyboard;	// 72 = 0x48
    UIColor *_tintColor;	// 80 = 0x50
}

+ (id)darkKeyboardProvider;	// IMP=0x00600000003f9aae
+ (id)lightKeyboardProvider;	// IMP=0x00600000003f9a91
- (void).cxx_destruct;	// IMP=0x00000000003fa32c
@property(nonatomic) _Bool lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;
- (void)setTintColor:(id)arg1;	// IMP=0x00000000003fa2fb
- (id)tintColor;	// IMP=0x00000000003fa2ea
- (struct CGPoint)menuAnchorPoint;	// IMP=0x00000000003fa13f
- (_Bool)shouldLift;	// IMP=0x00000000003fa119
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;	// IMP=0x00000000003f9db8
- (void)updateButton:(id)arg1 toUseButtonShapes:(_Bool)arg2;	// IMP=0x00000000003f9d99
- (id)imageSymbolConfiguration;	// IMP=0x00000000003f9cf2
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;	// IMP=0x00000000003f9bf0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f9b94
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f9ad3
- (long long)_securePasteButtonSite;	// IMP=0x00000000003f9acb

@end

