//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDAccountManager, PDApplyManager, PDDatabaseManager, PDDiscoveryManager, PDExpressPassManager, PDFamilyCircleManager, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator, PDTransitNotificationService;

@interface PDRuleManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDAccountManager *_accountManager;	// 16 = 0x10
    PDApplyManager *_applyManager;	// 24 = 0x18
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 32 = 0x20
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 40 = 0x28
    PDTransitNotificationService *_transitNotificationService;	// 48 = 0x30
    PDFamilyCircleManager *_familyCircleManager;	// 56 = 0x38
    PDExpressPassManager *_expressPassManager;	// 64 = 0x40
    PDDiscoveryManager *_discoveryManager;	// 72 = 0x48
    _Bool _isUserPropertyOverrideEnabled;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000003fc243
@property(retain, nonatomic) PDDiscoveryManager *discoveryManager; // @synthesize discoveryManager=_discoveryManager;
- (void)deleteRuleWithIdentifier:(id)arg1;	// IMP=0x00100000003fc212
- (void)insertRule:(id)arg1;	// IMP=0x00100000003fc1f3
- (void)rulesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003fc192
- (void)overrideValues:(id)arg1 forUserProperties:(id)arg2 withParameters:(id)arg3;	// IMP=0x00100000003fbb74
- (void)getCurrentEnvironmentForKeys:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003fb9dc
- (id)evaluateUserProperty:(id)arg1 withParameter:(id)arg2 usingEnvironment:(id)arg3;	// IMP=0x00100000003fa91c
- (void)fetchUserProperties:(id)arg1 withParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003fa3d1
- (void)evaluateRulesWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000003f9433
- (void)updateWithRules:(id)arg1;	// IMP=0x00100000003f9414
- (id)initWithDatabaseManager:(id)arg1 accountManager:(id)arg2 applyManager:(id)arg3 peerPaymentWebServiceCoordinator:(id)arg4 paymentWebServiceCoordinator:(id)arg5 transitNotificationService:(id)arg6 familyCircleManager:(id)arg7 expressPassManager:(id)arg8;	// IMP=0x00100000003f92a2
- (id)init;	// IMP=0x00100000003f9294

@end
