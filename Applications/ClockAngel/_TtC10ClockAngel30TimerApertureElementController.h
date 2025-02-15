//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString, NSURL, UIColor, UIView, UIViewController;
@protocol SBUISystemApertureAccessoryView, SBUISystemApertureElement;

@interface _TtC10ClockAngel30TimerApertureElementController
{
    MISSING_TYPE *observerId;	// 8 = 0x8
    MISSING_TYPE *sessionId;	// 24 = 0x18
    MISSING_TYPE *presentationBehaviors;	// 40 = 0x28
    MISSING_TYPE *activeLayoutMode;	// 48 = 0x30
    MISSING_TYPE *contentRole;	// 56 = 0x38
    MISSING_TYPE *preferredLayoutMode;	// 64 = 0x40
    MISSING_TYPE *maximumLayoutMode;	// 72 = 0x48
    MISSING_TYPE *launchURL;	// 1936941420 = 0x7373616c
    MISSING_TYPE *associatedAppBundleIdentifier;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *timerObserverIdentifier;	// 0 = 0x0
    MISSING_TYPE *elementIdentifier;	// 515820 = 0x7deec
    MISSING_TYPE *leadingView;	// 493 = 0x1ed
    MISSING_TYPE *trailingView;	// 515820 = 0x7deec
    MISSING_TYPE *minimalView;	// 0 = 0x0
    MISSING_TYPE *keyColor;	// 2 = 0x2
    MISSING_TYPE *compressedRunningHost;	// 0 = 0x0
    MISSING_TYPE *compressedPausedHost;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *expandedLabelHost;	// 1953002597 = 0x74687465
    MISSING_TYPE *expandedCountdownHost;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *expandedTimerAlertingHost;	// 0 = 0x0
    MISSING_TYPE *leadingOffset;	// 516313 = 0x7e0d9
    MISSING_TYPE *leadingPadding;	// 4991 = 0x137f
    MISSING_TYPE *verticalPadding;	// 516313 = 0x7e0d9
    MISSING_TYPE *interButtonPadding;	// 0 = 0x0
    MISSING_TYPE *buttonSize;	// 2 = 0x2
    MISSING_TYPE *labelBottomPadding;	// 0 = 0x0
    MISSING_TYPE *labelToCountdownPadding;	// 1868783455 = 0x6f635f5f
    MISSING_TYPE *expectedApertureHeight;	// 0 = 0x0
    MISSING_TYPE *stopButtonToLabelPadding;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *voiceOverTimer;	// 0 = 0x0
    MISSING_TYPE *compactCountdownAnimation;	// 521312 = 0x7f460
    MISSING_TYPE *minimalCountdownAnimation;	// 17620 = 0x44d4
    MISSING_TYPE *pausePlayPackage;	// 521312 = 0x7f460
    MISSING_TYPE *playPauseButton;	// 0 = 0x0
    MISSING_TYPE *stopButton;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0010000000069d60
- (id)init;	// IMP=0x0010000000071850
- (void)collapse;	// IMP=0x0010000000071700
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000071110
- (void)stopAction;	// IMP=0x00100000000704f0
- (void)playPausedAction;	// IMP=0x0010000000070100
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000006a180
- (void)dealloc;	// IMP=0x0010000000069d40
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000069b10
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000069540
- (void)viewDidLoad;	// IMP=0x0010000000068870
@property(nonatomic, readonly) UIColor *keyColor; // @synthesize keyColor;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *minimalView; // @synthesize minimalView;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *trailingView; // @synthesize trailingView;
@property(nonatomic, readonly) UIView<SBUISystemApertureAccessoryView> *leadingView; // @synthesize leadingView;
@property(nonatomic, copy) NSString *elementIdentifier;
@property(nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property(nonatomic, copy) NSURL *launchURL;
@property(nonatomic, readonly) double preferredHeightForBottomSafeArea;
@property(nonatomic) long long maximumLayoutMode; // @synthesize maximumLayoutMode;
@property(nonatomic) long long preferredLayoutMode; // @synthesize preferredLayoutMode;
@property(nonatomic) long long contentRole; // @synthesize contentRole;
@property(nonatomic) long long activeLayoutMode; // @synthesize activeLayoutMode;
@property(nonatomic) unsigned long long presentationBehaviors; // @synthesize presentationBehaviors;
@property(nonatomic, readonly) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
- (void)_updateWithFrameSpecifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000073bb0
- (id)_timelinesForDateInterval:(id)arg1;	// IMP=0x0010000000073aa0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000073a40

@end

