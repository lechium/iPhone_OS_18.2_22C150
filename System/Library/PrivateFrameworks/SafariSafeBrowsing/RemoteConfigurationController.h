//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, ProviderConfiguration;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface RemoteConfigurationController : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_updateTimer;	// 16 = 0x10
    _Bool _googleConfigurationDidChange;	// 24 = 0x18
    _Bool _tencentConfigurationDidChange;	// 25 = 0x19
    _Bool _appleConfigurationDidChange;	// 26 = 0x1a
    ProviderConfiguration *_googleProviderConfiguration;	// 32 = 0x20
    ProviderConfiguration *_tencentProviderConfiguration;	// 40 = 0x28
    ProviderConfiguration *_appleProviderConfiguration;	// 48 = 0x30
    NSDictionary *_currentConfiguration;	// 56 = 0x38
}

+ (id)convertDyldVersionToString:(unsigned long long)arg1;	// IMP=0x006000000003ad0a
+ (id)sharedController;	// IMP=0x006000000003a882
- (void).cxx_destruct;	// IMP=0x000000000003dc8a
@property(copy, nonatomic) NSDictionary *currentConfiguration; // @synthesize currentConfiguration=_currentConfiguration;
@property(readonly, nonatomic) ProviderConfiguration *appleProviderConfiguration; // @synthesize appleProviderConfiguration=_appleProviderConfiguration;
@property(readonly, nonatomic) ProviderConfiguration *tencentProviderConfiguration; // @synthesize tencentProviderConfiguration=_tencentProviderConfiguration;
@property(readonly, nonatomic) ProviderConfiguration *googleProviderConfiguration; // @synthesize googleProviderConfiguration=_googleProviderConfiguration;
- (_Bool)forceUpdateConfigurationFromServer;	// IMP=0x000000000003d627
- (_Bool)forceLoadConfigurationFromDisk;	// IMP=0x000000000003d365
- (void)_scheduleConfigurationUpdateDaily;	// IMP=0x000000000003d07b
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;	// IMP=0x000000000003cfd7
- (id)_lastConfigurationUpdateAttemptDate;	// IMP=0x000000000003cf24
- (_Bool)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)arg1;	// IMP=0x000000000003cdf5
- (void)_didReceiveConfigurationData:(id)arg1;	// IMP=0x000000000003ccb1
- (void)_updateConfigurationIfNecessary;	// IMP=0x000000000003ca69
- (void)_downloadConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c684
- (void)_notifyProviderConfigurationsDidChangeIfNecessary;	// IMP=0x000000000003c61d
- (void)_setCurrentConfigurationOnInternalQueue:(id)arg1;	// IMP=0x000000000003c574
- (void)_writeConfigurationToDisk:(id)arg1;	// IMP=0x000000000003c2c3
- (void)_loadConfigurationFromDiskIfNecessary;	// IMP=0x000000000003c11c
- (id)_urlOfDownloadedConfiguration;	// IMP=0x000000000003be13
- (void)_resetProviderConfigurationsDidChange;	// IMP=0x000000000003be03
- (void)_initializeProviderConfigurationsWithConfiguration:(id)arg1;	// IMP=0x000000000003ae8e
- (id)_dyldSourceVersionString;	// IMP=0x000000000003ad66
- (void)_simplifyProviderConfigurations;	// IMP=0x000000000003ac22
- (void)_initializeToDefaultProviderConfigurations;	// IMP=0x000000000003ab35
- (id)_providerToTurnOffFromProviderDictionary:(id)arg1;	// IMP=0x000000000003aab7
@property(readonly, nonatomic, getter=isSafeBrowsingOff) _Bool safeBrowsingOff;
- (void)dealloc;	// IMP=0x000000000003a9c3
- (id)init;	// IMP=0x000000000003a8d7

@end
