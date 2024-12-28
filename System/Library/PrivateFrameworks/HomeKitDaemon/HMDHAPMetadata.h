//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPMetadata, NSDictionary, NSNumber, NSSet;

__attribute__((visibility("hidden")))
@interface HMDHAPMetadata : HMFObject
{
    _Bool _incomplete;	// 8 = 0x8
    NSNumber *_version;	// 16 = 0x10
    NSNumber *_schemaVersion;	// 24 = 0x18
    NSDictionary *_rawPlist;	// 32 = 0x20
    HAPMetadata *_hapMetadata;	// 40 = 0x28
    NSSet *_hmRequiresDeviceUnlockTuples;	// 48 = 0x30
    NSDictionary *_hmAllowableSecuringWrites;	// 56 = 0x38
    NSDictionary *_hmWakeOnOperationsFilter;	// 64 = 0x40
    NSDictionary *_hmAccessoryCategories;	// 72 = 0x48
    NSSet *_hmBlacklistedServices;	// 80 = 0x50
    NSSet *_hmBlacklistedCharacteristics;	// 88 = 0x58
    NSSet *_hmBlacklistedServicesFromApp;	// 96 = 0x60
    NSSet *_hmBlacklistedCharacteristicsFromApp;	// 104 = 0x68
    NSSet *_hmNotificationAutoEnabledTuples;	// 112 = 0x70
    NSSet *_hmBulletinBoardEnabledTuples;	// 120 = 0x78
    NSSet *_hmCoalesceNotificationsTuples;	// 128 = 0x80
    NSDictionary *_assistantServiceNameHAPTypeMap;	// 136 = 0x88
    NSDictionary *_assistantServiceHAPTypeNameMap;	// 144 = 0x90
    NSDictionary *_assistantCharacteristics;	// 152 = 0x98
    NSDictionary *_assistantChrHAPTypeNameMap;	// 160 = 0xa0
    NSDictionary *_assistantUnits;	// 168 = 0xa8
}

