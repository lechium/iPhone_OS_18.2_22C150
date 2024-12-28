//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDP/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol CDPProtectedCloudStorageProxy <NSObject>
- (_Bool)setWalrusEnabled:(_Bool)arg1 accountIdentifier:(NSString *)arg2 options:(NSDictionary *)arg3 error:(id *)arg4;
- (_Bool)repairWalrusWithAccountIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (_Bool)isWalrusEnabledWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)pcsRestoreLocalBackup:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)pcsSynchronizeKeysWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (void)edpPCSResetProtectedData:(NSDictionary *)arg1 completion:(void (^)(unsigned long long, unsigned long long, NSDictionary *, NSError *))arg2;
- (void)edpPCSGuitarfishChangePassword:(NSDictionary *)arg1 completion:(void (^)(unsigned long long, unsigned long long, NSError *))arg2;
- (void)edpPCSGuitarfishGetRecoveryTokenInfo:(NSDictionary *)arg1 completion:(void (^)(unsigned long long, NSArray *, NSString *, NSError *))arg2;
- (void)kcdp_PCSGuitarfishRepairIdentities:(NSDictionary *)arg1 completion:(void (^)(unsigned long long, _Bool, NSError *))arg2;
- (void)edpPCSGuitarfishRepairIdentities:(NSDictionary *)arg1 completion:(void (^)(unsigned long long, _Bool, NSError *))arg2;
- (void)kcdp_PCSGuitarfishValidateIdentities:(NSDictionary *)arg1 completion:(void (^)(unsigned long long, unsigned long long, NSDictionary *, NSError *))arg2;
- (void)edpPCSGuitarfishValidateIdentities:(NSDictionary *)arg1 completion:(void (^)(unsigned long long, unsigned long long, NSDictionary *, NSError *))arg2;
- (void)kcdp_PCSGuitarfishSetupIdentities:(NSDictionary *)arg1 completion:(void (^)(unsigned long long, NSArray *, NSError *))arg2;
- (void)edpPCSGuitarfishSetupIdentities:(NSDictionary *)arg1 completion:(void (^)(unsigned long long, NSArray *, NSError *))arg2;
- (_Bool)pcsIdentityMigrateToiCDPWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
@end
