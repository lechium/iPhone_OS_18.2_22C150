//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCService.h>

@class NSObject, NSString, PDPaymentWebServiceCoordinator, PKEntitlementWhitelist;
@protocol OS_dispatch_queue;

@interface PDTrustedDeviceEnrollmentInfoProvider : PDXPCService
{
    PKEntitlementWhitelist *_whitelist;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_processingQueue;	// 16 = 0x10
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000004e13f8
@property(retain, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator; // @synthesize paymentWebServiceCoordinator=_paymentWebServiceCoordinator;
- (void)remoteTrustedDeviceEnrollmentSignatureWithAccountDSID:(id)arg1 sessionData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000004e12ce
- (void)localTrustedDeviceEnrollmentSignatureWithAccountDSID:(id)arg1 sessionData:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000004e0ee0
- (void)trustedDeviceEnrollmentSignatureForDevice:(unsigned long long)arg1 accountDSID:(id)arg2 sessionData:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000004e0c44
- (void)trustedDeviceEnrollmentInfoWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000004e0a3d
- (id)initWithConnection:(id)arg1 server:(id)arg2;	// IMP=0x00100000004e090a
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000004e08fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

