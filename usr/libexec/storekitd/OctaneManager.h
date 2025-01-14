//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface OctaneManager : NSObject
{
    long long _cachedPort;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)testAccountID;	// IMP=0x0020000000022f0f
+ (id)sharedInstance;	// IMP=0x0010000000022e00
+ (id)simulatedStoreKitErrorFor:(long long)arg1 client:(id)arg2;	// IMP=0x001000000011e9be
- (void).cxx_destruct;	// IMP=0x0020000000028064
- (void)_refreshReceiptForBundleID:(id)arg1 logKey:(id)arg2;	// IMP=0x0010000000027c7f
- (void)_deleteDataWithContext:(id)arg1;	// IMP=0x0010000000027bdf
- (_Bool)_deleteConfigurationFileWithContext:(id)arg1;	// IMP=0x0010000000027a3a
- (id)_appNameForContext:(id)arg1;	// IMP=0x00100000000279ae
- (id)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x00100000000275c2
- (id)getStringValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x0010000000027341
- (id)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x0010000000026f75
- (long long)getIntegerValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x0010000000026d25
- (id)setBoolValue:(_Bool)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x0010000000026d11
- (_Bool)getBoolValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x0010000000026ce6
- (void)setStoreKitError:(long long)arg1 forCategory:(long long)arg2 bundleID:(id)arg3;	// IMP=0x0010000000026be6
- (long long)storeKitErrorForCategory:(long long)arg1 bundleID:(id)arg2;	// IMP=0x0010000000026aab
- (id)validateSKAdNetworkSignature:(id)arg1 withPublicKey:(id)arg2 source:(long long)arg3 andParameters:(id)arg4 withContext:(id)arg5;	// IMP=0x00100000000266c5
- (id)generateSKANPostbackSignature:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000026470
- (void)useConfigurationDirectory:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0010000000026364
- (void)unregisterForEventWithIdentifier:(id)arg1;	// IMP=0x001000000002628b
- (id)registerForEventOfType:(long long)arg1 filterData:(id)arg2;	// IMP=0x0010000000026112
- (id)setStorefront:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000025df6
- (id)saveSigningData:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000025dee
- (void)restartServerIfNecessary;	// IMP=0x0010000000025a94
- (void)portUpdated:(long long)arg1;	// IMP=0x0010000000025a30
- (id)performAction:(long long)arg1 withContext:(id)arg2;	// IMP=0x001000000002521e
- (id)messageOfTypeForBundleID:(id)arg1 messageReason:(id)arg2;	// IMP=0x001000000002517e
- (id)messageForBundleID:(id)arg1;	// IMP=0x0010000000025100
- (void)handleAppsUninstalledWithBundleIDs:(id)arg1;	// IMP=0x0010000000024dca
- (void)handleAppsInstalledWithBundleIDs:(id)arg1;	// IMP=0x00100000000248af
- (id)getTransactionDataWithContext:(id)arg1;	// IMP=0x0010000000024724
- (id)getStorefrontWithContext:(id)arg1;	// IMP=0x0010000000024599
- (id)expireOrRenewSubscriptionWithIdentifier:(id)arg1 expire:(_Bool)arg2 withContext:(id)arg3;	// IMP=0x00100000000241f9
- (void)dialogsDisabledForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000240e4
- (_Bool)dialogsDisabledForBundleID:(id)arg1;	// IMP=0x0010000000024087
- (void)deleteDataWithContext:(id)arg1;	// IMP=0x0010000000023fb6
- (id)deleteAllTransactionsWithContext:(id)arg1;	// IMP=0x0010000000023d4d
- (id)completeAskToBuyRequestWithResponse:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x0010000000023a46
- (id)clearOverridesWithContext:(id)arg1;	// IMP=0x0010000000023769
- (id)changeAutoRenewStatus:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x0010000000023452
- (id)buyProductWithID:(id)arg1 withContext:(id)arg2;	// IMP=0x001000000002310e
- (void)buyProductWithConfiguration:(id)arg1 withContext:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000002307f
- (long long)activePort;	// IMP=0x0010000000022f1c
- (id)init;	// IMP=0x0010000000022e85
- (id)configurationDirectoryForBundleID:(id)arg1 mustExist:(_Bool)arg2;	// IMP=0x001000000011bb40
- (id)configurationDataForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x001000000011e8fe
- (_Bool)saveConfigurationAssetData:(id)arg1 name:(id)arg2 withContext:(id)arg3 error:(id *)arg4;	// IMP=0x001000000011e021
- (_Bool)saveConfigurationData:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000011d5a5
- (void)startServerIfNecessaryFor:(id)arg1;	// IMP=0x001000000011c3ee
- (id)_configurationDirectoryPathForBundleID:(id)arg1 percentEncoded:(_Bool)arg2;	// IMP=0x001000000011c21f
- (_Bool)octaneEnabledForApplicationWithBundleID:(id)arg1;	// IMP=0x001000000011c0a1

@end

