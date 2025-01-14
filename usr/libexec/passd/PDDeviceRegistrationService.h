//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCService.h>

@class NSString, PDDeviceRegistrationServiceCoordinator, PKEntitlementWhitelist;

@interface PDDeviceRegistrationService : PDXPCService
{
    PKEntitlementWhitelist *_whitelist;	// 8 = 0x8
    PDDeviceRegistrationServiceCoordinator *_deviceRegistrationServiceCoordinator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000f84d
@property(retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator; // @synthesize deviceRegistrationServiceCoordinator=_deviceRegistrationServiceCoordinator;
- (void)performDeviceRegistrationReturningContextForReason:(id)arg1 brokerURL:(id)arg2 actionType:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000f650
- (void)performRegistrationForRegion:(id)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f4a2
- (void)performRegistrationForMemberOfRegions:(id)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f2f4
- (id)initWithConnection:(id)arg1 server:(id)arg2;	// IMP=0x001000000000f1f5
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000000f1e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

