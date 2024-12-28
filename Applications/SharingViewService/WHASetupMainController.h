//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SFDeviceSetupWHASession, SVSCommonNavController, UIStoryboard, WHASetupAuthViewController, WHASetupDoneViewController, WHASetupHomePickerViewController, WHASetupProgressViewController, WHASetupRoomPickerViewController, WHASetupStartViewController;

@interface WHASetupMainController
{
    _Bool _dismissed;	// 24 = 0x18
    int _dismissNotifyToken;	// 28 = 0x1c
    _Bool _homePressed;	// 32 = 0x20
    _Bool _loggedUsageStart;	// 33 = 0x21
    _Bool _loggedUsageDone;	// 34 = 0x22
    SFDeviceSetupWHASession *_setupSession;	// 40 = 0x28
    UIStoryboard *_storyboard;	// 48 = 0x30
    WHASetupAuthViewController *_vcAuth;	// 56 = 0x38
    SVSCommonNavController *_vcNav;	// 64 = 0x40
    WHASetupDoneViewController *_vcDone;	// 72 = 0x48
    WHASetupProgressViewController *_vcProgress;	// 80 = 0x50
    WHASetupHomePickerViewController *_vcHomePicker;	// 88 = 0x58
    WHASetupRoomPickerViewController *_vcRoomPicker;	// 96 = 0x60
    WHASetupStartViewController *_vcStart;	// 104 = 0x68
    unsigned long long _viewAppearedTicks;	// 112 = 0x70
    _Bool _placeholderUI;	// 120 = 0x78
    unsigned int _badPINCount;	// 124 = 0x7c
    int _testMode;	// 128 = 0x80
}

+ (_Bool)_isSecureForRemoteViewService;	// IMP=0x0040000000126869
- (void).cxx_destruct;	// IMP=0x002000000012659d
@property(nonatomic) int testMode; // @synthesize testMode=_testMode;
@property(nonatomic) _Bool placeholderUI; // @synthesize placeholderUI=_placeholderUI;
@property(nonatomic) unsigned int badPINCount; // @synthesize badPINCount=_badPINCount;
- (void)_pairSetupTryPIN:(id)arg1;	// IMP=0x00100000001264a2
- (void)showProgressUI;	// IMP=0x00100000001263d3
- (void)chooseRoom:(id)arg1;	// IMP=0x00100000001263b6
- (void)showRoomPickerUI:(id)arg1 firstSuggestedIndex:(long long)arg2;	// IMP=0x001000000012629e
- (void)chooseHome:(id)arg1;	// IMP=0x0010000000126281
- (void)showHomePickerUI:(id)arg1 defaultIndex:(long long)arg2;	// IMP=0x0010000000126169
- (void)showDoneUI:(int)arg1 error:(id)arg2;	// IMP=0x0010000000125ffa
- (void)showDoneUI:(int)arg1;	// IMP=0x0010000000125fe6
- (void)showAuthUIWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x0010000000125f00
- (void)_sessionHandleProgress:(unsigned int)arg1 info:(id)arg2;	// IMP=0x0010000000125354
- (void)_sessionStart;	// IMP=0x0010000000125029
- (void)logUsageDone:(int)arg1;	// IMP=0x0010000000124d36
- (void)logUsageStart:(int)arg1;	// IMP=0x0010000000124a85
- (void)_handleHomeButtonPressed;	// IMP=0x0010000000124a19
- (void)handleButtonActions:(id)arg1;	// IMP=0x001000000012487a
- (void)dismiss:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000124759
- (void)dismiss:(int)arg1;	// IMP=0x0010000000124745
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001244db
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000124241
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000124179
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000123f26

@end
