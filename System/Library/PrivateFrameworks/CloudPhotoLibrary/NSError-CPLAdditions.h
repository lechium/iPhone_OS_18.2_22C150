//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (CPLAdditions)
- (int)cplReturnCode;	// IMP=0x00700000000e38f1
- (id)cplReinflatedErrorForXPC;	// IMP=0x00700000000e3815
- (id)_cplReinflatedUserInfoForXPCDidChange:(_Bool *)arg1;	// IMP=0x00700000000e36e7
- (id)cplSafeErrorForXPC;	// IMP=0x00700000000e360b
- (id)_cplSafeUserInfoForXPCDidChange:(_Bool *)arg1;	// IMP=0x00700000000e327f
- (id)cplShortDomainDescription;	// IMP=0x00700000000e31ca
- (id)cplUnderlyingError;	// IMP=0x00700000000e3099
- (id)cplUnderlyingPOSIXError;	// IMP=0x00700000000e2fa9
- (_Bool)isCPLEncryptionError;	// IMP=0x00700000000e2f33
- (_Bool)isCPLThrottlingError;	// IMP=0x00700000000e2eb9
- (_Bool)isCPLOperationDeferredError;	// IMP=0x00700000000e2ea2
- (_Bool)isCPLOperationCancelledError;	// IMP=0x00700000000e2e35
- (_Bool)isCPLError;	// IMP=0x00700000000e2dea
- (_Bool)isCPLErrorWithCode:(long long)arg1;	// IMP=0x00700000000e2d80
@end
