//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthorizationStoreManager;
@protocol AKSharedAccountsStoring;

@interface AKApplicationAuthorizationController : NSObject
{
    AKAuthorizationStoreManager *_storeManager;	// 8 = 0x8
    id <AKSharedAccountsStoring> _sharedAccountsStorageController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a056b
- (void)_broadcastCredentialStateChange:(long long)arg1 forApplicationWithClientID:(id)arg2 withHandlerBundleID:(id)arg3;	// IMP=0x00100000000a03b0
- (void)_broadcastCredentialStateChange:(long long)arg1 forApplicationWithClientID:(id)arg2;	// IMP=0x00100000000a02a5
- (void)_notifyCredentialStateChange:(long long)arg1 forApplicationWithClientID:(id)arg2;	// IMP=0x001000000009ffd6
- (void)_credentialStateDidChange:(long long)arg1 forApplicationWithClientID:(id)arg2 clientIDsInKeychain:(id)arg3;	// IMP=0x001000000009fe6a
- (void)_credentialStateDidChange:(long long)arg1 forApplicationWithClientID:(id)arg2;	// IMP=0x001000000009fe03
- (void)_processCredentialStateChanges:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009fb50
- (void)_processCredentialStateChanges:(id)arg1;	// IMP=0x001000000009fa44
- (_Bool)revokeAuthorizationForAllApplicationsWithAltDSID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000009f8a9
- (void)removeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009f893
- (void)revokeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009f76a
- (void)storeAuthorization:(id)arg1 withAltDSID:(id)arg2 forClient:(id)arg3;	// IMP=0x001000000009f6d1
- (void)updateAuthorizationListWithMetadataInfo:(id)arg1 withAltDSID:(id)arg2;	// IMP=0x001000000009f665
- (void)updateAuthorizationListWithMetadataInfo:(id)arg1 withAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009f548
- (id)currentAuthorizationListVersionWithAltDSID:(id)arg1;	// IMP=0x001000000009f532
- (id)initWithStoreManager:(id)arg1 sharedAccountsStorageController:(id)arg2;	// IMP=0x001000000009f4d3
- (id)initWithStoreManager:(id)arg1;	// IMP=0x001000000009f444
- (id)init;	// IMP=0x001000000009f430

@end

