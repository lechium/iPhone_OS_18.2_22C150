//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _EARFormatter;
@protocol OS_dispatch_queue;

@interface _EARSyncSpeechRecognizer : NSObject
{
    NSObject<OS_dispatch_queue> *_formatterQueue;	// 8 = 0x8
    _EARFormatter *_formatter;	// 16 = 0x10
    struct shared_ptr<quasar::SyncSpeechRecognizer> _syncRecognizer;	// 24 = 0x18
    NSString *_configPath;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x006000000017aa9c
- (id).cxx_construct;	// IMP=0x000000000017bfc0
- (void).cxx_destruct;	// IMP=0x000000000017bf84
- (id)resultsWithEndedAudio;	// IMP=0x000000000017be3c
- (id)resultsWithAddedFloatAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3;	// IMP=0x000000000017bc5c
- (id)resultsWithAddedAudio:(id)arg1 numberOfSamples:(unsigned long long)arg2 taskName:(id)arg3;	// IMP=0x000000000017bac9
- (id)getSpeechRecognitionResultFromTokens:(vector_daa4424d)arg1 taskName:(id)arg2;	// IMP=0x000000000017b2f6
- (void)resetWithSamplingRate:(unsigned int)arg1 language:(id)arg2 taskType:(id)arg3 userId:(id)arg4 sessionId:(id)arg5 deviceId:(id)arg6 farField:(_Bool)arg7 atypicalSpeech:(_Bool)arg8 maxAudioBufferSizeSeconds:(unsigned int)arg9;	// IMP=0x000000000017b029
- (void)resetWithSamplingRate:(unsigned int)arg1 language:(id)arg2 taskType:(id)arg3 userId:(id)arg4 sessionId:(id)arg5 deviceId:(id)arg6 farField:(_Bool)arg7 audioSource:(id)arg8 maxAudioBufferSizeSeconds:(unsigned int)arg9;	// IMP=0x000000000017ad4e
- (id)initWithConfiguration:(id)arg1 memoryLock:(_Bool)arg2;	// IMP=0x000000000017aad8
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000017aac4

@end
