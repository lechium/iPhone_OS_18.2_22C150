//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCInstallerReader.h>

@class FLFollowUpController, MISSING_TYPE, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSTimer;
@protocol OS_dispatch_queue;

@interface MCInstaller : MCInstallerReader
{
    NSMutableArray *_queuedProfiles;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_purgatoryWorkerQueue;	// 16 = 0x10
    NSDictionary *_currentlyInstallingRestrictions;	// 24 = 0x18
    NSMutableDictionary *_setAsideAccountIdentifiersByPayloadClass;	// 32 = 0x20
    NSMutableDictionary *_setAsideDictionariesByPayloadClass;	// 40 = 0x28
    NSTimer *_purgatoryTimer;	// 48 = 0x30
    FLFollowUpController *_followUpController;	// 56 = 0x38
}

+ (void)_enumerateProfilesWithCriteria:(CDUnknownBlockType)arg1 filterFlags:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x002000000005a7c7
+ (id)considerProfilesInstalledDuringBuddyForManagement;	// IMP=0x001000000005a117
+ (id)_installationFailureErrorWithUnderlyingError:(id)arg1;	// IMP=0x0010000000059a25
+ (void)_setPathsSystemProfileStorageDirectory:(id)arg1 userProfileStorageDirectory:(id)arg2;	// IMP=0x00100000000599b9
+ (id)notSupportedUnderMultiUserModeError;	// IMP=0x001000000004d1ba
+ (id)notInstalledByMDMError;	// IMP=0x001000000004d139
+ (id)deviceIsSupervisedError;	// IMP=0x001000000004d09b
+ (id)deviceNotSupervisedError;	// IMP=0x001000000004cffd
+ (void)isInteractiveProfileInstallationAllowedBySDP:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049bcc
+ (id)sharedInstaller;	// IMP=0x00100000000488c8
- (void).cxx_destruct;	// IMP=0x002000000005c0e6
@property(retain, nonatomic) FLFollowUpController *followUpController; // @synthesize followUpController=_followUpController;
@property(retain, nonatomic) NSTimer *purgatoryTimer; // @synthesize purgatoryTimer=_purgatoryTimer;
@property(retain, nonatomic) NSMutableDictionary *setAsideDictionariesByPayloadClass; // @synthesize setAsideDictionariesByPayloadClass=_setAsideDictionariesByPayloadClass;
@property(retain, nonatomic) NSMutableDictionary *setAsideAccountIdentifiersByPayloadClass; // @synthesize setAsideAccountIdentifiersByPayloadClass=_setAsideAccountIdentifiersByPayloadClass;
- (_Bool)isCertificateReference:(id)arg1 aliasedInDependencyManager:(id)arg2;	// IMP=0x001000000005bbaa
- (id)peekPurgatoryProfileDataForTargetDevice:(unsigned long long)arg1;	// IMP=0x001000000005badc
- (void)_purgatoryWorkerQueue_didPurgePurgatory:(_Bool)arg1;	// IMP=0x001000000005b937
- (void)purgePurgatoryProfileWithIdentifier:(id)arg1 targetDevice:(unsigned long long)arg2;	// IMP=0x001000000005b6e4
- (void)purgePurgatoryProfilesForTargetDevice:(unsigned long long)arg1;	// IMP=0x001000000005b48a
- (void)_replacePurgatoryProfilesForTargetDevice:(unsigned long long)arg1;	// IMP=0x001000000005b25d
- (void)_postPurgatoryFollowUpForProfileData:(id)arg1 targetDevice:(unsigned long long)arg2;	// IMP=0x001000000005abfc
- (_Bool)sendPurgatoryProfileData:(id)arg1 identifier:(id)arg2 targetDevice:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x001000000005aa5b
- (void)_checkinWithMdmd;	// IMP=0x0010000000059f50
- (void)_sendMDMEnrollmentEventWithInstallationOptions:(id)arg1;	// IMP=0x0010000000059ce5
- (id)_installedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x0010000000059b32
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058ee7
- (id)verifiedMDMProfileIdentifierWithCleanUp;	// IMP=0x00100000000589c3
- (id)removeProvisioningProfileUUID:(id)arg1 sender:(id)arg2;	// IMP=0x00100000000588dc
- (void)removeManagedProfilesIfNecessary;	// IMP=0x00100000000587d2
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x00100000000586d0
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 options:(id)arg3 source:(id)arg4;	// IMP=0x00100000000583e3
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 source:(id)arg3;	// IMP=0x00100000000583cb
- (void)_cleanUpAfterRemovingProfileWithIdentifier:(id)arg1 installedForUser:(_Bool)arg2 profileHandler:(id)arg3 oldRestrictions:(id)arg4;	// IMP=0x0010000000057d49
- (id)_reallyRemoveProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 profileInstalled:(_Bool)arg3 targetDeviceType:(unsigned long long)arg4 options:(id)arg5 source:(id)arg6;	// IMP=0x0010000000057462
- (id)_reallyRemoveInstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 options:(id)arg3 source:(id)arg4;	// IMP=0x00100000000573a6
- (void)removeAllProfilesFromInstallationQueue;	// IMP=0x0010000000057389
- (id)_managingProfileIdentifierForProfileIdentifier:(id)arg1;	// IMP=0x00100000000572bb
- (void)_removeOrphanedCertificateDependencyManager:(id)arg1 persistentID:(id)arg2 persona:(id)arg3;	// IMP=0x0010000000056fcb
- (void)_removeOrphanedResourcesOptions:(id)arg1 includingAccounts:(_Bool)arg2;	// IMP=0x0010000000056586
- (_Bool)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x0010000000056375
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 installForSystem:(_Bool)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x0010000000055af1
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 source:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000055ac6
- (id)_profileNotEligibleErrorWithProfile:(id)arg1;	// IMP=0x0010000000055a14
- (id)_watchInformationOutIsCellularSupported:(_Bool *)arg1;	// IMP=0x0010000000055a0c
- (id)_preflightProfileForInstallationOnWatch:(id)arg1;	// IMP=0x0010000000055453
- (id)_preflightProfileForInstallationOnHomePod:(id)arg1;	// IMP=0x0010000000055157
- (id)_errorUnacceptablePayload:(id)arg1;	// IMP=0x00100000000550a5
- (_Bool)_overrideProfileValidation;	// IMP=0x0010000000055056
- (_Bool)_allowsPasswordPoliciesFromProfile:(id)arg1 outError:(id *)arg2;	// IMP=0x0010000000054ced
- (id)_assumeOwnershipProfileHandler:(id)arg1 options:(id)arg2 source:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000054578
- (id)installProfileData:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x0010000000052144
- (id)existingProfileContainingPayloadClass:(Class)arg1 inProfilesWithFilterFlags:(int)arg2 excludingProfileIdentifier:(id)arg3;	// IMP=0x0010000000051f22
- (id)existingProfileContainingPayloadClass:(Class)arg1 excludingProfileIdentifier:(id)arg2;	// IMP=0x0010000000051f08
- (_Bool)_showWarnings:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x0010000000051e3e
- (_Bool)_showWarningsForUpdatingProfile:(id)arg1 originalProfile:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000051d56
- (_Bool)_showWarningsForProfile:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x0010000000051cd8
- (id)setAsideDictionariesForPayloadHandlerClass:(Class)arg1;	// IMP=0x0010000000051c80
- (void)addSetAsideDictionary:(id)arg1 forPayloadHandlerClass:(Class)arg2;	// IMP=0x0010000000051bac
- (id)setAsideAccountIdentifiersForPayloadClass:(Class)arg1;	// IMP=0x0010000000051b07
- (void)addSetAsideAccountIdentifier:(id)arg1 forPayloadClass:(Class)arg2;	// IMP=0x0010000000051a00
- (_Bool)deviceSupervisionRequiredForPayload:(id)arg1;	// IMP=0x001000000005182f
- (id)_installProfileHandler:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000004d23b
- (id)_deviceLockedError;	// IMP=0x001000000004cf7c
- (id)_guardAgainstNoMDMPayloadWithNewProfile:(id)arg1 oldProfile:(id)arg2;	// IMP=0x001000000004ce11
- (id)_validateMDMReplacementNewProfile:(id)arg1 oldProfile:(id)arg2 client:(id)arg3;	// IMP=0x001000000004c118
- (id)_validateNewMDMProfile:(id)arg1 installationOption:(id)arg2;	// IMP=0x001000000004bdfd
- (void)_promptUserForRestoreWithAccountID:(id)arg1 personaID:(id)arg2 interactionClient:(id)arg3;	// IMP=0x001000000004bd49
- (_Bool)_promptUserForMAIDSignIn:(id)arg1 personaID:(id)arg2 handler:(id)arg3 interactionClient:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000004bc60
- (void)_updateCDPWithNewPasscode:(id)arg1 passcodeType:(int)arg2;	// IMP=0x001000000004ba8f
- (_Bool)_promptUserForComplianceWithRestrictions:(id)arg1 handler:(id)arg2 interactionClient:(id)arg3 outPasscode:(id *)arg4 outError:(id *)arg5;	// IMP=0x001000000004b0c7
- (id)_profileDrivenUserEnrollmentNotSupportedError;	// IMP=0x001000000004b046
- (id)_profileDrivenEnrollmentBlocked;	// IMP=0x001000000004afc5
- (id)_userCancelledErrorWithFriendlyName:(id)arg1;	// IMP=0x001000000004af41
- (id)_invalidInputError;	// IMP=0x001000000004aec0
- (id)_installationHaltedTopLevelError;	// IMP=0x001000000004adb6
- (id)_uiProfileInstallationDisabledTopLevelErrorWithCause:(id)arg1;	// IMP=0x001000000004ac85
- (id)_targetDeviceMismatchError;	// IMP=0x001000000004ac04
- (id)_targetDevicePreflightFailedError;	// IMP=0x001000000004ab83
- (id)_targetDeviceArchivedError;	// IMP=0x001000000004ab02
- (id)_targetDeviceUnavailableError;	// IMP=0x001000000004aa81
- (id)_targetDeviceErrorWithUnderlyingError:(id)arg1;	// IMP=0x001000000004a9dc
- (id)_malformedPayloadErrorWithUnderlyingError:(id)arg1;	// IMP=0x001000000004a937
- (id)_malformedPayloadErrorInternal:(_Bool)arg1;	// IMP=0x001000000004a8a0
- (void)_continueQueueingProfile:(id)arg1 profileData:(id)arg2 forDevice:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000004a289
- (MISSING_TYPE *)_queueProfileData:profile:forDevice:completion: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000049bdc
- (long long)_targetValidationStatusForProfile:(id)arg1;	// IMP=0x0010000000049a37
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000491aa
- (id)_badProvisioningProfileError;	// IMP=0x0010000000049129
- (id)popProfileDataAtHeadOfInstallationQueue;	// IMP=0x00100000000490b7
- (id)pathToInstalledProfileByUUID:(id)arg1;	// IMP=0x0010000000048cbe
- (id)pathToUninstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x0010000000048bce
- (id)pathToInstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x0010000000048a3b
- (id)identifiersOfInstalledProfilesWithFilterFlags:(int)arg1;	// IMP=0x00100000000489d7
- (id)init;	// IMP=0x001000000004891d

@end
