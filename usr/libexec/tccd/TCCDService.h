//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSDictionary, NSNumber, NSSet, NSString, NSURL, TCCDAlertManager;

@interface TCCDService : NSObject
{
    _Bool _usesTwoStagePrompting;	// 8 = 0x8
    _Bool _shouldTreatAsDeprecated;	// 9 = 0x9
    _Bool _mdm_isAuthorizationDenyOnly;	// 10 = 0xa
    _Bool _mdm_macos_allowedInPayloadDefition;	// 11 = 0xb
    _Bool _mdm_allowStandardUserToSetSystemService;	// 12 = 0xc
    _Bool _shouldUseADefaultDescriptionString;	// 13 = 0xd
    _Bool _shouldIssueSandboxExtension;	// 14 = 0xe
    _Bool _ios_useGenericSandboxExtension;	// 15 = 0xf
    _Bool _isRevocable;	// 16 = 0x10
    _Bool _isAccessAllowedByDefault;	// 17 = 0x11
    _Bool _isAccessDeniedByDefault;	// 18 = 0x12
    _Bool _allowPromptForPlatformBinaries;	// 19 = 0x13
    _Bool _shouldAllowUnrestrictedCheckAuditToken;	// 20 = 0x14
    _Bool _hasParanoidSecurityPolicy;	// 21 = 0x15
    _Bool _doNotStoreDefaultAllowAccess;	// 22 = 0x16
    _Bool _expireOnlyAllowedEntries;	// 23 = 0x17
    _Bool _saveExpiredEntries;	// 24 = 0x18
    _Bool _applyDevelopmentAuthorizationPolicy;	// 25 = 0x19
    _Bool _checkAllowEntitlementOnResponsibleProcess;	// 26 = 0x1a
    _Bool _upgradeV1AuthorizationValue;	// 27 = 0x1b
    _Bool _ios_allowPromptFromAppClip;	// 28 = 0x1c
    _Bool _ios_allowRegionalPrompt;	// 29 = 0x1d
    _Bool _allowedForAvocadoWidget;	// 30 = 0x1e
    _Bool _supportsStagedPrompting;	// 31 = 0x1f
    _Bool _macos_pardonMissingUsage;	// 32 = 0x20
    _Bool _macos_isPerSystem;	// 33 = 0x21
    _Bool _macos_compositionPromoteChildAuthorizationToParent;	// 34 = 0x22
    _Bool _macos_hasIndirectObject;	// 35 = 0x23
    _Bool _macos_shouldAllowSameTeam;	// 36 = 0x24
    NSDictionary *_platformAvailability;	// 40 = 0x28
    NSSet *_validOnPlatformNames;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    NSString *_externalName;	// 64 = 0x40
    NSString *_usageDescriptionKeyName;	// 72 = 0x48
    NSString *_secondaryUsageDescriptionKeyName;	// 80 = 0x50
    NSString *_fullAccessUsageDescriptionKeyName;	// 88 = 0x58
    NSString *_addAccessUsageDescriptionKeyName;	// 96 = 0x60
    NSArray *_disallowedOnPlatformSubtypeNameList;	// 104 = 0x68
    long long _alertStyle;	// 112 = 0x70
    NSURL *_notificationActionURL;	// 120 = 0x78
    NSString *_sandboxOperationForDelegation;	// 128 = 0x80
    NSArray *_defaultAllowedPlatformIdentifiersList;	// 136 = 0x88
    NSNumber *_expirySeconds;	// 144 = 0x90
    NSString *_firstStagePromptHeaderAssetCatalogPath;	// 152 = 0x98
    NSString *_firstStagePromptHeaderAssetName;	// 160 = 0xa0
    long long _defaultDevelopmentAuthorizationValue;	// 168 = 0xa8
    TCCDAlertManager *_alertManager;	// 176 = 0xb0
    unsigned long long _authorizationValueType;	// 184 = 0xb8
    unsigned long long _authorizationRightsMask;	// 192 = 0xc0
    unsigned long long _authorizationVersionNumber;	// 200 = 0xc8
    NSString *_localizedResourcesBundlePath;	// 208 = 0xd0
    NSBundle *_localizedResourcesBundle;	// 216 = 0xd8
    NSBundle *_defaultLocalizedResourcesBundle;	// 224 = 0xe0
    NSString *_allowAuthorizationButtonTitleLocalizationKey;	// 232 = 0xe8
    NSString *_denyAuthorizationButtonTitleLocalizationKey;	// 240 = 0xf0
    NSString *_moreAuthorizationOptionsButtonTitleLocalizationKey;	// 248 = 0xf8
    NSString *_limitedAuthorizationButtonTitleLocalizationKey;	// 256 = 0x100
    NSString *_addModifyAddedAuthorizationButtonTitleLocalizationKey;	// 264 = 0x108
    NSString *_sessionPidAuthorizationButtonTitleLocalizationKey;	// 272 = 0x110
    NSString *_cancelButtontitleLocalizationKey;	// 280 = 0x118
    NSString *_subsequentRequestAllowAuthorizationButtonTitleLocalizationKey;	// 288 = 0x120
    NSString *_subsequentRequestDenyAuthorizationButtonTitleLocalizationKey;	// 296 = 0x128
    NSString *_subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey;	// 304 = 0x130
    NSString *_requestTitleTextLocalizationKey;	// 312 = 0x138
    NSString *_requestTitleTextAfterV2UpgradeLocalizationKey;	// 320 = 0x140
    NSString *_requestTitleTextForSubsequentRequestsKey;	// 328 = 0x148
    NSString *_requestFullTitleTextLocalizationKey;	// 336 = 0x150
    NSString *_settingsRequestFullTitleTextLocalizationKey;	// 344 = 0x158
    NSString *_requestAddTitleTextLocalizationKey;	// 352 = 0x160
    NSString *_requestLimitedTitleTextLocalizationKey;	// 360 = 0x168
    NSString *_requestEntitlementTitleTextLocalizationKey;	// 368 = 0x170
    NSString *_requestUpgradeTitleTextLocalizationKey;	// 376 = 0x178
    NSString *_reminderTitleTextLocalizationKey;	// 384 = 0x180
    NSString *_reminderAllowButtonTitleTextLocalizationKey;	// 392 = 0x188
    NSString *_reminderLimitedButtonTitleTextLocalizationKey;	// 400 = 0x190
    NSString *_requestAdditionalTextLocalizationKey;	// 408 = 0x198
    NSString *_requestAdditionalTextAfterV2UpgradeLocalizationKey;	// 416 = 0x1a0
    NSString *_requestAdditionalTextForSubsequentRequestsLocalizationKey;	// 424 = 0x1a8
    NSString *_requestNotificationExtensionTextLocalizationKey;	// 432 = 0x1b0
    TCCDService *_subsequentRequestStringsRelatedService;	// 440 = 0x1b8
    NSString *_notificationTitleTextLocalizationKey;	// 448 = 0x1c0
    NSString *_notificationButtonTitleLocalizationKey;	// 456 = 0x1c8
    NSNumber *_ios_watchKitUserNotificationNumber;	// 464 = 0x1d0
    NSNumber *_iOS_minimumSDKVersionNumber;	// 472 = 0x1d8
    NSNumber *_watchOS_minimumSDKVersionNumber;	// 480 = 0x1e0
    NSNumber *_tvOS_minimumSDKVersionNumber;	// 488 = 0x1e8
    NSNumber *_vOS_minimumSDKVersionNumber;	// 496 = 0x1f0
    NSDictionary *_iOS_minimumSDKVersionNumberAuthSpecific;	// 504 = 0x1f8
    NSDictionary *_watchOS_minimumSDKVersionNumberAuthSpecific;	// 512 = 0x200
    NSDictionary *_tvOS_minimumSDKVersionNumberAuthSpecific;	// 520 = 0x208
    NSDictionary *_vOS_minimumSDKVersionNumberAuthSpecific;	// 528 = 0x210
    unsigned long long _defaultDesiredAuth;	// 536 = 0x218
    unsigned long long _downgradeAuthRight;	// 544 = 0x220
    NSDictionary *_authSpecificNotificationExtensionBundleIdentifier;	// 552 = 0x228
    NSString *_alternatePromptTitleEntitlement;	// 560 = 0x230
    NSNumber *_macos_minimumSDKVersionNumber;	// 568 = 0x238
    NSDictionary *_macos_minimumSDKVersionNumberAuthSpecific;	// 576 = 0x240
    NSString *_macos_helpAnchor;	// 584 = 0x248
    TCCDService *_macos_compositionChildService;	// 592 = 0x250
    TCCDService *_macos_compositionParentService;	// 600 = 0x258
    NSString *_macos_hardenedRuntimeEntitlementName;	// 608 = 0x260
    long long _macos_AXControlComputerAccessType;	// 616 = 0x268
    CDUnknownBlockType _promptAuthorizationChoiceBlock;	// 624 = 0x270
    CDUnknownBlockType _promptButtonLocalizationKeyBlock;	// 632 = 0x278
    CDUnknownBlockType _syncAuthorizationTranslationBlock;	// 640 = 0x280
    CDUnknownBlockType _recordAnalyticsPopulationBlock;	// 648 = 0x288
}

