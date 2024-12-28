//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class BCActionsListViewController, BCAlertActionItem, BCSBusinessItem, BSAction, NSArray, NSString, NSXPCConnection, UIAlertController;
@protocol BCDeviceStateProtocol, BCPresenterProtocol;

@interface BCChatSuggestRemoteViewController : SBUIRemoteAlertServiceViewController
{
    _Bool _chatSuggestUIPresented;	// 8 = 0x8
    _Bool _phoneNumberUIPresented;	// 9 = 0x9
    _Bool _phoneNumberDisplayLogged;	// 10 = 0xa
    _Bool _chatSuggestRemoteViewControllerDismissed;	// 11 = 0xb
    _Bool _hadBizItemWhenPhoneNumberUIPresented;	// 12 = 0xc
    id <BCDeviceStateProtocol> _deviceState;	// 16 = 0x10
    id <BCPresenterProtocol> _presenter;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    BCActionsListViewController *_actionsViewController;	// 40 = 0x28
    UIAlertController *_alertController;	// 48 = 0x30
    BCAlertActionItem *_headerActionItem;	// 56 = 0x38
    BCSBusinessItem *_bizItem;	// 64 = 0x40
    BSAction *_dialRequestAction;	// 72 = 0x48
    NSArray *_pendingActionItems;	// 80 = 0x50
    unsigned long long _tapId;	// 88 = 0x58
    double _viewControllerDidLoadTime;	// 96 = 0x60
    double _phoneNumberUIPresentedTime;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000007fd4
@property(nonatomic) _Bool hadBizItemWhenPhoneNumberUIPresented; // @synthesize hadBizItemWhenPhoneNumberUIPresented=_hadBizItemWhenPhoneNumberUIPresented;
@property(nonatomic) double phoneNumberUIPresentedTime; // @synthesize phoneNumberUIPresentedTime=_phoneNumberUIPresentedTime;
@property(nonatomic) double viewControllerDidLoadTime; // @synthesize viewControllerDidLoadTime=_viewControllerDidLoadTime;
@property(nonatomic) _Bool chatSuggestRemoteViewControllerDismissed; // @synthesize chatSuggestRemoteViewControllerDismissed=_chatSuggestRemoteViewControllerDismissed;
@property(nonatomic) _Bool phoneNumberDisplayLogged; // @synthesize phoneNumberDisplayLogged=_phoneNumberDisplayLogged;
@property(nonatomic) _Bool phoneNumberUIPresented; // @synthesize phoneNumberUIPresented=_phoneNumberUIPresented;
@property(nonatomic) _Bool chatSuggestUIPresented; // @synthesize chatSuggestUIPresented=_chatSuggestUIPresented;
@property(nonatomic) unsigned long long tapId; // @synthesize tapId=_tapId;
@property(retain, nonatomic) NSArray *pendingActionItems; // @synthesize pendingActionItems=_pendingActionItems;
@property(retain, nonatomic) BSAction *dialRequestAction; // @synthesize dialRequestAction=_dialRequestAction;
@property(retain, nonatomic) BCSBusinessItem *bizItem; // @synthesize bizItem=_bizItem;
@property(retain, nonatomic) BCAlertActionItem *headerActionItem; // @synthesize headerActionItem=_headerActionItem;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) BCActionsListViewController *actionsViewController; // @synthesize actionsViewController=_actionsViewController;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) id <BCPresenterProtocol> presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic) id <BCDeviceStateProtocol> deviceState; // @synthesize deviceState=_deviceState;
- (void)brandedHeaderViewController:(id)arg1 logoFetchingDidFinishForBusinessItem:(id)arg2 success:(_Bool)arg3;	// IMP=0x0010000000007bc2
- (void)brandedHeaderViewController:(id)arg1 logoFetchingWillBeginForBusinessItem:(id)arg2;	// IMP=0x0010000000007ab7
- (long long)_latencyFromViewDidLoad;	// IMP=0x0010000000007a77
- (void)_logPhoneNumberDisplayedIfNecessary;	// IMP=0x00100000000078ec
- (void)fetchBizInfoForDialRequestAction:(id)arg1;	// IMP=0x0010000000007149
- (void)_dismiss;	// IMP=0x0010000000007072
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000007067
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006eb5
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006d4f
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;	// IMP=0x0010000000006d47
- (void)cancel:(id)arg1;	// IMP=0x0010000000006d41
- (id)defaultAlertActionForDialRequestAction:(id)arg1;	// IMP=0x0010000000006a08
- (id)callAlertActionForBizItem:(id)arg1 dialRequestAction:(id)arg2;	// IMP=0x001000000000637e
- (id)messageAlertActionForBizItem:(id)arg1 dialRequestAction:(id)arg2;	// IMP=0x0010000000005e3c
- (id)headerAlertActionForBizItem:(id)arg1;	// IMP=0x0010000000005d31
- (void)configureAlertControllerForDialRequestAction:(id)arg1;	// IMP=0x001000000000596c
- (void)configureAlertControllerForBusinessItem:(id)arg1 dialRequestAction:(id)arg2;	// IMP=0x0010000000005450
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000004ea2
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000004e6c
- (void)viewDidLoad;	// IMP=0x0010000000004dc3
- (id)initWithDeviceState:(id)arg1 presenter:(id)arg2;	// IMP=0x0010000000004d21
- (id)init;	// IMP=0x0010000000004c91

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
