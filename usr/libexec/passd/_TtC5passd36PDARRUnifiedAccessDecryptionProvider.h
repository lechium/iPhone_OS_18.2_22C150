//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5passd36PDARRUnifiedAccessDecryptionProvider : NSObject
{
    MISSING_TYPE *subcredentialManager;	// 8 = 0x8
}

- (MISSING_TYPE *).cxx_destruct;	// IMP=0x002000000057bd20
- (id)init;	// IMP=0x001000000057bcc0
- (id)initWithSubcredentialManager:(id)arg1;	// IMP=0x001000000057bc70
- (id)associatedRequirementsForRequirement:(id)arg1 context:(id)arg2;	// IMP=0x001000000057c3d0
- (void)requiresMetadataToGenerateKeyMaterial:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000057c330
- (_Bool)requiresNFSESessionForOperation:(unsigned long long)arg1;	// IMP=0x001000000057c320
- (void)existingKeyMaterialForRequirement:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000057c310
- (void)isRegisteredForRequirement:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000057c280
- (void)requirementRegistrationSuccess:(id)arg1 serverKeyMaterial:(id)arg2 forRequirement:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000057c1c0
- (void)requirementRegistrationFailed:(id)arg1 forRequirement:(id)arg2 context:(id)arg3;	// IMP=0x001000000057c1b0
- (void)generateKeyMaterialForRequirement:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000057c120

@end

