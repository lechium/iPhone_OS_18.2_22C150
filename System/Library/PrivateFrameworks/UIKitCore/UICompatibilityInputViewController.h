//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIInputViewController.h"

@class NSArray, NSString, UIKeyboard, UIKeyboardInputMode, UILayoutGuide, UIViewController;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UICompatibilityInputViewController : UIInputViewController
{
    UIKeyboardInputMode *_inputMode;	// 480 = 0x1e0
    UIKeyboard *_deferredSystemView;	// 488 = 0x1e8
    UIKeyboardInputMode *_incomingExtensionInputMode;	// 496 = 0x1f0
    double _incomingExtensionInputModeTime;	// 504 = 0x1f8
    double _lastSuspendedTime;	// 512 = 0x200
    double _currentResumeTime;	// 520 = 0x208
    _Bool _shouldRegenerateSizingConstraints;	// 528 = 0x210
    _Bool _shouldSuppressRemoteInputController;	// 529 = 0x211
    _Bool _tearingDownInputController;	// 530 = 0x212
    double _resetInputModeTime;	// 536 = 0x218
    unsigned long long _latestDelayTime;	// 544 = 0x220
    UILayoutGuide *_focusSafeAreaLayoutGuide;	// 552 = 0x228
    UIViewController *_inputController;	// 560 = 0x230
    NSArray *_internalEdgeMatchConstraints;	// 568 = 0x238
    id <UITextCursorAssertion> _blinkAssertion;	// 576 = 0x240
}

+ (id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2;	// IMP=0x0010000000e1801c
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;	// IMP=0x0010000000e18003
+ (_Bool)_requiresProxyInterface;	// IMP=0x0010000000e176aa
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;	// IMP=0x0010000000e1715a
+ (id)inputViewControllerWithView:(id)arg1;	// IMP=0x0010000000e16f0e
- (void).cxx_destruct;	// IMP=0x0000000000e1c2f1
@property(retain, nonatomic) id <UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property(retain, nonatomic) NSArray *internalEdgeMatchConstraints; // @synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints;
@property(retain, nonatomic) UIViewController *inputController; // @synthesize inputController=_inputController;
@property(readonly, nonatomic) UILayoutGuide *focusSafeAreaLayoutGuide;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;	// IMP=0x0000000000e1bdcc
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000e1bd22
- (void)didFinishTranslation;	// IMP=0x0000000000e1bbf0
- (void)finishSplitTransition:(_Bool)arg1;	// IMP=0x0000000000e1ba49
- (void)willBeginTranslation;	// IMP=0x0000000000e1b769
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000e1b60f
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000e1b558
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000e1b37c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000e1b2d1
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000e1b222
- (id)_keyboardForThisViewController;	// IMP=0x0000000000e1b1a8
- (id)_keyboard;	// IMP=0x0000000000e1b006
- (id)childCompatibilityController;	// IMP=0x0000000000e1af8c
- (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;	// IMP=0x0000000000e1aec5
- (id)preferredFocusedView;	// IMP=0x0000000000e1ae75
- (void)setInputMode:(id)arg1;	// IMP=0x0000000000e191ee
- (void)setTearingDownInputController;	// IMP=0x0000000000e191dd
- (void)validateInputModeIsDisplayed;	// IMP=0x0000000000e19195
- (void)assertCurrentInputModeIfNecessary;	// IMP=0x0000000000e190c3
- (void)resetInputMode;	// IMP=0x0000000000e18fe1
- (void)resetInputModeInMainThread;	// IMP=0x0000000000e18c83
- (id)_systemViewControllerForInputMode:(id)arg1;	// IMP=0x0000000000e18b3b
- (void)shouldUpdateInputMode:(id)arg1;	// IMP=0x0000000000e18997
- (void)tearDownInputController;	// IMP=0x0000000000e1879e
- (void)removeSnapshotView;	// IMP=0x0000000000e18640
- (void)addSnapshotViewForInputMode:(id)arg1;	// IMP=0x0000000000e18383
- (void)takeSnapshotView;	// IMP=0x0000000000e180bc
- (void)rebuildChildConstraints;	// IMP=0x0000000000e17b34
- (void)generateCompatibleSizeConstraintsIfNecessary;	// IMP=0x0000000000e179b9
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000e17941
- (void)willResume:(id)arg1;	// IMP=0x0000000000e1784f
- (void)isHosted:(id)arg1;	// IMP=0x0000000000e1782e
- (void)didSuspend:(id)arg1;	// IMP=0x0000000000e1771f
- (void)killIncomingExtension;	// IMP=0x0000000000e176b2
- (id)_compatView;	// IMP=0x0000000000e17630
- (id)_compatibilityController;	// IMP=0x0000000000e175c3
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x0000000000e175bb
- (_Bool)shouldAutomaticallyForwardRotationMethods;	// IMP=0x0000000000e175b3
- (void)dealloc;	// IMP=0x0000000000e174a5
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000e1749d
- (void)loadView;	// IMP=0x0000000000e173f9
- (id)_initAsDeferredController;	// IMP=0x0000000000e17274
- (void)setDeferredSystemView:(id)arg1;	// IMP=0x0000000000e1721b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
