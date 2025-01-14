//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID, NSXPCConnection, _LTTranslationServer;
@protocol _LTClientConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _LTClientConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    _LTTranslationServer *_server;	// 16 = 0x10
    _Bool _trusted;	// 24 = 0x18
    NSString *_trustedClientIdentifier;	// 32 = 0x20
    NSUUID *_speechSessionID;	// 40 = 0x28
    id <_LTClientConnectionDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000086fb
@property(nonatomic) __weak id <_LTClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)selfLoggingInvocationDidError:(id)arg1 invocationId:(id)arg2;	// IMP=0x00000000000086be
- (void)selfLoggingInvocationCancelledForIDs:(id)arg1;	// IMP=0x00000000000086a8
- (void)selfLoggingLanguageIdentificationCompletedWithLIDData:(id)arg1;	// IMP=0x0000000000008692
- (void)selfLoggingInvocationStartedWithData:(id)arg1 invocationStartedTier1Data:(id)arg2;	// IMP=0x00000000000085e6
- (void)selfLoggingEventWithData:(id)arg1;	// IMP=0x0000000000008582
- (void)onDeviceModeSupported:(CDUnknownBlockType)arg1;	// IMP=0x00000000000084fd
- (void)onDeviceModeEnabled:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008478
- (void)_deleteHotfix:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008462
- (void)_updateHotfix:(CDUnknownBlockType)arg1;	// IMP=0x000000000000844c
- (void)logWithRequestData:(id)arg1;	// IMP=0x00000000000082dd
- (void)provideFeedback:(id)arg1 withContext:(id)arg2;	// IMP=0x00000000000082d7
- (void)configInfoForLocale:(id)arg1 otherLocale:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000082c1
- (void)additionalLikelyPreferredLocalesForLocale:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000082ab
- (void)task:(long long)arg1 isSupportedInCountry:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008295
- (void)availableLocalePairsForTask:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000827f
- (void)_getAssetSize:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008269
- (void)startInstallRequest:(id)arg1;	// IMP=0x00000000000081fd
- (void)installedLocalesForTask:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000081e7
- (void)installedLocales:(CDUnknownBlockType)arg1;	// IMP=0x00000000000081d1
- (void)_updateAllAssets:(CDUnknownBlockType)arg1;	// IMP=0x00000000000081bb
- (void)_purgeAllAssetsExcludingConfig:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000081a5
- (void)_purgeAssetForLanguagePair:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000818f
- (void)_downloadAssetForLanguagePair:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008179
- (void)_offlineLanguageStatus:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008163
- (void)cancelLanguageStatusChangeObservation:(id)arg1;	// IMP=0x000000000000814a
- (void)startLanguageStatusChangeObservation:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007fd3
- (void)removeLanguages:(id)arg1;	// IMP=0x0000000000007fba
- (void)addLanguages:(id)arg1 useCellular:(_Bool)arg2;	// IMP=0x0000000000007fa1
- (void)assetRequestHandler:(id)arg1;	// IMP=0x0000000000007e22
- (void)languageAssetsWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007e0c
- (void)logRequestOfType:(id)arg1 context:(id)arg2;	// IMP=0x0000000000007c41
- (void)attemptToCancelRequestsWithSessionID:(id)arg1;	// IMP=0x0000000000007c2b
- (void)cleanup;	// IMP=0x0000000000007c15
- (void)languagesForText:(id)arg1 usingModel:(unsigned long long)arg2 strategy:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007b3e
- (void)languagesForText:(id)arg1 usingModel:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007b26
- (void)languagesForText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007b0c
- (void)languageForText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007a88
- (void)shouldPresentSystemFirstUseConsent:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007a72
- (void)preheatWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000079dc
- (void)textStreamingConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000079c6
- (void)modalitiesPerLocaleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000079b0
- (void)autoDetectSpeechUnsupportedPairsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000799a
- (void)endAudio;	// IMP=0x0000000000007984
- (void)addSpeechAudioData:(id)arg1;	// IMP=0x000000000000796e
- (void)startSpeechTranslationWithContext:(id)arg1;	// IMP=0x00000000000078ba
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2;	// IMP=0x00000000000077bc
- (void)speak:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000076f3
- (void)translateParagraphs:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007590
- (void)translate:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007077
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006fcd
- (void)clearCaches;	// IMP=0x0000000000006fb7
- (void)cleanupOnDisconnect;	// IMP=0x0000000000006f07
- (id)_clientDelegate;	// IMP=0x0000000000006ef1
- (id)initWithConnection:(id)arg1 server:(id)arg2 trusted:(_Bool)arg3;	// IMP=0x0000000000006b62

@end

