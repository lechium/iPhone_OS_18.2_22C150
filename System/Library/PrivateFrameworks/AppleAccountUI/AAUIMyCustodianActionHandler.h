//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AALocalContactInfo, AAUIDTOHelper, AAUIRecoveryFactorController, AAUISpinnerManager, AIDAAccountManager, NSString, OBNavigationController, UIViewController;

__attribute__((visibility("hidden")))
@interface AAUIMyCustodianActionHandler : NSObject
{
    AAUISpinnerManager *_spinnerManager;	// 8 = 0x8
    AIDAAccountManager *_accountManager;	// 16 = 0x10
    OBNavigationController *_recoveryContactRemovedNavigationController;	// 24 = 0x18
    UIViewController *_presentingViewController;	// 32 = 0x20
    AAUIRecoveryFactorController *_recoveryFactorController;	// 40 = 0x28
    AAUIDTOHelper *_dtoHelper;	// 48 = 0x30
    AALocalContactInfo *_contact;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000007b460
@property(readonly, nonatomic) AALocalContactInfo *contact; // @synthesize contact=_contact;
- (void)_displayRatchetGenericErrorAlert;	// IMP=0x000000000007b3fd
- (void)_displayCustodianDeleteNotAllowedAlert;	// IMP=0x000000000007b3a4
- (void)_stopSpinners;	// IMP=0x000000000007b2f6
- (void)_updateUIAfterDeleteWithHasRecoveryContact:(_Bool)arg1 hasRecoveryKey:(_Bool)arg2;	// IMP=0x000000000007b05b
- (void)_checkRecoveryContactAndRecoveryKeyStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000000007acff
- (void)_setupRecoveryKey;	// IMP=0x000000000007ab58
- (void)_addRecoveryContact;	// IMP=0x000000000007aacb
- (void)_dismissRecoveryContactRemovedScreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007aa28
- (void)_popToAccountRecoveryScreen;	// IMP=0x000000000007a9dd
- (void)_dismissAndStartHealthCheck;	// IMP=0x000000000007a9af
- (void)_performHealthCheck;	// IMP=0x000000000007a917
- (void)_dismissAndPopFromRecoveryContactRemovedScreen;	// IMP=0x000000000007a8b5
- (_Bool)_isWalrusEnabled;	// IMP=0x000000000007a7fe
- (void)recoveryFactorController:(id)arg1 didFinishAddingRecoveryContactWithError:(id)arg2;	// IMP=0x000000000007a7ec
- (id)_recoveryFactorController;	// IMP=0x000000000007a775
- (void)_doCustodianRemove;	// IMP=0x000000000007a433
- (void)_continueDoingDestructiveAction:(id)arg1 specifier:(id)arg2 account:(id)arg3;	// IMP=0x000000000007a0f7
- (void)doDestructiveAction:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000079b19
- (id)initWithAccountManager:(id)arg1 localContact:(id)arg2;	// IMP=0x0000000000079a23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

