//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary, NSPersistentContainer, NSString, RMDebounceTimer;

@interface RMStoreController : NSObject
{
    NSManagedObjectContext *_context;	// 8 = 0x8
    NSPersistentContainer *_persistentContainer;	// 16 = 0x10
    NSMutableDictionary *_clientByIdentifier;	// 24 = 0x18
    RMDebounceTimer *_debouncer;	// 32 = 0x20
}

+ (void)start;	// IMP=0x002000000008bcab
+ (id)sharedController;	// IMP=0x001000000008bab4
- (void).cxx_destruct;	// IMP=0x0020000000099acf
@property(retain, nonatomic) RMDebounceTimer *debouncer; // @synthesize debouncer=_debouncer;
@property(retain, nonatomic) NSMutableDictionary *clientByIdentifier; // @synthesize clientByIdentifier=_clientByIdentifier;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (id)_newPayloadWithDeclaration:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000996a3
- (id)_payloadsForPayloadClass:(Class)arg1 identifier:(id)arg2 managementSource:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000099384
- (id)_payloadsForDeclarationIdentifier:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000099093
- (id)_buildFlattenedConfigurations:(id)arg1 includeAssets:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000098941
- (id)_configurationsWithVisibleUIForConfigurationTypes:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000098460
- (id)_activeConfigurationsForStoreIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000982e9
- (id)_activeConfigurationsForConfigurationTypes:(id)arg1 storeIdentifier:(id)arg2 includeAssets:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0010000000097fb1
- (id)_activeConfigurationsOnlyForConfigurationTypes:(id)arg1 storeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000097f99
- (id)_activeConfigurationsAndAssetsForConfigurationTypes:(id)arg1 storeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000097f7e
- (id)_declarationsOfClass:(Class)arg1 managementSource:(id)arg2 declarationTypes:(id)arg3 identifier:(id)arg4 error:(id *)arg5;	// IMP=0x001000000009788f
- (id)_declarationsForStoreIdentifier:(id)arg1 declarationTypes:(id)arg2 identifier:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000097516
- (void)_addOptionsToManagementSource:(id)arg1 options:(id)arg2;	// IMP=0x00100000000973dc
- (id)_allManagementSourcesReturningError:(id *)arg1;	// IMP=0x0010000000097157
- (id)_managementSourceWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000096f44
- (id)_subscriberStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000096e95
- (id)_providerStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000096de6
- (id)_observerStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000096d37
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 storeIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000096428
- (void)metadataValueForKey:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000095e9a
- (void)metadataForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009582c
- (void)certificateStatusWithStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000094f3d
- (void)certificatePersistentRefForAssetKey:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000094c1f
- (void)removeTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000094939
- (void)setTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000945d3
- (void)setConfigurationUIWithStoreIdentifier:(id)arg1 declarationIdentifier:(id)arg2 declarationServerToken:(id)arg3 visible:(_Bool)arg4 ui:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000093b9d
- (void)unassignAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000093850
- (void)resolveAsset:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000092d69
- (void)subscribedStoreConfigurationsVisibleUIWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000926c2
- (void)subscribedDeclarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000092387
- (void)subscribedStoreDeclarationsWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000091ca5
- (void)subscriberStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000091817
- (void)subscriberStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009151a
- (void)applyChangesForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000913c5
- (void)deleteDeclarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000090cc3
- (void)saveDeclaration:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000902e3
- (void)providerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008fe55
- (void)providerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008fb58
- (void)removeStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008f72d
- (void)createStoreWithType:(long long)arg1 defaultToInteractive:(_Bool)arg2 dataSeparated:(_Bool)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000008ee9b
- (void)_observerStoresDidChange;	// IMP=0x001000000008edf4
- (void)observerStoresDidChange;	// IMP=0x001000000008edb7
- (void)triggerAggregatingTimerAction;	// IMP=0x001000000008eda5
- (void)fetchDataAtURL:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e8ff
- (void)setShouldInstallConfiguration:(id)arg1 shouldInstall:(_Bool)arg2 storeIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008e7cd
- (void)displayableProfileConfigurationsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008e22f
- (void)configurationUIsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008d9ea
- (void)declarationManifestForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008d6bd
- (void)declarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008d37d
- (void)declarationsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008d07b
- (void)declarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008ccd0
- (void)observerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008c842
- (void)observerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008c545
- (id)_clientForIdentifier:(id)arg1;	// IMP=0x001000000008c4cb
- (void)_stopClientForIdentifier:(id)arg1;	// IMP=0x001000000008c405
- (id)_makeClientWithManagementSourceObjectID:(id)arg1 storeIdentifier:(id)arg2 persistentContainer:(id)arg3;	// IMP=0x001000000008c340
- (id)_startClientForSourceIdentifier:(id)arg1 objectID:(id)arg2;	// IMP=0x001000000008c255
- (void)_start;	// IMP=0x001000000008bd44
- (id)initWithPersistentContainer:(id)arg1 context:(id)arg2;	// IMP=0x001000000008bbb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

