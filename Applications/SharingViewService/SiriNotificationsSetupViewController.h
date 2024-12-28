//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class SiriNotificationsSetupModel, SiriNotificationsSetupViewModel;
@protocol SiriNotificationsSetupProxPairingControllerProxy;

@interface SiriNotificationsSetupViewController : PRXCardContentViewController
{
    id <SiriNotificationsSetupProxPairingControllerProxy> _mainController;	// 8 = 0x8
    Class _siriControllerClass;	// 16 = 0x10
    SiriNotificationsSetupModel *_model;	// 24 = 0x18
    SiriNotificationsSetupViewModel *_viewModel;	// 32 = 0x20
}

+ (id)viewModelForModel:(id)arg1;	// IMP=0x00400000000ed1f0
+ (id)defaultTitleFont;	// IMP=0x00100000000ed1c4
+ (id)defaultTitleColor;	// IMP=0x00100000000ed195
+ (id)defaultSubtitleFont;	// IMP=0x00100000000ed0b6
+ (_Bool)defaultSecondaryActionUsesLegacyStyling;	// IMP=0x00100000000ed0ae
+ (long long)defaultSecondaryActionStyle;	// IMP=0x00100000000ed0a3
+ (_Bool)defaultPrimaryActionUsesLegacyStyling;	// IMP=0x00100000000ed09b
+ (long long)defaultPrimaryActionStyle;	// IMP=0x00100000000ed093
+ (long long)defaultDismissActionStyle;	// IMP=0x00100000000ed08b
+ (id)defaultDismissActionTitle;	// IMP=0x00100000000ed07e
+ (id)locTableForViewType:(long long)arg1;	// IMP=0x00100000000ecffd
+ (id)locIntermediateStringForViewType:(long long)arg1;	// IMP=0x00100000000ecf7c
+ (id)modelForUserInfo:(id)arg1;	// IMP=0x00100000000ecf18
+ (id)modelForUserInfo:(id)arg1 siriControllerClass:(Class)arg2;	// IMP=0x00100000000ecd07
- (void).cxx_destruct;	// IMP=0x00200000000ecac1
@property(retain, nonatomic) SiriNotificationsSetupViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SiriNotificationsSetupModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) Class siriControllerClass; // @synthesize siriControllerClass=_siriControllerClass;
@property(nonatomic) __weak id <SiriNotificationsSetupProxPairingControllerProxy> mainController; // @synthesize mainController=_mainController;
- (void)announceCallsEnabledDonateTip;	// IMP=0x00100000000eca33
- (void)transitionToNextCardIfNecessary;	// IMP=0x00100000000ec975
- (void)updateAnnounceCallsStateForUserOptedIn;	// IMP=0x00100000000ec8be
- (void)handleDoNotAnnounceButton;	// IMP=0x00100000000ec7a9
- (void)handleDoNotForMessages;	// IMP=0x00100000000ec71e
- (void)handleContinueButton;	// IMP=0x00100000000ec5e5
- (void)handleContinueForCalls;	// IMP=0x00100000000ec5d3
- (void)handleContinueForMessages;	// IMP=0x00100000000ec542
- (void)handleDismissButton;	// IMP=0x00100000000ec3e0
- (void)handleDismissForCalls;	// IMP=0x00100000000ec3ce
- (void)handleDismissForMessages;	// IMP=0x00100000000ec355
- (void)logDismissEventForAnnounceMessagesToDuet;	// IMP=0x00100000000ec129
- (void)setUpActions;	// IMP=0x00100000000ebcb0
- (void)setUpSubtitle;	// IMP=0x00100000000ebb85
- (void)setUpTitle;	// IMP=0x00100000000eba12
- (id)extendedUserInfo;	// IMP=0x00100000000eb8d3
- (id)deviceName;	// IMP=0x00100000000eb7c9
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000eb747
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000eb5a7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000eb4c3
- (void)viewDidLoad;	// IMP=0x00100000000eaf27
- (id)initWithSiriControllerClass:(Class)arg1;	// IMP=0x00100000000eaed2
- (id)init;	// IMP=0x00100000000eaea4

@end
