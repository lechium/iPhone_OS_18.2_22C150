//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FaceIdToastViewController, LAUIPearlGlyphView, NSDate, NSNumber, NSString, NSTimer, UIViewController;
@protocol PasscodeView;

@interface PasscodeViewController
{
    UIViewController<PasscodeView> *_passcodeView;	// 8 = 0x8
    NSTimer *_updateTimer;	// 16 = 0x10
    unsigned long long _failures;	// 24 = 0x18
    NSNumber *_failureLimit;	// 32 = 0x20
    NSDate *_blockedUntilDate;	// 40 = 0x28
    _Bool _isLockoutActive;	// 48 = 0x30
    _Bool _isBlocked;	// 49 = 0x31
    _Bool _passcodeEntered;	// 50 = 0x32
    _Bool _startedTypingPasscode;	// 51 = 0x33
    LAUIPearlGlyphView *_glyphView;	// 56 = 0x38
    FaceIdToastViewController *_toastController;	// 64 = 0x40
    long long _currentInterfaceStyle;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000001c280
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000001bdab
- (void)_scheduleTimerIfNecessaryAndUpdateSubtitle;	// IMP=0x001000000001bb9a
- (void)_clearTimer;	// IMP=0x001000000001bb62
- (void)_switchToBackoffScreen:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000001ba8d
- (void)_switchToBackoffScreen:(id)arg1;	// IMP=0x001000000001ba76
- (long long)preferredStatusBarStyle;	// IMP=0x001000000001b9d0
- (void)_showBackoffScreenWithMinsUntilUnblocked:(int)arg1;	// IMP=0x001000000001b7a5
- (void)_showPasscodeScreen;	// IMP=0x001000000001b634
- (_Bool)_useWhitePasscodeScreen;	// IMP=0x001000000001b563
- (_Bool)_hasTranslucentBackground;	// IMP=0x001000000001b46a
- (_Bool)_hasBlurredBackground;	// IMP=0x001000000001b33a
- (long long)_backgroundStyle;	// IMP=0x001000000001b2e8
- (id)_style;	// IMP=0x001000000001b279
- (void)_updateStyle;	// IMP=0x001000000001b148
- (void)viewDidLayoutSubviews;	// IMP=0x001000000001b098
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x001000000001b010
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000001af3f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000001ae8f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000001ac26
- (void)loadView;	// IMP=0x001000000001abc4
- (void);	// IMP=0x001000000001abb2
- (void)_processPasscodeEntryResult:(long long)arg1;	// IMP=0x001000000001a373
- (void)passcodeViewPasscodeEntered:(id)arg1;	// IMP=0x001000000001a013
- (void)passcodeViewPasscodeDidChange:(id)arg1;	// IMP=0x0010000000019fc1
- (void)_layoutGlyph;	// IMP=0x0010000000019e7d
- (void)_setGlyphState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000019e39
- (void)_showGlyph:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000019dc0
- (void)_setupGlyph;	// IMP=0x0010000000019bef
- (void)_setupView;	// IMP=0x001000000001964b
- (_Bool)isFullScreenController;	// IMP=0x0010000000019643
- (void)didReceiveAuthenticationData;	// IMP=0x0010000000018de4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