+ (id)defaultLocalizedResourcesBundlePath;	// IMP=0x00400000000550f1
+ (id)requestAlternateTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053bd0
+ (id)requestAdditionalTextExtensionLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053bb4
+ (id)requestDenyNotificationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053b98
+ (id)requestDenyNotificationTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053b7c
+ (id)subsequentRequestLimitedAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053b60
+ (id)subsequentRequestDenyAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053b44
+ (id)subsequentRequestAllowAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053b28
+ (id)reminderRequestLimitedAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053b0c
+ (id)requestLimitedAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053af0
+ (id)requestDenyAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053ad4
+ (id)reminderRequestAllowAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053ab8
+ (id)requestAllowAuthorizationButtonTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053a9c
+ (id)requestAdditionalTextForSubsequentRequestsKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053a80
+ (id)requestAdditionalTextAfterV2UpgradeLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053a64
+ (id)requestAdditionalTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053a48
+ (id)requestTitleTextForSubsequentRequestsLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053a2c
+ (id)requestTitleTextAfterV2UpgradeLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x0010000000053a10
+ (id)requestTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x00100000000539f4
+ (id)reminderTitleTextLocalizationKeyNameForServiceName:(id)arg1;	// IMP=0x00100000000539d8
+ (id)localizationKeyNameWithFeatureFlagEnabled:(id)arg1;	// IMP=0x00100000000539ac
+ (id)localizationKeyName:(id)arg1 forServiceName:(id)arg2;	// IMP=0x0010000000053984
+ (id)versionStringFromDYLDVersionNumber:(id)arg1;	// IMP=0x001000000005390c
+ (id)tccdPlatformNameForDYLDPlatformName:(id)arg1;	// IMP=0x001000000005384e
+ (id)serviceDescriptionsForPlatformName:(id)arg1;	// IMP=0x0010000000053500
+ (id)serviceAll;	// IMP=0x001000000005347e
+ (id)allServices;	// IMP=0x001000000004e51c
- (void).cxx_destruct;	// IMP=0x00200000000560f9
@property(copy) CDUnknownBlockType recordAnalyticsPopulationBlock; // @synthesize recordAnalyticsPopulationBlock=_recordAnalyticsPopulationBlock;
@property(copy) CDUnknownBlockType syncAuthorizationTranslationBlock; // @synthesize syncAuthorizationTranslationBlock=_syncAuthorizationTranslationBlock;
@property(copy) CDUnknownBlockType promptButtonLocalizationKeyBlock; // @synthesize promptButtonLocalizationKeyBlock=_promptButtonLocalizationKeyBlock;
@property(copy) CDUnknownBlockType promptAuthorizationChoiceBlock; // @synthesize promptAuthorizationChoiceBlock=_promptAuthorizationChoiceBlock;
@property(nonatomic) long long macos_AXControlComputerAccessType; // @synthesize macos_AXControlComputerAccessType=_macos_AXControlComputerAccessType;
@property(retain, nonatomic) NSString *macos_hardenedRuntimeEntitlementName; // @synthesize macos_hardenedRuntimeEntitlementName=_macos_hardenedRuntimeEntitlementName;
@property(nonatomic) _Bool macos_shouldAllowSameTeam; // @synthesize macos_shouldAllowSameTeam=_macos_shouldAllowSameTeam;
@property(nonatomic) _Bool macos_hasIndirectObject; // @synthesize macos_hasIndirectObject=_macos_hasIndirectObject;
@property(nonatomic) __weak TCCDService *macos_compositionParentService; // @synthesize macos_compositionParentService=_macos_compositionParentService;
@property(nonatomic) _Bool macos_compositionPromoteChildAuthorizationToParent; // @synthesize macos_compositionPromoteChildAuthorizationToParent=_macos_compositionPromoteChildAuthorizationToParent;
@property(nonatomic) __weak TCCDService *macos_compositionChildService; // @synthesize macos_compositionChildService=_macos_compositionChildService;
@property(nonatomic) _Bool macos_isPerSystem; // @synthesize macos_isPerSystem=_macos_isPerSystem;
@property(retain, nonatomic) NSString *macos_helpAnchor; // @synthesize macos_helpAnchor=_macos_helpAnchor;
@property(nonatomic) _Bool macos_pardonMissingUsage; // @synthesize macos_pardonMissingUsage=_macos_pardonMissingUsage;
@property(retain, nonatomic) NSDictionary *macos_minimumSDKVersionNumberAuthSpecific; // @synthesize macos_minimumSDKVersionNumberAuthSpecific=_macos_minimumSDKVersionNumberAuthSpecific;
@property(retain, nonatomic) NSNumber *macos_minimumSDKVersionNumber; // @synthesize macos_minimumSDKVersionNumber=_macos_minimumSDKVersionNumber;
@property(retain, nonatomic) NSString *alternatePromptTitleEntitlement; // @synthesize alternatePromptTitleEntitlement=_alternatePromptTitleEntitlement;
@property(retain, nonatomic) NSDictionary *authSpecificNotificationExtensionBundleIdentifier; // @synthesize authSpecificNotificationExtensionBundleIdentifier=_authSpecificNotificationExtensionBundleIdentifier;
@property(nonatomic) unsigned long long downgradeAuthRight; // @synthesize downgradeAuthRight=_downgradeAuthRight;
@property(nonatomic) _Bool supportsStagedPrompting; // @synthesize supportsStagedPrompting=_supportsStagedPrompting;
@property(nonatomic) _Bool allowedForAvocadoWidget; // @synthesize allowedForAvocadoWidget=_allowedForAvocadoWidget;
@property(nonatomic) _Bool ios_allowRegionalPrompt; // @synthesize ios_allowRegionalPrompt=_ios_allowRegionalPrompt;
@property(nonatomic) _Bool ios_allowPromptFromAppClip; // @synthesize ios_allowPromptFromAppClip=_ios_allowPromptFromAppClip;
@property(nonatomic) unsigned long long defaultDesiredAuth; // @synthesize defaultDesiredAuth=_defaultDesiredAuth;
@property(retain, nonatomic) NSDictionary *vOS_minimumSDKVersionNumberAuthSpecific; // @synthesize vOS_minimumSDKVersionNumberAuthSpecific=_vOS_minimumSDKVersionNumberAuthSpecific;
@property(retain, nonatomic) NSDictionary *tvOS_minimumSDKVersionNumberAuthSpecific; // @synthesize tvOS_minimumSDKVersionNumberAuthSpecific=_tvOS_minimumSDKVersionNumberAuthSpecific;
@property(retain, nonatomic) NSDictionary *watchOS_minimumSDKVersionNumberAuthSpecific; // @synthesize watchOS_minimumSDKVersionNumberAuthSpecific=_watchOS_minimumSDKVersionNumberAuthSpecific;
@property(retain, nonatomic) NSDictionary *iOS_minimumSDKVersionNumberAuthSpecific; // @synthesize iOS_minimumSDKVersionNumberAuthSpecific=_iOS_minimumSDKVersionNumberAuthSpecific;
@property(retain, nonatomic) NSNumber *vOS_minimumSDKVersionNumber; // @synthesize vOS_minimumSDKVersionNumber=_vOS_minimumSDKVersionNumber;
@property(retain, nonatomic) NSNumber *tvOS_minimumSDKVersionNumber; // @synthesize tvOS_minimumSDKVersionNumber=_tvOS_minimumSDKVersionNumber;
@property(retain, nonatomic) NSNumber *watchOS_minimumSDKVersionNumber; // @synthesize watchOS_minimumSDKVersionNumber=_watchOS_minimumSDKVersionNumber;
@property(retain, nonatomic) NSNumber *iOS_minimumSDKVersionNumber; // @synthesize iOS_minimumSDKVersionNumber=_iOS_minimumSDKVersionNumber;
@property(retain) NSNumber *ios_watchKitUserNotificationNumber; // @synthesize ios_watchKitUserNotificationNumber=_ios_watchKitUserNotificationNumber;
@property(retain, nonatomic) NSString *notificationButtonTitleLocalizationKey; // @synthesize notificationButtonTitleLocalizationKey=_notificationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *notificationTitleTextLocalizationKey; // @synthesize notificationTitleTextLocalizationKey=_notificationTitleTextLocalizationKey;
@property(nonatomic) __weak TCCDService *subsequentRequestStringsRelatedService; // @synthesize subsequentRequestStringsRelatedService=_subsequentRequestStringsRelatedService;
@property(retain, nonatomic) NSString *requestNotificationExtensionTextLocalizationKey; // @synthesize requestNotificationExtensionTextLocalizationKey=_requestNotificationExtensionTextLocalizationKey;
@property(retain, nonatomic) NSString *requestAdditionalTextForSubsequentRequestsLocalizationKey; // @synthesize requestAdditionalTextForSubsequentRequestsLocalizationKey=_requestAdditionalTextForSubsequentRequestsLocalizationKey;
@property(retain, nonatomic) NSString *requestAdditionalTextAfterV2UpgradeLocalizationKey; // @synthesize requestAdditionalTextAfterV2UpgradeLocalizationKey=_requestAdditionalTextAfterV2UpgradeLocalizationKey;
@property(retain, nonatomic) NSString *requestAdditionalTextLocalizationKey; // @synthesize requestAdditionalTextLocalizationKey=_requestAdditionalTextLocalizationKey;
@property(retain, nonatomic) NSString *reminderLimitedButtonTitleTextLocalizationKey; // @synthesize reminderLimitedButtonTitleTextLocalizationKey=_reminderLimitedButtonTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *reminderAllowButtonTitleTextLocalizationKey; // @synthesize reminderAllowButtonTitleTextLocalizationKey=_reminderAllowButtonTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *reminderTitleTextLocalizationKey; // @synthesize reminderTitleTextLocalizationKey=_reminderTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *requestUpgradeTitleTextLocalizationKey; // @synthesize requestUpgradeTitleTextLocalizationKey=_requestUpgradeTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *requestEntitlementTitleTextLocalizationKey; // @synthesize requestEntitlementTitleTextLocalizationKey=_requestEntitlementTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *requestLimitedTitleTextLocalizationKey; // @synthesize requestLimitedTitleTextLocalizationKey=_requestLimitedTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *requestAddTitleTextLocalizationKey; // @synthesize requestAddTitleTextLocalizationKey=_requestAddTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *settingsRequestFullTitleTextLocalizationKey; // @synthesize settingsRequestFullTitleTextLocalizationKey=_settingsRequestFullTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *requestFullTitleTextLocalizationKey; // @synthesize requestFullTitleTextLocalizationKey=_requestFullTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *requestTitleTextForSubsequentRequestsKey; // @synthesize requestTitleTextForSubsequentRequestsKey=_requestTitleTextForSubsequentRequestsKey;
@property(retain, nonatomic) NSString *requestTitleTextAfterV2UpgradeLocalizationKey; // @synthesize requestTitleTextAfterV2UpgradeLocalizationKey=_requestTitleTextAfterV2UpgradeLocalizationKey;
@property(retain, nonatomic) NSString *requestTitleTextLocalizationKey; // @synthesize requestTitleTextLocalizationKey=_requestTitleTextLocalizationKey;
@property(retain, nonatomic) NSString *subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey; // @synthesize subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey=_subsequentRequestLimitedAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *subsequentRequestDenyAuthorizationButtonTitleLocalizationKey; // @synthesize subsequentRequestDenyAuthorizationButtonTitleLocalizationKey=_subsequentRequestDenyAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *subsequentRequestAllowAuthorizationButtonTitleLocalizationKey; // @synthesize subsequentRequestAllowAuthorizationButtonTitleLocalizationKey=_subsequentRequestAllowAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *cancelButtontitleLocalizationKey; // @synthesize cancelButtontitleLocalizationKey=_cancelButtontitleLocalizationKey;
@property(retain, nonatomic) NSString *sessionPidAuthorizationButtonTitleLocalizationKey; // @synthesize sessionPidAuthorizationButtonTitleLocalizationKey=_sessionPidAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *addModifyAddedAuthorizationButtonTitleLocalizationKey; // @synthesize addModifyAddedAuthorizationButtonTitleLocalizationKey=_addModifyAddedAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *limitedAuthorizationButtonTitleLocalizationKey; // @synthesize limitedAuthorizationButtonTitleLocalizationKey=_limitedAuthorizationButtonTitleLocalizationKey;
@property(readonly, nonatomic) NSString *moreAuthorizationOptionsButtonTitleLocalizationKey; // @synthesize moreAuthorizationOptionsButtonTitleLocalizationKey=_moreAuthorizationOptionsButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *denyAuthorizationButtonTitleLocalizationKey; // @synthesize denyAuthorizationButtonTitleLocalizationKey=_denyAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSString *allowAuthorizationButtonTitleLocalizationKey; // @synthesize allowAuthorizationButtonTitleLocalizationKey=_allowAuthorizationButtonTitleLocalizationKey;
@property(retain, nonatomic) NSBundle *defaultLocalizedResourcesBundle; // @synthesize defaultLocalizedResourcesBundle=_defaultLocalizedResourcesBundle;
@property(retain, nonatomic) NSBundle *localizedResourcesBundle; // @synthesize localizedResourcesBundle=_localizedResourcesBundle;
@property(retain, nonatomic) NSString *localizedResourcesBundlePath; // @synthesize localizedResourcesBundlePath=_localizedResourcesBundlePath;
@property(nonatomic) unsigned long long authorizationVersionNumber; // @synthesize authorizationVersionNumber=_authorizationVersionNumber;
@property(nonatomic) _Bool upgradeV1AuthorizationValue; // @synthesize upgradeV1AuthorizationValue=_upgradeV1AuthorizationValue;
@property(nonatomic) unsigned long long authorizationRightsMask; // @synthesize authorizationRightsMask=_authorizationRightsMask;
@property(nonatomic) unsigned long long authorizationValueType; // @synthesize authorizationValueType=_authorizationValueType;
@property(retain, nonatomic) TCCDAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(nonatomic) _Bool checkAllowEntitlementOnResponsibleProcess; // @synthesize checkAllowEntitlementOnResponsibleProcess=_checkAllowEntitlementOnResponsibleProcess;
@property(nonatomic) long long defaultDevelopmentAuthorizationValue; // @synthesize defaultDevelopmentAuthorizationValue=_defaultDevelopmentAuthorizationValue;
@property(nonatomic) _Bool applyDevelopmentAuthorizationPolicy; // @synthesize applyDevelopmentAuthorizationPolicy=_applyDevelopmentAuthorizationPolicy;
@property(retain, nonatomic) NSString *firstStagePromptHeaderAssetName; // @synthesize firstStagePromptHeaderAssetName=_firstStagePromptHeaderAssetName;
@property(retain, nonatomic) NSString *firstStagePromptHeaderAssetCatalogPath; // @synthesize firstStagePromptHeaderAssetCatalogPath=_firstStagePromptHeaderAssetCatalogPath;
@property(readonly, nonatomic) _Bool usesTwoStagePrompting; // @synthesize usesTwoStagePrompting=_usesTwoStagePrompting;
@property(nonatomic) _Bool saveExpiredEntries; // @synthesize saveExpiredEntries=_saveExpiredEntries;
@property(nonatomic) _Bool expireOnlyAllowedEntries; // @synthesize expireOnlyAllowedEntries=_expireOnlyAllowedEntries;
@property(retain, nonatomic) NSNumber *expirySeconds; // @synthesize expirySeconds=_expirySeconds;
@property(nonatomic) _Bool doNotStoreDefaultAllowAccess; // @synthesize doNotStoreDefaultAllowAccess=_doNotStoreDefaultAllowAccess;
@property(retain, nonatomic) NSArray *defaultAllowedPlatformIdentifiersList; // @synthesize defaultAllowedPlatformIdentifiersList=_defaultAllowedPlatformIdentifiersList;
@property(retain, nonatomic) NSString *sandboxOperationForDelegation; // @synthesize sandboxOperationForDelegation=_sandboxOperationForDelegation;
@property(retain, nonatomic) NSURL *notificationActionURL; // @synthesize notificationActionURL=_notificationActionURL;
@property(nonatomic) _Bool hasParanoidSecurityPolicy; // @synthesize hasParanoidSecurityPolicy=_hasParanoidSecurityPolicy;
@property(nonatomic) _Bool shouldAllowUnrestrictedCheckAuditToken; // @synthesize shouldAllowUnrestrictedCheckAuditToken=_shouldAllowUnrestrictedCheckAuditToken;
@property(nonatomic) _Bool allowPromptForPlatformBinaries; // @synthesize allowPromptForPlatformBinaries=_allowPromptForPlatformBinaries;
@property(nonatomic) _Bool isAccessDeniedByDefault; // @synthesize isAccessDeniedByDefault=_isAccessDeniedByDefault;
@property(nonatomic) _Bool isAccessAllowedByDefault; // @synthesize isAccessAllowedByDefault=_isAccessAllowedByDefault;
@property(nonatomic) long long alertStyle; // @synthesize alertStyle=_alertStyle;
@property(nonatomic) _Bool isRevocable; // @synthesize isRevocable=_isRevocable;
@property(nonatomic) _Bool ios_useGenericSandboxExtension; // @synthesize ios_useGenericSandboxExtension=_ios_useGenericSandboxExtension;
@property(nonatomic) _Bool shouldIssueSandboxExtension; // @synthesize shouldIssueSandboxExtension=_shouldIssueSandboxExtension;
@property(retain, nonatomic) NSArray *disallowedOnPlatformSubtypeNameList; // @synthesize disallowedOnPlatformSubtypeNameList=_disallowedOnPlatformSubtypeNameList;
@property(nonatomic) _Bool shouldUseADefaultDescriptionString; // @synthesize shouldUseADefaultDescriptionString=_shouldUseADefaultDescriptionString;
@property(retain, nonatomic) NSString *addAccessUsageDescriptionKeyName; // @synthesize addAccessUsageDescriptionKeyName=_addAccessUsageDescriptionKeyName;
@property(retain, nonatomic) NSString *fullAccessUsageDescriptionKeyName; // @synthesize fullAccessUsageDescriptionKeyName=_fullAccessUsageDescriptionKeyName;
@property(retain, nonatomic) NSString *secondaryUsageDescriptionKeyName; // @synthesize secondaryUsageDescriptionKeyName=_secondaryUsageDescriptionKeyName;
@property(retain, nonatomic) NSString *usageDescriptionKeyName; // @synthesize usageDescriptionKeyName=_usageDescriptionKeyName;
@property(nonatomic) _Bool mdm_allowStandardUserToSetSystemService; // @synthesize mdm_allowStandardUserToSetSystemService=_mdm_allowStandardUserToSetSystemService;
@property(nonatomic) _Bool mdm_macos_allowedInPayloadDefition; // @synthesize mdm_macos_allowedInPayloadDefition=_mdm_macos_allowedInPayloadDefition;
@property(nonatomic) _Bool mdm_isAuthorizationDenyOnly; // @synthesize mdm_isAuthorizationDenyOnly=_mdm_isAuthorizationDenyOnly;
@property(nonatomic) _Bool shouldTreatAsDeprecated; // @synthesize shouldTreatAsDeprecated=_shouldTreatAsDeprecated;
@property(retain, nonatomic) NSString *externalName; // @synthesize externalName=_externalName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSSet *validOnPlatformNames; // @synthesize validOnPlatformNames=_validOnPlatformNames;
@property(retain, nonatomic) NSDictionary *platformAvailability; // @synthesize platformAvailability=_platformAvailability;
- (void)setUsesTwoStagePrompting:(_Bool)arg1;	// IMP=0x0010000000055593
- (_Bool)getUsesTwoStagePrompting;	// IMP=0x001000000005558a
- (id)populateRecordMetricWithFields:(id)arg1;	// IMP=0x0010000000055575
- (void)_makeAnalyticsPopulationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000055563
- (unsigned long long)translateAuth:(unsigned long long)arg1 versionUpgrade:(_Bool)arg2;	// IMP=0x001000000005554c
- (void)_makeAuthTranslationBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000005553a
- (void)_makePromptButtonLocalizationKeyBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000055528
- (id)localizationKeyForButtonAuth:(unsigned long long)arg1 desiredAuth:(unsigned long long)arg2;	// IMP=0x0010000000055510
- (void)_makePromptAuthorizationChoiceBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000554fe
- (int)authorizationChoicesForCurrentAuth:(unsigned long long)arg1 desiredAuth:(unsigned long long)arg2 aButtonAuth:(unsigned long long *)arg3 bButtonAuth:(unsigned long long *)arg4 cButtonAuth:(unsigned long long *)arg5;	// IMP=0x00100000000554d8
- (id)usageDescriptionKeyForAuthorization:(unsigned long long)arg1;	// IMP=0x0010000000055497
- (id)buttonTitleLocalizationKeyForAuthorization:(unsigned long long)arg1 desiredAuth:(unsigned long long)arg2;	// IMP=0x0010000000055430
- (id)requestTitleTextLocalizationKeyForAuthorization:(unsigned long long)arg1;	// IMP=0x00100000000553f5
- (id)localizedTextWithKey:(id)arg1;	// IMP=0x00100000000552c2
- (long long)developmentAuthorizationValue;	// IMP=0x0010000000054da6
@property(readonly, nonatomic) unsigned long long authorizationPromptRightsMask;
@property(readonly, nonatomic) _Bool pardonMissingUsage;
- (id)descriptionForAuthorizationValue:(unsigned long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x0010000000054cdd
- (id)authorizationRightStateForValue:(unsigned long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x0010000000054c6e
- (_Bool)isAuthorizationValue:(unsigned long long)arg1 equalToRight:(unsigned long long)arg2;	// IMP=0x0010000000054c42
- (long long)compare:(id)arg1;	// IMP=0x0010000000054bb1
- (id)descriptionDictionary;	// IMP=0x0010000000054210
- (id)description;	// IMP=0x00100000000541fe
- (id)initWithName:(id)arg1 availability:(id)arg2;	// IMP=0x0010000000053bec
- (unsigned long long)accessActionStatusForAuthorizationValue:(unsigned long long)arg1;	// IMP=0x001000000000a5bb

@end

