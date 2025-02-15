//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSUUID;

@protocol MCXPCProtocol <NSObject>
- (void)debugRescheduleBackgroundActivity:(long long)arg1 startDate:(NSDate *)arg2 gracePeriod:(NSNumber *)arg3 repeatingInterval:(NSNumber *)arg4 completion:(void (^)(NSError *))arg5;
- (void)effectiveValuesForWatchUnionSetting:(NSString *)arg1 pairingID:(NSUUID *)arg2 pairingDataStore:(NSString *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)effectiveValuesForWatchIntersectionSetting:(NSString *)arg1 pairingID:(NSUUID *)arg2 pairingDataStore:(NSString *)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)effectiveValueForWatchSetting:(NSString *)arg1 pairingID:(NSUUID *)arg2 pairingDataStore:(NSString *)arg3 completion:(void (^)(NSNumber *, NSError *))arg4;
- (void)effectiveBoolValueForWatchSetting:(NSString *)arg1 pairingID:(NSUUID *)arg2 pairingDataStore:(NSString *)arg3 completion:(void (^)(NSNumber *, NSError *))arg4;
- (void)updateMDMEnrollmentInfoForPairingWatch:(NSDictionary *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)applyPairingWatchMDMEnrollmentData:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchStagedMDMEnrollmentDeclarationKeysForPairingWatchWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)fetchStagedMDMEnrollmentDataForPairingWatchWithPairingToken:(NSData *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)fetchStagedMDMEnrollmentDataForPairingWatchWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)unstageMDMEnrollmentInfoForPairingWatchWithCompletion:(void (^)(NSError *))arg1;
- (void)stageMDMEnrollmentInfoForPairingWatchWithProfileData:(NSData *)arg1 orServiceURL:(NSString *)arg2 anchorCertificates:(NSArray *)arg3 supervised:(_Bool)arg4 declarationKeys:(NSSet *)arg5 declarationConfiguration:(NSDictionary *)arg6 completion:(void (^)(NSError *))arg7;
- (void)managingOrganizationInformationWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)createMDMUnlockTokenIfNeededWithPasscode:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)isPasscodeCompliantWithNamedPolicy:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)mayShareToAirDropForOriginatingAppBundleID:(NSString *)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)mayShareToMessagesForOriginatingAppBundleID:(NSString *)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)cancelFeaturePromptWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)showFeaturePromptForSetting:(NSString *)arg1 configurationUUID:(NSString *)arg2 promptOptions:(NSDictionary *)arg3 promptIdentifier:(NSString *)arg4 completion:(void (^)(int, NSError *))arg5;
- (void)shutDownWithCompletion:(void (^)(NSError *))arg1;
- (void)recomputeProfileRestrictionsWithCompletionBlock:(void (^)(NSError *))arg1;
- (void)validateAppBundleIDs:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setupAssistantDidFinishCompletion:(void (^)(NSError *))arg1;
- (void)hasMailAccountsWithFilteringEnabled:(_Bool)arg1 sourceAccountManagement:(int)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(NSArray *)arg1 hostAppBundleID:(NSString *)arg2 accountIsManaged:(_Bool)arg3 completion:(void (^)(NSArray *))arg4;
- (void)setUserBookmarks:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)storeActivationRecord:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)createActivationLockBypassCodeWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)removeSetAsideCloudConfigurationProfileWithCompletion:(void (^)(NSError *))arg1;
- (void)removePostSetupAutoInstallSetAsideProfileWithCompletion:(void (^)(NSError *))arg1;
- (void)restoreCloudConfigAndMDMProfileFromSetAsideDataWithCompletion:(void (^)(NSError *))arg1;
- (void)cloudConfigurationStoreDetails:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)reducedMachineInfoDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)rereadManagedAppAttributesWithCompletion:(void (^)(NSError *))arg1;
- (void)markStoredProfileAsInstalledWithCompletion:(void (^)(NSError *))arg1;
- (void)storedProfileDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)storeProfileData:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeExpiredProfilesWithCompletion:(void (^)(NSError *))arg1;
- (void)setUserInfo:(NSDictionary *)arg1 forClientUUID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)resetAllSettingsToDefaultsIsUserInitiated:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)recomputePerClientUserComplianceWithCompletion:(void (^)(NSError *))arg1;
- (void)recomputeUserComplianceWarningWithCompletion:(void (^)(NSError *))arg1;
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(NSDate *)arg1 completion:(void (^)(NSError *))arg2;
- (void)notifyStartComplianceTimer:(NSDate *)arg1 completion:(void (^)(NSError *))arg2;
- (void)areBundlesBlocked:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)isBundleBlocked:(NSString *)arg1 completion:(void (^)(_Bool, NSData *, NSNumber *, NSError *))arg2;
- (void)provisiongProfileUUIDsForSignerIdentity:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)addTrustedCodeSigningIdentitiesForProvisioningProfileUUID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)removeProvisioningProfileWithUUID:(NSString *)arg1 managingProfileIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)installProvisioningProfileData:(NSData *)arg1 managingProfileIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)storeCertificateData:(NSData *)arg1 forIPCUIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)openSensitiveURL:(NSString *)arg1 unlock:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeValueSetting:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)removeBoolSetting:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setParametersForSettingsByType:(NSDictionary *)arg1 configurationUUID:(NSString *)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(NSString *)arg5 credentialSet:(NSData *)arg6 completion:(void (^)(NSError *))arg7;
- (void)migrateCleanupMigratorWithContext:(int)arg1 completion:(void (^)(NSError *))arg2;
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)managedWiFiNetworkNamesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)managedSystemConfigurationServiceIDsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)removeOrphanedClientRestrictionsWithCompletion:(void (^)(NSError *))arg1;
- (void)resetPasscodeMetadataWithCompletion:(void (^)(NSError *))arg1;
- (void)clearPasscodeWithEscrowKeybagData:(NSData *)arg1 secret:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)changePasscode:(NSString *)arg1 oldPasscode:(NSString *)arg2 isRecovery:(_Bool)arg3 skipRecovery:(_Bool)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)clearRecoveryPasscodeWithCompletion:(void (^)(NSError *))arg1;
- (void)applyRestrictionDictionary:(NSDictionary *)arg1 overrideRestrictions:(_Bool)arg2 appsAndOptions:(NSArray *)arg3 clientType:(NSString *)arg4 clientUUID:(NSString *)arg5 localizedClientDescription:(NSString *)arg6 localizedWarningMessage:(NSString *)arg7 completion:(void (^)(_Bool, _Bool, NSError *))arg8;
- (void)removeProtectedProfileWithIdentifier:(NSString *)arg1 installationType:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeUninstalledProfileWithIdentifier:(NSString *)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)removeProfileWithIdentifier:(NSString *)arg1 installationType:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)updateProfileIdentifier:(NSString *)arg1 interactive:(_Bool)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 withCompletion:(void (^)(NSData *, NSError *))arg2;
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)queueProfileDataForInstallation:(NSData *)arg1 originalFileName:(NSString *)arg2 originatingBundleID:(NSString *)arg3 transitionToUI:(_Bool)arg4 completion:(void (^)(NSString *, unsigned long long, NSError *))arg5;
- (void)appleConnect_installMDMAssociatedProfileData:(NSData *)arg1 interactive:(_Bool)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (void)installProfileData:(NSData *)arg1 interactive:(_Bool)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (void)isProfileInstalledWithIdentifier:(NSString *)arg1 completion:(void (^)(NSError *, _Bool))arg2;
- (void)verifiedMDMProfileIdentifierWithCompletion:(void (^)(NSError *, NSString *))arg1;
- (void)monitorEnrollmentStateWithPersonaID:(NSString *)arg1;
- (void)defaultAppBundleIDForCommunicationServiceType:(NSString *)arg1 forAccountWithIdentifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)notifyDeviceUnlockedWithCompletion:(void (^)(NSError *))arg1;
- (void)notifyDeviceUnlockedAndPasscodeRequiredWithCompletion:(void (^)(NSError *))arg1;
- (void)waitForMigrationIncludingPostRestoreMigration:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)setAllowedURLStrings:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setSpellCheckAllowed:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)setKeyboardShortcutsAllowed:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)setContinuousPathKeyboardAllowed:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)setPredictiveKeyboardAllowed:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)setSmartPunctuationAllowed:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)setAutoCorrectionAllowed:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)allowedImportFromAppBundleIDs:(NSArray *)arg1 importingAppBundleID:(NSString *)arg2 importingIsManaged:(_Bool)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)allowedOpenInAppBundleIDs:(NSArray *)arg1 originatingAppBundleID:(NSString *)arg2 originatingIsManaged:(_Bool)arg3 completion:(void (^)(NSArray *, NSError *))arg4;
- (void)checkCarrierProfileAndForceReinstallation:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (void)checkInWithCompletion:(void (^)(NSError *))arg1;
@end

