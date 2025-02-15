//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSString, UIColor, UIDictationGlowEffect, UIStandardTextCursorView, UIView, _UIDictationAudioLevelSmoother;
@protocol _UIStandardTextCursorViewAudioLevelProvider;

__attribute__((visibility("hidden")))
@interface _UITextCursorDictationAnimation : NSObject
{
    _Bool _soundReactiveCursorEnabled;	// 8 = 0x8
    _Bool _needsInitialDictationAnimation;	// 9 = 0x9
    CADisplayLink *_soundReactiveCursorDisplayLink;	// 16 = 0x10
    UIView *_glowContainerView;	// 24 = 0x18
    UIView *_glowShapeView;	// 32 = 0x20
    UIDictationGlowEffect *_glowEffect;	// 40 = 0x28
    _UIDictationAudioLevelSmoother *_levelSmoother;	// 48 = 0x30
    double _animationStartTime;	// 56 = 0x38
    _Bool _enabled;	// 64 = 0x40
    UIView *_cursorShapeView;	// 72 = 0x48
    UIStandardTextCursorView *_cursorView;	// 80 = 0x50
    UIColor *_tintColor;	// 88 = 0x58
    id <_UIStandardTextCursorViewAudioLevelProvider> _audioLevelProvider;	// 96 = 0x60
    struct CGRect _animatedCursorShapeBounds;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000011407c1
@property(nonatomic) struct CGRect animatedCursorShapeBounds; // @synthesize animatedCursorShapeBounds=_animatedCursorShapeBounds;
@property(nonatomic) __weak id <_UIStandardTextCursorViewAudioLevelProvider> audioLevelProvider; // @synthesize audioLevelProvider=_audioLevelProvider;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) __weak UIStandardTextCursorView *cursorView; // @synthesize cursorView=_cursorView;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) __weak UIView *cursorShapeView; // @synthesize cursorShapeView=_cursorShapeView;
- (void)_displayLinkFired:(id)arg1;	// IMP=0x0000000001140072
- (void)_setSoundReactiveCursorEnabled:(_Bool)arg1;	// IMP=0x000000000113fdf8
- (void)_setCursorGlowEffectEnabled:(_Bool)arg1;	// IMP=0x000000000113fb81
- (void)cursorShapeDidChange;	// IMP=0x000000000113f513
- (void)setNeedsInitialDictationAnimation;	// IMP=0x000000000113f509
- (id)initWithCursorShapeView:(id)arg1;	// IMP=0x000000000113f2b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

