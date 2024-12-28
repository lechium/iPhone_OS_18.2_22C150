//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class AAUIOBWelcomeController, NSDictionary, NSObject, NSString, NSXPCConnection;
@protocol AAFlowPresenterHostProtocol, AAUIOBWelcomeControllerViewModelProtocol, OS_xpc_object;

@interface AAUIRemoteViewController : SBUIRemoteAlertServiceViewController
{
    NSXPCConnection *_lookupConnection;	// 8 = 0x8
    _Bool _isCustodianFlow;	// 16 = 0x10
    NSDictionary *_remoteContextInfo;	// 24 = 0x18
    NSObject<OS_xpc_object> *_xpcEndpoint;	// 32 = 0x20
    id <AAUIOBWelcomeControllerViewModelProtocol> _viewModel;	// 40 = 0x28
    AAUIOBWelcomeController *_welcomeController;	// 48 = 0x30
    id <AAFlowPresenterHostProtocol> _hostProxy;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000000607c
@property(retain, nonatomic) id <AAFlowPresenterHostProtocol> hostProxy; // @synthesize hostProxy=_hostProxy;
@property(retain, nonatomic) AAUIOBWelcomeController *welcomeController; // @synthesize welcomeController=_welcomeController;
@property(retain, nonatomic) id <AAUIOBWelcomeControllerViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint; // @synthesize xpcEndpoint=_xpcEndpoint;
@property(retain, nonatomic) NSDictionary *remoteContextInfo; // @synthesize remoteContextInfo=_remoteContextInfo;
- (void)welcomeViewController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000005fae
- (void)_goToAccountBeneficiarySettings;	// IMP=0x0010000000005edb
- (void)_goToAccountRecoverySettings;	// IMP=0x0010000000005e08
- (void)_dismissBeneficiaryInvitationReminderFollowUp;	// IMP=0x0010000000005bdc
- (void)_dismissCustodianInvitationReminderFollowUp;	// IMP=0x00100000000059f4
- (void)_showInheritanceInvitationAcceptedView;	// IMP=0x00100000000056f4
- (void)_showCustodianInvitationAcceptedView;	// IMP=0x00100000000053f4
- (void)_respondToCustodianInvitationWithResponse:(_Bool)arg1;	// IMP=0x00100000000051b3
- (void)_declineCustodianshipInvite;	// IMP=0x001000000000519f
- (void)_acceptCustodianshipInvite;	// IMP=0x0010000000004f7c
- (void)_respondToInheritanceInvitationWithResponse:(_Bool)arg1;	// IMP=0x0010000000004d6a
- (void)_declineInheritanceInvite;	// IMP=0x0010000000004cf2
- (void)_acceptInheritanceInvite;	// IMP=0x0010000000004b81
- (void)_checkManateeAvailabilityForFlowType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000499e
- (void)dealloc;	// IMP=0x0010000000004922
- (void)_invalidateLookupConnection;	// IMP=0x00100000000048ea
- (void)_main_dismissAndExit;	// IMP=0x00100000000047d2
- (void)_dismissAndExit;	// IMP=0x0010000000004771
- (void)notifyFlowCompletionToExitScene;	// IMP=0x0010000000004574
- (void)endUIService;	// IMP=0x0010000000004537
- (void)_callCompletionWithError:(id)arg1;	// IMP=0x00100000000044c7
- (void)_legacyContactExitWithoutSettings;	// IMP=0x00100000000044b3
- (void)handleButtonActions:(id)arg1;	// IMP=0x00100000000042b3
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004179
- (void)_setupRemoteProxy;	// IMP=0x0010000000004074
- (void)handleCancellation;	// IMP=0x001000000000401a
- (void)setUpHostProxy;	// IMP=0x0010000000003e66
- (void)setUpLookupConnection:(id)arg1;	// IMP=0x0010000000003d33
- (id)remoteObjectInterface;	// IMP=0x0010000000003d1a
- (void)prepareViewServiceForPresentation;	// IMP=0x0010000000003b75
- (void)_prepareMessagesInvitation;	// IMP=0x00100000000036a0
- (void)_buildViewModelWithContextInfo:(id)arg1;	// IMP=0x0010000000003149
- (void)_showInvitedAsFlow;	// IMP=0x0010000000002e2c
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000002e24
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000002dca
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000002c92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
