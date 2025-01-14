//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAMessagesInviteContext, AAUIMessagesInviteConfigurationController, AAUIOBWelcomeController, AAUISpinnerManager, AIDAAccountManager, CDPContext, NSString, UINavigationController;
@protocol AAUIInviteMessageFlowControllerDelegate, AAUIOBWelcomeControllerViewModelProtocol;

__attribute__((visibility("hidden")))
@interface AAUIInviteMessageFlowController : NSObject
{
    unsigned long long _flow;	// 8 = 0x8
    AAMessagesInviteContext *_context;	// 16 = 0x10
    NSString *_recipientHandle;	// 24 = 0x18
    id <AAUIOBWelcomeControllerViewModelProtocol> _defaultMessageViewModel;	// 32 = 0x20
    id <AAUIOBWelcomeControllerViewModelProtocol> _messageSentViewModel;	// 40 = 0x28
    AAUIMessagesInviteConfigurationController *_messageComposer;	// 48 = 0x30
    AAUISpinnerManager *_spinnerManager;	// 56 = 0x38
    AAUIOBWelcomeController *_allSetVC;	// 64 = 0x40
    CDPContext *_cdpContext;	// 72 = 0x48
    _Bool _isADPUpsellFlow;	// 80 = 0x50
    _Bool _isFamilyMember;	// 81 = 0x51
    _Bool _hideCancel;	// 82 = 0x52
    UINavigationController *_navigationController;	// 88 = 0x58
    id <AAUIInviteMessageFlowControllerDelegate> _delegate;	// 96 = 0x60
    NSString *_telemetryFlowID;	// 104 = 0x68
    AIDAAccountManager *_accountManager;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000077b0f
@property(nonatomic) __weak AIDAAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(copy, nonatomic) NSString *telemetryFlowID; // @synthesize telemetryFlowID=_telemetryFlowID;
@property(nonatomic) _Bool hideCancel; // @synthesize hideCancel=_hideCancel;
@property(nonatomic) __weak id <AAUIInviteMessageFlowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)inviteController:(id)arg1 didFinishWithStatus:(unsigned long long)arg2 recipients:(id)arg3 userInfo:(id)arg4 error:(id)arg5;	// IMP=0x0000000000077809
- (void)_sendEscapeOfferSelectedEvent:(id)arg1;	// IMP=0x0000000000077687
- (void)_sendRecoveryContactSendMessageLandingEvent:(id)arg1;	// IMP=0x00000000000774e0
- (id)_bubbleImageForFlow:(unsigned long long)arg1;	// IMP=0x000000000007740b
- (void)_sendDefaultMessage;	// IMP=0x0000000000076fbc
- (void)_messageSentSecondaryActionTapped;	// IMP=0x0000000000076ed9
- (void)_finishMessageInvitationFlow;	// IMP=0x0000000000076d38
- (void)_cancelMessageInvitationFlow;	// IMP=0x0000000000076baf
- (void)_sendTelemetryEventWithSuccess:(id)arg1 didSucceed:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000076ac9
- (void)_invitationWasSent;	// IMP=0x00000000000767fd
- (void)_postAdpUpsellCFUCustodianInviteSentEvent;	// IMP=0x0000000000076724
- (void)_postAdpUpsellCFUFamilyCustodianAddedEvent;	// IMP=0x000000000007664b
- (void)_showInvitationSent;	// IMP=0x00000000000763dd
- (void)_showMessagesComposeController;	// IMP=0x0000000000076303
- (void)_showDefaultMessageView;	// IMP=0x00000000000760fc
- (void)_hideActivitySpinnerInNavigationBar;	// IMP=0x00000000000760be
- (void)_showActivitySpinnerInNavigationBar;	// IMP=0x0000000000075fea
- (void)start;	// IMP=0x0000000000075f74
- (id)initWithContext:(id)arg1 flow:(unsigned long long)arg2 navigationController:(id)arg3 defaultMessageViewModel:(id)arg4 messageSentViewModel:(id)arg5 isADPUpsellFlow:(_Bool)arg6 isFamilyMember:(_Bool)arg7 cdpContext:(id)arg8;	// IMP=0x0000000000075e00
- (id)initWithContext:(id)arg1 flow:(unsigned long long)arg2 navigationController:(id)arg3 defaultMessageViewModel:(id)arg4 messageSentViewModel:(id)arg5;	// IMP=0x0000000000075d1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

