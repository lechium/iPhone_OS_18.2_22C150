//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAssetManager, CSLanguageCodeUpdateMonitor, CSOnDeviceCompilationHandler, CSUAFAssetManager, CSUAFDownloadMonitor, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriMitigationAssetHandler : NSObject
{
    _Bool _overrideEnabled;	// 8 = 0x8
    CSAsset *_cachedAsset;	// 16 = 0x10
    CSAssetManager *_assetManager;	// 24 = 0x18
    CSUAFAssetManager *_uafAssetManager;	// 32 = 0x20
    CSUAFDownloadMonitor *_uafDownloadMonitor;	// 40 = 0x28
    CSLanguageCodeUpdateMonitor *_languageCodeUpdateMonitor;	// 48 = 0x30
    NSString *_overridePath;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSHashTable *_observers;	// 72 = 0x48
    CSOnDeviceCompilationHandler *_onDeviceCompilationHandler;	// 80 = 0x50
}

+ (id)sharedHandlerDisabledOnDeviceCompilation;	// IMP=0x0020000000039f68
+ (id)sharedHandler;	// IMP=0x0010000000039f38
- (void).cxx_destruct;	// IMP=0x002000000003954f
@property(retain, nonatomic) CSOnDeviceCompilationHandler *onDeviceCompilationHandler; // @synthesize onDeviceCompilationHandler=_onDeviceCompilationHandler;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *overridePath; // @synthesize overridePath=_overridePath;
@property(nonatomic) _Bool overrideEnabled; // @synthesize overrideEnabled=_overrideEnabled;
@property(retain, nonatomic) CSLanguageCodeUpdateMonitor *languageCodeUpdateMonitor; // @synthesize languageCodeUpdateMonitor=_languageCodeUpdateMonitor;
@property(retain, nonatomic) CSUAFDownloadMonitor *uafDownloadMonitor; // @synthesize uafDownloadMonitor=_uafDownloadMonitor;
@property(retain, nonatomic) CSUAFAssetManager *uafAssetManager; // @synthesize uafAssetManager=_uafAssetManager;
@property(retain, nonatomic) CSAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain) CSAsset *cachedAsset; // @synthesize cachedAsset=_cachedAsset;
- (void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x00100000000393c9
- (void)voiceTriggerAssetHandler:(id)arg1 endpointId:(id)arg2 didChangeCachedAsset:(id)arg3;	// IMP=0x00100000000393c3
- (void)_getPreinstalledMitigationAssetForCurrentLocale:(CDUnknownBlockType)arg1;	// IMP=0x0010000000038f14
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x0010000000038e6c
- (void)assetDownloadMonitorDelegate:(id)arg1 assetType:(unsigned long long)arg2;	// IMP=0x0010000000038d77
- (id)getNeuralCombinerConfigFile;	// IMP=0x0010000000038d6f
- (void)_receivedNewAssetUpdate:(id)arg1;	// IMP=0x0010000000038c30
- (void)triggerAssetRefresh;	// IMP=0x0010000000038be5
- (void)_getMitigationAssetWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038a43
- (void)getMitigationAssetWithEndpointId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003898c
- (void)setCachedAssetWithOverride:(id)arg1;	// IMP=0x0010000000038758
- (void)notifyObservers:(id)arg1 endpointId:(id)arg2;	// IMP=0x0010000000038699
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000003860c
- (void)registerObserver:(id)arg1;	// IMP=0x001000000003857f
- (void)start;	// IMP=0x0010000000038510
- (id)initWithAssetManager:(id)arg1 withUAFAssetManager:(id)arg2 withUAFDownloadMonitor:(id)arg3 withLanguageCodeUpdateMonitor:(id)arg4 withAssetOverrideFlag:(_Bool)arg5 withOverrideAssetPath:(id)arg6;	// IMP=0x00100000000384e9
- (id)initWithAssetManager:(id)arg1 withUAFAssetManager:(id)arg2 withUAFDownloadMonitor:(id)arg3 withLanguageCodeUpdateMonitor:(id)arg4 withAssetOverrideFlag:(_Bool)arg5 withOverrideAssetPath:(id)arg6 disableOnDeviceCompilation:(_Bool)arg7;	// IMP=0x0010000000038263
- (id)initWithDisableOnDeviceCompilation;	// IMP=0x0010000000038194
- (id)init;	// IMP=0x00100000000380cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
