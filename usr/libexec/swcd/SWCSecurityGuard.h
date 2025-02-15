//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SWCSecurityGuard : NSObject
{
}

+ (id)new;	// IMP=0x0020000000023765
+ (id)sharedSecurityGuard;	// IMP=0x0010000000023700
- (_Bool)verifyTrust:(struct __SecTrust *)arg1 allowInstalledRootCertificates:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000023bb7
- (_Bool)verifyTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x0010000000023ba0
- (id)JSONObjectWithSignedJSONData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000023793
- (id)init;	// IMP=0x001000000002376e
- (_Bool)_isSystemTrusted:(struct __SecTrust *)arg1;	// IMP=0x0010000000024ca3
- (_Bool)_verifyExtendedValidationOfTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x0010000000024a62
- (id)_errorForUntrustedRootCertificateOfTrust:(struct __SecTrust *)arg1;	// IMP=0x00100000000247f2
- (optional_252cd4e3)_evaluateTrust:(struct __SecTrust *)arg1 allowingKeychains:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000243e8
- (optional_252cd4e3)_evaluateTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x0010000000023e97
- (id)_init;	// IMP=0x0010000000023e68

@end

