//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class NSLayoutConstraint, NSMutableArray, NSNumberFormatter, NSString, NSTimer, NSXPCConnection, STKUSSDSessionAction, TPButton, UIActivityIndicatorView, UILayoutGuide, UITextView, UIView, USSDReplyField;

@interface STKUSSDViewController : SBUIRemoteAlertServiceViewController
{
    NSTimer *_timeoutTimer;	// 8 = 0x8
    STKUSSDSessionAction *_sessionAction;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    NSString *_displayText;	// 32 = 0x20
    NSMutableArray *_supplementaryServicesInfo;	// 40 = 0x28
    TPButton *_dismissButton;	// 48 = 0x30
    TPButton *_replyButton;	// 56 = 0x38
    UIActivityIndicatorView *_activityIndicator;	// 64 = 0x40
    UIView *_notifyView;	// 72 = 0x48
    UIView *_replyView;	// 80 = 0x50
    UITextView *_charsRemainingView;	// 88 = 0x58
    UITextView *_textView;	// 96 = 0x60
    USSDReplyField *_responseField;	// 104 = 0x68
    UILayoutGuide *_keyboardGuide;	// 112 = 0x70
    NSLayoutConstraint *_keyboardTopConstraint;	// 120 = 0x78
    NSLayoutConstraint *_textViewHeightConstraint;	// 128 = 0x80
    NSLayoutConstraint *_textViewBottomConstraint;	// 136 = 0x88
    NSNumberFormatter *_decimalFormatter;	// 144 = 0x90
    _Bool _hasReceivedContent;	// 152 = 0x98
    _Bool _allowsResponse;	// 153 = 0x99
}

+ (_Bool);	// IMP=0x002000000000a9d9
- (void).cxx_destruct;	// IMP=0x002000000000e7b5
@property(nonatomic) _Bool allowsResponse; // @synthesize allowsResponse=_allowsResponse;
@property(readonly, nonatomic) STKUSSDSessionAction *sessionAction; // @synthesize sessionAction=_sessionAction;
- (void)_updateNotifyText:(id)arg1;	// IMP=0x001000000000d946
- (void)_updateCharsRemaining;	// IMP=0x001000000000d81f
- (void)_setupResponseBar;	// IMP=0x001000000000ce6b
- (void)_displayDidTimeout;	// IMP=0x001000000000ce2d
- (void)_noteDidReceiveContent:(id)arg1;	// IMP=0x001000000000cdad
- (id)_replyView;	// IMP=0x001000000000be98
- (_Bool)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;	// IMP=0x001000000000be03
- (void)sessionDidReceiveSupplementaryServicesEvent:(id)arg1;	// IMP=0x001000000000bd55
- (void)sessionWantsResponse:(_Bool)arg1;	// IMP=0x001000000000bcd0
- (void)sessionDidTerminate;	// IMP=0x001000000000bbf3
- (void)sessionDidReceiveErrorCode:(long long)arg1 string:(id)arg2;	// IMP=0x001000000000b928
- (void)sessionDidReceiveString:(id)arg1;	// IMP=0x001000000000b769
- (void)dismissCoalescingSession;	// IMP=0x001000000000b6b1
- (void)viewDidLayoutSubviews;	// IMP=0x001000000000b5d3
- (void)_textDidChangeNotification:(id)arg1;	// IMP=0x001000000000b5c1
- (void)_keyboardWillChangeFrame:(id)arg1;	// IMP=0x001000000000b42c
- (void)_replyClicked:(id)arg1;	// IMP=0x001000000000b120
- (void)_okayClicked:(id)arg1;	// IMP=0x001000000000b078
- (void)_cancelClicked:(id)arg1;	// IMP=0x001000000000b01b
- (void)startTimeoutTimerIfNecessary;	// IMP=0x001000000000af95
- (void)dismiss;	// IMP=0x001000000000ae79
- (void)clearTimeoutTimer;	// IMP=0x001000000000ae41
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a9e1
- (void)_willAppearInRemoteViewController;	// IMP=0x001000000000a92b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000000a854
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000000a68f
- (void)viewDidLoad;	// IMP=0x0010000000009915
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00100000000098b7
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000098af
- (void)dealloc;	// IMP=0x0010000000009818

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

