//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSADCompanionServiceProvider, OS_dispatch_queue, OS_dispatch_semaphore;

@interface CSP2PService : NSObject
{
    id <CSADCompanionServiceProvider> _adCompanionServiceProvider;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_lastCommunicatedPeer;	// 24 = 0x18
    NSString *_voiceTriggerBatchId;	// 32 = 0x20
    NSString *_voiceIdentificationBatchId;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_sema;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00400000000c193e
- (void).cxx_destruct;	// IMP=0x00200000000bd018
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sema; // @synthesize sema=_sema;
@property(retain, nonatomic) NSString *voiceIdentificationBatchId; // @synthesize voiceIdentificationBatchId=_voiceIdentificationBatchId;
@property(retain, nonatomic) NSString *voiceTriggerBatchId; // @synthesize voiceTriggerBatchId=_voiceTriggerBatchId;
@property(retain, nonatomic) NSString *lastCommunicatedPeer; // @synthesize lastCommunicatedPeer=_lastCommunicatedPeer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSADCompanionServiceProvider> adCompanionServiceProvider; // @synthesize adCompanionServiceProvider=_adCompanionServiceProvider;
- (_Bool)fileURL:(id)arg1 matchesFileNamePattern:(id)arg2;	// IMP=0x00100000000bce2d
- (_Bool)shouldTransferVoiceTriggerLogFileWithURL:(id)arg1;	// IMP=0x00100000000bcba2
- (id)_sha1:(id)arg1;	// IMP=0x00100000000bcab7
- (_Bool);	// IMP=0x00100000000bca60
- (_Bool)isHeadlessDeviceDataCollectionModeEnabled;	// IMP=0x00100000000bca08
- (id)_getContentsOfDirectory:(id)arg1;	// IMP=0x00100000000bc7dc
- (id)_spIdSiriDebugVoiceProfileCacheDirectoryForProfile:(id)arg1 locale:(id)arg2;	// IMP=0x00100000000bc72f
- (id)_spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)arg1 locale:(id)arg2;	// IMP=0x00100000000bc6a6
- (id)_spIdSiriDebugTrainedUsersFilePathForLocale:(id)arg1;	// IMP=0x00100000000bc64f
- (id)_spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)arg1;	// IMP=0x00100000000bc5d5
- (id)_spIdSiriDebugVoiceProfileStoreRootDirectory;	// IMP=0x00100000000bc57e
- (id)_spIdSiriDebugGradingDataRootDirectory;	// IMP=0x00100000000bc50c
- (id)_spIdSiriDebugVTDataDirectory;	// IMP=0x00100000000bc49a
- (void)_createDirectoryIfDoesNotExist:(id)arg1;	// IMP=0x00100000000bc1e8
- (id)_speakerRecognitionAudioLogsGradingDir;	// IMP=0x00100000000bc185
- (void)_sendAcousticGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000bbfaf
- (void)_sendVoiceProfileUpdateTriggerToPeerId:(id)arg1 forLocale:(id)arg2;	// IMP=0x00100000000bbde8
- (void)_processVoiceProfileUpdateTriggerFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bb921
- (void)_processReverseTransferVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ba924
- (void)_sendVoiceProfile:(id)arg1 toPeerId:(id)arg2;	// IMP=0x00100000000b9ed1
- (void)_processFetchVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b986e
- (void)_getHomeUserIdForSharedSiriId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b94bc
- (void)_processVoiceProfileListQueryCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b899c
- (void)_processGradingDataFetchCommandWithRequest:(id)arg1 ofLogType:(unsigned long long)arg2 fromSenderID:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b871d
- (void)_processGradingDataFetchCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b8703
- (void)_processVoiceProfileDeleteCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b8627
- (void)_receiveVoiceProfileFromPeerId:(id)arg1 voiceProfileInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b6eb1
- (void)_receiveVoiceGradingDataFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b5f12
- (void)_receiveParallelRecordingFromPeerId:(id)arg1 recordingInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b509b
- (id)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(_Bool)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(_Bool)arg7 withFilePrefix:(id)arg8 withCompletion:(CDUnknownBlockType)arg9;	// IMP=0x00100000000b48f3
- (void)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(_Bool)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(_Bool)arg7 withFilePrefix:(id)arg8;	// IMP=0x00100000000b48ac
- (void)_sendCoreSpeechMagusGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000b46eb
- (void)_sendGeckoSpeechLogsToPeerId:(id)arg1;	// IMP=0x00100000000b4508
- (void)_sendCoreSpeechGradingDataToPeerId:(id)arg1 forLogType:(unsigned long long)arg2;	// IMP=0x00100000000b432b
- (void)_sendCoreSpeechGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000b4317
- (void)_sendVoiceTriggerGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000b4141
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 sortedByCreationDate:(_Bool)arg3 compressedFileAvailable:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b37fb
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 compressedFileAvailable:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b37e3
- (void)_processParallelRecordingCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b36da
- (void)_processRemoteHeySiriCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b3547
- (void)sendGeckoSpeechLogsToCompanion;	// IMP=0x00100000000b34c7
- (void)sendAcousticGradingDataToNearbyPeer;	// IMP=0x00100000000b3456
- (void)sendVoiceProfileUpdatedMessageToNearbyPeerForLocale:(id)arg1;	// IMP=0x00100000000b33c9
- (void)sendVTNearMissGradingDataToCompanion;	// IMP=0x00100000000b3349
- (void)sendCoreSpeechGradingDataToNearbyPeer;	// IMP=0x00100000000b32d8
- (void)processRemoteCommandWithPayload:(id)arg1 fromPeer:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b31f3
- (id)init;	// IMP=0x00100000000b317e

@end