+ (_Bool)isHomedVersionSupported:(id)arg1;	// IMP=0x00600000003e05f2
+ (void)resetShouldUploadToCloudAfterHomedReady;	// IMP=0x00600000003e05e5
+ (_Bool)shouldUploadToCloudAfterHomedReady;	// IMP=0x00600000003e05d9
+ (void)prepareMetadata;	// IMP=0x00600000003dfe78
+ (_Bool)isAdminPrivilegeRequiredForWritingCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00600000003dfe0e
+ (_Bool)isOwnerPrivilegeRequiredForWritingCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00600000003dfd59
+ (id)dataFromMetadataDictionaryWithKey:(id)arg1;	// IMP=0x00600000003dfc8c
+ (id)legacyV3DataForCloud;	// IMP=0x00600000003dfc69
+ (id)legacyV3DataForIDS;	// IMP=0x00600000003dfc46
+ (_Bool)isServiceType:(id)arg1 compatibleWithAccessoryCategoryType:(id)arg2;	// IMP=0x00600000003dfb96
+ (void)updateLocalMetadataWithMetadata:(id)arg1;	// IMP=0x00600000003dfad1
+ (void)updateLocalMetadataWithBuiltinMetadata;	// IMP=0x00600000003df9b7
+ (void)_logCurrentMetadata;	// IMP=0x00600000003df856
+ (id)getSharedInstance;	// IMP=0x00600000003df453
+ (id)getBuiltinInstance;	// IMP=0x00600000003dee89
+ (id)metadataCache;	// IMP=0x00600000003dee59
+ (id)metadataWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00600000003decc5
+ (id)metadataWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x00600000003deadf
- (void).cxx_destruct;	// IMP=0x00000000003dcdb6
@property(retain, nonatomic) NSDictionary *assistantUnits; // @synthesize assistantUnits=_assistantUnits;
@property(retain, nonatomic) NSDictionary *assistantChrHAPTypeNameMap; // @synthesize assistantChrHAPTypeNameMap=_assistantChrHAPTypeNameMap;
@property(retain, nonatomic) NSDictionary *assistantCharacteristics; // @synthesize assistantCharacteristics=_assistantCharacteristics;
@property(retain, nonatomic) NSDictionary *assistantServiceHAPTypeNameMap; // @synthesize assistantServiceHAPTypeNameMap=_assistantServiceHAPTypeNameMap;
@property(retain, nonatomic) NSDictionary *assistantServiceNameHAPTypeMap; // @synthesize assistantServiceNameHAPTypeMap=_assistantServiceNameHAPTypeMap;
@property(retain, nonatomic) NSSet *hmCoalesceNotificationsTuples; // @synthesize hmCoalesceNotificationsTuples=_hmCoalesceNotificationsTuples;
@property(retain, nonatomic) NSSet *hmBulletinBoardEnabledTuples; // @synthesize hmBulletinBoardEnabledTuples=_hmBulletinBoardEnabledTuples;
@property(retain, nonatomic) NSSet *hmNotificationAutoEnabledTuples; // @synthesize hmNotificationAutoEnabledTuples=_hmNotificationAutoEnabledTuples;
@property(retain, nonatomic) NSSet *hmBlacklistedCharacteristicsFromApp; // @synthesize hmBlacklistedCharacteristicsFromApp=_hmBlacklistedCharacteristicsFromApp;
@property(retain, nonatomic) NSSet *hmBlacklistedServicesFromApp; // @synthesize hmBlacklistedServicesFromApp=_hmBlacklistedServicesFromApp;
@property(retain, nonatomic) NSSet *hmBlacklistedCharacteristics; // @synthesize hmBlacklistedCharacteristics=_hmBlacklistedCharacteristics;
@property(retain, nonatomic) NSSet *hmBlacklistedServices; // @synthesize hmBlacklistedServices=_hmBlacklistedServices;
@property(retain, nonatomic) NSDictionary *hmAccessoryCategories; // @synthesize hmAccessoryCategories=_hmAccessoryCategories;
@property(retain, nonatomic) NSDictionary *hmWakeOnOperationsFilter; // @synthesize hmWakeOnOperationsFilter=_hmWakeOnOperationsFilter;
@property(retain, nonatomic) NSDictionary *hmAllowableSecuringWrites; // @synthesize hmAllowableSecuringWrites=_hmAllowableSecuringWrites;
@property(retain, nonatomic) NSSet *hmRequiresDeviceUnlockTuples; // @synthesize hmRequiresDeviceUnlockTuples=_hmRequiresDeviceUnlockTuples;
@property(retain, nonatomic) HAPMetadata *hapMetadata; // @synthesize hapMetadata=_hapMetadata;
@property(readonly, nonatomic) NSDictionary *rawPlist; // @synthesize rawPlist=_rawPlist;
@property(nonatomic) _Bool incomplete; // @synthesize incomplete=_incomplete;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (id)statusHAPCharacteristicTypesForServiceType;	// IMP=0x00000000003dca96
- (id)disallowedAssistantCharacteristicTypesByServiceType;	// IMP=0x00000000003dca66
- (id)aliasedHAPServiceTypes;	// IMP=0x00000000003dca36
- (id)aliasedHAPCharacteristicTypes;	// IMP=0x00000000003dca06
- (_Bool)checkTupleExistsInSet:(id)arg1 forChrType:(id)arg2 svcType:(id)arg3;	// IMP=0x00000000003dc95d
- (_Bool)parseAndSetAssistantUnits:(id)arg1;	// IMP=0x00000000003dc5ff
- (_Bool)parseAndSetAssistantCharacteristics:(id)arg1;	// IMP=0x00000000003dbc50
- (_Bool)parseAndSetAssistantServices:(id)arg1;	// IMP=0x00000000003db85c
- (id)parseCharacteristicArray:(id)arg1;	// IMP=0x00000000003db556
- (id)parseServiceArray:(id)arg1;	// IMP=0x00000000003db250
- (void)parseAndSetHMCategories:(id)arg1;	// IMP=0x00000000003dae4c
- (void)parseAndSetWakeOnOperationsFilter:(id)arg1;	// IMP=0x00000000003daa5b
- (void)parseAndSetAllowableSecuringWrites:(id)arg1;	// IMP=0x00000000003da628
- (id)parseMetadataTupleSetFromPlist:(id)arg1;	// IMP=0x00000000003da4d4
- (_Bool)parseAndSetAssistantMetadataWithAssistantPlist:(id)arg1;	// IMP=0x00000000003da24a
- (_Bool)parseAndSetHMMetadataWithHMPlist:(id)arg1;	// IMP=0x00000000003d9bbb
- (id)parseAndSetRawPlist:(id)arg1;	// IMP=0x00000000003d9893
- (_Bool)disallowsAssistantServiceType:(id)arg1 characteristicType:(id)arg2;	// IMP=0x00000000003d97e4
- (id)mapToAssistantCharacteristicValue:(id)arg1 name:(id)arg2 getActionType:(_Bool)arg3;	// IMP=0x00000000003d9489
- (id)mapFromAssistantCharacteristicValue:(id)arg1 name:(id)arg2;	// IMP=0x00000000003d9326
- (id)mapFromAssistantUnitName:(id)arg1;	// IMP=0x00000000003d92ac
- (id)mapToAssistantUnitName:(id)arg1;	// IMP=0x00000000003d9232
- (id)mapCharacteristicValueType:(id)arg1;	// IMP=0x00000000003d9188
- (id)characteristicValueUnit:(id)arg1;	// IMP=0x00000000003d910e
- (id)getStatusCharacteristicTypes:(id)arg1 forServiceType:(id)arg2;	// IMP=0x00000000003d9051
- (id)getCharacteristicTypeAlias:(id)arg1;	// IMP=0x00000000003d8fd7
- (id)getAliasedCharacteristicTypes:(id)arg1;	// IMP=0x00000000003d8da2
- (id)getServiceTypeAlias:(id)arg1;	// IMP=0x00000000003d8d28
- (id)getAliasedServiceType:(id)arg1;	// IMP=0x00000000003d8b3e
- (id)mapWriteCharacteristicFromAssistantName:(id)arg1;	// IMP=0x00000000003d8a55
- (id)mapReadCharacteristicFromAssistantName:(id)arg1;	// IMP=0x00000000003d896c
- (id)mapToAssistantCharacteristicName:(id)arg1;	// IMP=0x00000000003d882c
- (id)mapToAssistantServiceSubtypeName:(id)arg1 accessoryCategory:(id)arg2;	// IMP=0x00000000003d8754
- (id)mapToAssistantServiceSubtypeName:(id)arg1;	// IMP=0x00000000003d86e8
- (id)mapFromAssistantServiceName:(id)arg1;	// IMP=0x00000000003d866e
- (id)mapToAssistantServiceName:(id)arg1;	// IMP=0x00000000003d858e
- (_Bool)supportsLocalization:(id)arg1;	// IMP=0x00000000003d84fb
- (id)serviceSubtypeForValue:(id)arg1 forServiceType:(id)arg2;	// IMP=0x00000000003d83ec
- (id)categoryTypeFromName:(id)arg1;	// IMP=0x00000000003d820a
- (id)categoryForType:(id)arg1;	// IMP=0x00000000003d80e1
- (id)categoryForIdentifier:(id)arg1;	// IMP=0x00000000003d7fed
- (id)audioAccessoryCategory;	// IMP=0x00000000003d7fa5
- (id)categoryForOther;	// IMP=0x00000000003d7f4e
- (_Bool)shouldRefreshValueForCharacteristicWithType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000003d7e9e
- (_Bool)shouldFilterEnableNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000003d7d77
- (_Bool)shouldFilterChangeNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000003d7c50
- (_Bool)shouldHomeAppShowTileForServiceType:(id)arg1;	// IMP=0x00000000003d7bf0
- (_Bool)shouldEnableHomeNotificationForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000003d7a40
- (_Bool)shouldAutoEnableNotificationForCharacteristic:(id)arg1 ofService:(id)arg2;	// IMP=0x00000000003d783c
- (_Bool)isSecondsDownCounterCharacteristicType:(id)arg1;	// IMP=0x00000000003d77dc
- (_Bool)generateNotificationOnConfigurationForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000003d772c
- (_Bool)shouldNotCacheCharacteristicOfType:(id)arg1;	// IMP=0x00000000003d76cc
- (_Bool)shouldFilterCharacteristicOfTypeFromApp:(id)arg1;	// IMP=0x00000000003d765e
- (_Bool)shouldFilterServiceOfTypeFromApp:(id)arg1;	// IMP=0x00000000003d75f0
- (_Bool)shouldFilterCharacteristicOfType:(id)arg1;	// IMP=0x00000000003d753c
- (_Bool)shouldFilterServiceOfType:(id)arg1;	// IMP=0x00000000003d7488
- (_Bool)shouldCoalesceCharacteristicNotifications:(id)arg1 forService:(id)arg2;	// IMP=0x00000000003d73f5
- (_Bool)isTargetCharacteristic:(id)arg1;	// IMP=0x00000000003d7395
- (_Bool)requiresTimedWrite:(id)arg1 forService:(id)arg2;	// IMP=0x00000000003d72ed
- (_Bool)requiresDeviceUnlock:(id)arg1 forService:(id)arg2;	// IMP=0x00000000003d725a
- (_Bool)shouldAllowToWakeSuspendedAccessoryForOperation:(long long)arg1 service:(id)arg2 characteristicType:(id)arg3 value:(id)arg4;	// IMP=0x00000000003d6ad2
- (_Bool)allowsSecuringWriteFor:(id)arg1 withValue:(id)arg2;	// IMP=0x00000000003d6a17
- (id)descriptionForCharacteristicType:(id)arg1;	// IMP=0x00000000003d699d
- (id)descriptionForServiceType:(id)arg1;	// IMP=0x00000000003d6923
- (id)validateAssociatedServiceType:(id)arg1 forService:(id)arg2;	// IMP=0x00000000003d62e2
- (_Bool)supportsAuthorizationData:(id)arg1 forService:(id)arg2;	// IMP=0x00000000003d6252
- (_Bool)isStandardServiceType:(id)arg1;	// IMP=0x00000000003d61e4
- (_Bool)isStandardCharacteristicType:(id)arg1;	// IMP=0x00000000003d6176
- (id)serviceTypeFromName:(id)arg1;	// IMP=0x00000000003d60fc
- (id)serviceNameFromType:(id)arg1;	// IMP=0x00000000003d6082
- (id)characteristicTypeFromName:(id)arg1;	// IMP=0x00000000003d6008
- (id)characteristicNameFromType:(id)arg1;	// IMP=0x00000000003d5f8e
- (id)xpcData:(_Bool)arg1;	// IMP=0x00000000003d5e31
- (id)initWithFullPlist:(id)arg1 hapMetadata:(id)arg2;	// IMP=0x00000000003d5daa
- (id)initWithDictionary:(id)arg1 hapMetadata:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003d5cb1
- (id)initWithFullPlist:(id)arg1 hapMetadata:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003d5b61

@end
