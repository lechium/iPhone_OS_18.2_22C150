//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNFRegListController.h"

@class IMAccount, NSString, NSTimer, UIBarButtonItem;
@protocol CNFRegFirstRunDelegate;

__attribute__((visibility("hidden")))
@interface CNFRegFirstRunController : CNFRegListController
{
    Class _completionControllerClass;	// 208 = 0xd0
    _Bool _showingActivityIndicator;	// 216 = 0xd8
    _Bool _previousHidesBackButton;	// 217 = 0xd9
    UIBarButtonItem *_previousLeftButton;	// 224 = 0xe0
    UIBarButtonItem *_previousRightButton;	// 232 = 0xe8
    id <CNFRegFirstRunDelegate> _delegate;	// 240 = 0xf0
    UIBarButtonItem *_customRightButton;	// 248 = 0xf8
    UIBarButtonItem *_customLeftButton;	// 256 = 0x100
    NSTimer *_timeoutTimer;	// 264 = 0x108
    _Bool _timedOut;	// 272 = 0x110
    _Bool _cancelled;	// 273 = 0x111
    IMAccount *_account;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x0000000000060c8a
@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(retain, nonatomic) UIBarButtonItem *customRightButton; // @synthesize customRightButton=_customRightButton;
@property(retain, nonatomic) UIBarButtonItem *customLeftButton; // @synthesize customLeftButton=_customLeftButton;
@property(nonatomic) id <CNFRegFirstRunDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool previousHidesBackButton; // @synthesize previousHidesBackButton=_previousHidesBackButton;
@property(retain, nonatomic) UIBarButtonItem *previousRightButton; // @synthesize previousRightButton=_previousRightButton;
@property(retain, nonatomic) UIBarButtonItem *previousLeftButton; // @synthesize previousLeftButton=_previousLeftButton;
@property(nonatomic) Class completionControllerClass; // @synthesize completionControllerClass=_completionControllerClass;
- (void)_executeDismissBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000060a89
@property(readonly, nonatomic) long long currentAppearanceStyle;
- (void)_setupEventHandlers;	// IMP=0x00000000000608f6
- (_Bool)dismissWithState:(unsigned long long)arg1;	// IMP=0x0000000000060826
- (_Bool)pushCompletionControllerIfPossible;	// IMP=0x000000000006030a
- (void)_refreshCurrentState;	// IMP=0x00000000000600e7
- (void)_updateControllerState;	// IMP=0x000000000006006a
- (void)_updateUI;	// IMP=0x0000000000060064
- (void)systemApplicationDidEnterBackground;	// IMP=0x000000000005ffff
- (void)systemApplicationWillEnterForeground;	// IMP=0x000000000005ffa9
- (void)setCellsChecked:(_Bool)arg1;	// IMP=0x000000000005fea0
- (void)_stopValidationModeAnimated:(_Bool)arg1;	// IMP=0x000000000005fe8e
- (void)_startValidationModeAnimated:(_Bool)arg1;	// IMP=0x000000000005fe7a
- (void)_startValidationModeAnimated:(_Bool)arg1 allowCancel:(_Bool)arg2;	// IMP=0x000000000005fe10
- (void)_stopActivityIndicatorAnimated:(_Bool)arg1;	// IMP=0x000000000005fdc1
- (void)_stopActivityIndicatorWithTitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000005fbc2
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000005fbad
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(_Bool)arg2 allowCancel:(_Bool)arg3;	// IMP=0x000000000005f8f7
- (id)_validationModeCancelButton;	// IMP=0x000000000005f8b5
- (void)_handleTimeout;	// IMP=0x000000000005f8af
- (void)_timeoutFired:(id)arg1;	// IMP=0x000000000005f86f
- (void)_stopTimeout;	// IMP=0x000000000005f82d
- (void)_startTimeoutWithDuration:(double)arg1;	// IMP=0x000000000005f7a9
- (_Bool)_hidesBackButton;	// IMP=0x000000000005f794
- (void)_leftButtonTapped;	// IMP=0x000000000005f78e
- (id)_leftButtonItem;	// IMP=0x000000000005f6ec
- (void)_cancelValidationMode;	// IMP=0x000000000005f6cf
- (void)_handleValidationModeCancelled;	// IMP=0x000000000005f6c9
- (void)_rightButtonTapped;	// IMP=0x000000000005f6c3
- (id)_rightButtonItem;	// IMP=0x000000000005f579
- (void)_refreshNavBarAnimated:(_Bool)arg1;	// IMP=0x000000000005f434
- (id)validationString;	// IMP=0x000000000005f3ba
- (id)titleString;	// IMP=0x000000000005f2bf
- (id)customTitle;	// IMP=0x000000000005f2ad
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000005f267
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000005f15b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005f103
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000005efc1
- (void)_returnKeyPressed;	// IMP=0x000000000005efbb
- (void)_handleReturnKeyTapped:(id)arg1;	// IMP=0x000000000005efa9
- (void)_stopListeningForReturnKey;	// IMP=0x000000000005ef49
- (void)_startListeningForReturnKey;	// IMP=0x000000000005eee2
- (void)setSpecifier:(id)arg1;	// IMP=0x000000000005ee2c
- (void)dealloc;	// IMP=0x000000000005ed4b
- (id)initWithParentController:(id)arg1 account:(id)arg2;	// IMP=0x000000000005ecd9
- (id)initWithRegController:(id)arg1 account:(id)arg2;	// IMP=0x000000000005ec78
- (id)initWithRegController:(id)arg1;	// IMP=0x000000000005ec2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
