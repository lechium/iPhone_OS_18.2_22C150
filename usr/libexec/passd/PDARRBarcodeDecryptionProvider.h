//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDBarcodeCertificateManager;

@interface PDARRBarcodeDecryptionProvider : NSObject
{
    PDBarcodeCertificateManager *_barcodeCertManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001fa79c
- (void)requiresMetadataToGenerateKeyMaterial:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001fa78a
- (_Bool)requiresNFSESessionForOperation:(unsigned long long)arg1;	// IMP=0x00100000001fa77e
- (void)existingKeyMaterialForRequirement:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001fa76c
- (void)isRegisteredForRequirement:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001fa75c
- (void)requirementRegistrationSuccess:(id)arg1 serverKeyMaterial:(id)arg2 forRequirement:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001fa4d5
- (void)requirementRegistrationFailed:(id)arg1 forRequirement:(id)arg2 context:(id)arg3;	// IMP=0x00100000001fa4cf
- (void)generateKeyMaterialForRequirement:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001fa4bb
- (id)initWithBarcodeCertificateManager:(id)arg1;	// IMP=0x00100000001fa450
- (id)init;	// IMP=0x00100000001fa442

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

