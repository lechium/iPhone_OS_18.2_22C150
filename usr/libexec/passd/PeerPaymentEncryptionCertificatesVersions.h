//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PeerPaymentEncryptionCertificatesVersions
{
}

+ (id)_propertySettersForEncryptionCertificatesVersions;	// IMP=0x004000000011eb6e
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x001000000011ea53
+ (void)updatePeerPaymentEncryptionCertificatesVersions:(id)arg1 forAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000011e915
+ (void)deletePeerPaymentEncryptionCertificatesVersionsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000011e87c
+ (id)insertPeerPaymentEncryptionCertificatesVersions:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000011e7ff
+ (id)peerPaymentEncryptionCertificatesVersionsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x001000000011e696
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000011e667
+ (id)databaseTable;	// IMP=0x001000000011e65a
- (id)peerPaymentEncryptionCertificatesVersions;	// IMP=0x004000000011ec36
- (id)_commonDictionaryForEncryptionCertificatesVersions:(id)arg1;	// IMP=0x001000000011eac4
- (void)updatePeerPaymentEncryptionCertificatesVersions:(id)arg1;	// IMP=0x001000000011ea07
- (id)initWithPeerPaymentEncryptionCertificatesVersions:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000011e740

@end

