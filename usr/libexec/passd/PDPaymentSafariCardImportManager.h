//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PDDatabaseManager, PKPaymentProvisioningController, PKPaymentWebService;
@protocol OS_dispatch_queue;

@interface PDPaymentSafariCardImportManager : NSObject
{
    PKPaymentWebService *_webService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_webServiceQueue;	// 16 = 0x10
    PDDatabaseManager *_databaseManager;	// 24 = 0x18
    NSMutableArray *_eligibilityItems;	// 32 = 0x20
    PKPaymentProvisioningController *_provisioningController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000007f0a8
- (void)_associateCredentialsForItem:(id)arg1;	// IMP=0x001000000007e32d
- (void)_processEligibilityItem:(id)arg1;	// IMP=0x001000000007dc7f
- (void)_cleanupQueueResources;	// IMP=0x001000000007dc46
- (void)_popEligibilityQueue;	// IMP=0x001000000007da72
- (void)processSafariCredentialEligibility:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007d718
- (id)initWithWebService:(id)arg1 webServiceQueue:(id)arg2 databaseManager:(id)arg3;	// IMP=0x001000000007d660

@end

