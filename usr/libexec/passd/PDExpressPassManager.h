//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSString, PDAssertionManager, PDDatabaseManager, PDNFCInitiatedPairingManager, PDNotificationStreamManager, PDRemoteInterfacePresenter, PKExpressTransactionState, PKSecureElement;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface PDExpressPassManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDAssertionManager *_assertionManager;	// 16 = 0x10
    PKSecureElement *_secureElement;	// 24 = 0x18
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 32 = 0x20
    PDNotificationStreamManager *_notificationStreamManager;	// 40 = 0x28
    NSObject<OS_os_transaction> *_databaseRestoreTransaction;	// 48 = 0x30
    NSMutableDictionary *_expressPassesToRestore;	// 56 = 0x38
    _Bool _databaseWillRestore;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_accessQueue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_replyQueue;	// 80 = 0x50
    _Atomic _Bool _setup;	// 88 = 0x58
    _Bool _expressModesEnableable;	// 89 = 0x59
    NSDictionary *_expressState;	// 96 = 0x60
    struct os_unfair_lock_s _lock;	// 104 = 0x68
    struct os_unfair_lock_s _expressSessionLock;	// 108 = 0x6c
    PKExpressTransactionState *_expressTransactionState;	// 112 = 0x70
    struct os_unfair_lock_s _observersLock;	// 120 = 0x78
    NSHashTable *_observers;	// 128 = 0x80
    PDNFCInitiatedPairingManager *_nfcPairingManager;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000001c4499
- (void)assertionManager:(id)arg1 didInvalidateAssertion:(id)arg2;	// IMP=0x00100000001c447a
- (void)assertionManager:(id)arg1 didAcquireAssertion:(id)arg2;	// IMP=0x00100000001c4474
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x00100000001c446c
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x00100000001c4452
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x00100000001c4437
- (id)createCurrentNotificationRegistrationState;	// IMP=0x00100000001c43df
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000001c43d9
- (void)receivedSecureExpressTransactionEvent:(id)arg1;	// IMP=0x00100000001c1941
- (void)accessTerminalDidUnlockForType:(long long)arg1 forAppletIdentifier:(id)arg2 keyIdentifier:(id)arg3 withContent:(id)arg4;	// IMP=0x00100000001c1551
- (void)accessTerminalDidLockForType:(long long)arg1 forAppletIdentifier:(id)arg2 keyIdentifier:(id)arg3 withContent:(id)arg4;	// IMP=0x00100000001c13ed
- (void)secureElementRadioStateChanged;	// IMP=0x00100000001c13e7
- (void)secureElementExpressConfigurationDidFail;	// IMP=0x00100000001c13a1
- (void)secureElementDidRunScriptsFromTSM;	// IMP=0x00100000001c1397
- (void)secureElementExpressConfigurationNeedsUpdate;	// IMP=0x00100000001c138d
- (id)init;	// IMP=0x00100000001bb27c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

