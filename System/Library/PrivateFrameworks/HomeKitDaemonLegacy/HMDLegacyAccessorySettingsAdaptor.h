//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol HMDLegacyAccessorySettingsAdaptorDelegate, HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider, HMESubscriptionProviding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDLegacyAccessorySettingsAdaptor : NSObject
{
    id <HMDLegacyAccessorySettingsAdaptorDelegate> delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSUUID *_homeUUID;	// 24 = 0x18
    NSUUID *_accessoryUUID;	// 32 = 0x20
    id <HMESubscriptionProviding> _subscriptionProvider;	// 40 = 0x28
    id <HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> _currentAccessorySettingsController;	// 48 = 0x30
}

+ (id)parsedLanguageListSetting:(id)arg1 topic:(id)arg2;	// IMP=0x0010000000655a46
+ (id)parsedLanguageSetting:(id)arg1 topic:(id)arg2;	// IMP=0x0010000000655723
+ (id)parsedIntegerSettingEvent:(id)arg1 topic:(id)arg2;	// IMP=0x0010000000655453
+ (id)parsedBoolSettingEvent:(id)arg1 topic:(id)arg2;	// IMP=0x00100000006550e6
+ (id)logCategory;	// IMP=0x00100000006550b6
- (void).cxx_destruct;	// IMP=0x00000000006546cd
@property(readonly, nonatomic) __weak id <HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> currentAccessorySettingsController; // @synthesize currentAccessorySettingsController=_currentAccessorySettingsController;
@property(readonly, nonatomic) id <HMESubscriptionProviding> subscriptionProvider; // @synthesize subscriptionProvider=_subscriptionProvider;
@property(readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMDLegacyAccessorySettingsAdaptorDelegate> delegate; // @synthesize delegate;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x00000000006541f9
- (id)_transformLegacyLanguageSettingValueToImmutableSetting:(id)arg1;	// IMP=0x0000000000653fb5
- (id)_settingValueForKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x000000000065378f
- (id)languageValueList;	// IMP=0x0000000000653782
- (void)updateSettingWithKeyPath:(id)arg1 settingValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000653409
- (void)startup;	// IMP=0x0000000000653056
- (id)initWithQueue:(id)arg1 homeUUID:(id)arg2 accessoryUUID:(id)arg3 settingsController:(id)arg4 subscriptionProvider:(id)arg5;	// IMP=0x0000000000652f54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
