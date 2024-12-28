//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTBlazarService, NSDate, NSString, _LTBatchTranslationResponseHandler, _LTDSELFLoggingManager, _LTOspreySpeechTranslationSession, _LTTextToSpeechCache;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _LTOnlineTranslationEngine : NSObject
{
    FTBlazarService *_blazarService;	// 8 = 0x8
    FTBlazarService *_siriService;	// 16 = 0x10
    FTBlazarService *_systemService;	// 24 = 0x18
    FTBlazarService *_webTaskService;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_translationQueue;	// 40 = 0x28
    _LTOspreySpeechTranslationSession *_speechSession;	// 48 = 0x30
    _LTBatchTranslationResponseHandler *batchTranslationResponseHandler;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_timerQueue;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_serverTimer;	// 72 = 0x48
    NSDate *_startTime;	// 80 = 0x50
    _LTDSELFLoggingManager *_selfLoggingManager;	// 88 = 0x58
    _LTTextToSpeechCache *_ttsCache;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_serverQueue;	// 104 = 0x68
}

+ (id)blazarServiceWithBundleID:(id)arg1;	// IMP=0x00100000000563ee
+ (void)initialize;	// IMP=0x00100000000562df
- (void).cxx_destruct;	// IMP=0x000000000005b92c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
@property(retain, nonatomic) _LTTextToSpeechCache *ttsCache; // @synthesize ttsCache=_ttsCache;
- (void)cancelSpeechTranslation:(_Bool)arg1;	// IMP=0x000000000005b7d7
- (void)_speechSessionCompletedWithError:(id)arg1;	// IMP=0x000000000005b707
- (void)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000005b2d0
- (_Bool)_hasOngoingSpeechSession;	// IMP=0x000000000005b269
- (void)endAudio;	// IMP=0x000000000005b253
- (void)endpoint;	// IMP=0x000000000005b23d
- (void)addSpeechAudioData:(id)arg1;	// IMP=0x000000000005b227
- (void)setLanguagesRecognized:(id)arg1 context:(id)arg2;	// IMP=0x000000000005b211
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000005ac66
- (void)translate:(id)arg1 withContext:(id)arg2 paragraphResult:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005a155
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059aac
- (void)sendBatchTranslationRequestWithDelegate:(id)arg1;	// IMP=0x00000000000587b4
- (void)_createOrUpdateBatchTranslationRequestWithParagraph:(id)arg1 index:(long long)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005785c
- (void)speak:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000056e76
- (id)_tokenizeString:(id)arg1 inLocale:(id)arg2;	// IMP=0x0000000000056dc1
- (void)serverTimeoutFired;	// IMP=0x0000000000056c7a
- (void)cancelServerTimeout;	// IMP=0x0000000000056b5b
- (void)updateServerTimeout;	// IMP=0x00000000000568bf
- (void)startServerTimeoutTimer;	// IMP=0x0000000000056740
- (void)preheatAsynchronously:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x000000000005673a
- (_Bool)translatesPair:(id)arg1;	// IMP=0x0000000000056732
- (id)_serviceForTask:(long long)arg1;	// IMP=0x00000000000566fa
- (id)_webTaskService;	// IMP=0x00000000000566a8
- (id)_systemService;	// IMP=0x0000000000056656
- (id)_siriService;	// IMP=0x0000000000056604
- (id)_blazarService;	// IMP=0x00000000000565b2
- (id)initWithSelfLoggingManager:(id)arg1;	// IMP=0x000000000005631f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
