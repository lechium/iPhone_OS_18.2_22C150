//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIVisualEffectView.h"

__attribute__((visibility("hidden")))
@interface _UIPointerEffectTintView : UIVisualEffectView
{
    unsigned long long _luminance;	// 8 = 0x8
    CDUnknownBlockType _tintColorMatrixProvider;	// 16 = 0x10
    _Bool _disabled;	// 24 = 0x18
    _Bool _pressed;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x0000000001976811
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
- (void)backgroundLumaView:(id)arg1 didTransitionToLevel:(unsigned long long)arg2;	// IMP=0x00000000019767b8
- (void)_updateBackgroundEffects;	// IMP=0x0000000001976622
- (void)_updateAlpha;	// IMP=0x00000000019765cc
- (id)initWithTintColorMatrixProvider:(CDUnknownBlockType)arg1;	// IMP=0x00000000019764cd

@end

