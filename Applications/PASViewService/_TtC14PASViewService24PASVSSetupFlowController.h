//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC14PASViewService24PASVSSetupFlowController : _TtCs12_SwiftObject
{
    MISSING_TYPE *client;	// 16 = 0x10
    MISSING_TYPE *presenter;	// 32 = 0x20
    MISSING_TYPE *targetDevice;	// 40 = 0x28
    MISSING_TYPE *viewDetails;	// 96 = 0x60
    MISSING_TYPE *delegate;	// 136 = 0x88
}

- (void)invalidateClientConnection;	// IMP=0x0020000000004980
- (void)enableManualPairing;	// IMP=0x0010000000004850
- (void)handleScannedCode:(id)arg1;	// IMP=0x00100000000046e0
- (void)activateClientConnection;	// IMP=0x0010000000004460
- (void)initiateClientConnectionIfEligible;	// IMP=0x0010000000003370

@end

