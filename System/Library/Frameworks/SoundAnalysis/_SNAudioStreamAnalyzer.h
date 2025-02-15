//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _SNAudioStreamAnalyzer : NSObject
{
    MISSING_TYPE *receivedBufferCount;	// 8 = 0x8
    MISSING_TYPE *id;	// 16 = 0x10
    MISSING_TYPE *requests;	// 32 = 0x20
    MISSING_TYPE *currentFormat;	// 40 = 0x28
    MISSING_TYPE *analyzerQueue;	// 48 = 0x30
    MISSING_TYPE *firstPassRecordingPredicate;	// 56 = 0x38
    MISSING_TYPE *firstPassRecordingHistoryDuration;	// 64 = 0x40
    MISSING_TYPE *sysdiagnoseHistoryDuration;	// 88 = 0x58
    MISSING_TYPE *firstPassAnalyzer;	// 112 = 0x70
    MISSING_TYPE *firstPassUltronReportOps;	// 120 = 0x78
    MISSING_TYPE *firstPassResultsHistory;	// 128 = 0x80
    MISSING_TYPE *ringBuffer;	// 136 = 0x88
    MISSING_TYPE *ringBufferWriteBufferList;	// 144 = 0x90
    MISSING_TYPE *unregisterLogCollectHook;	// 152 = 0x98
    MISSING_TYPE *combineAnalyzer;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000000398ce
- (id)init;	// IMP=0x000000000003befd
@property(nonatomic, readonly) NSString *detailedDescription;
- (void)completeAnalysis;	// IMP=0x000000000003bd79
- (void)analyzeAudioBuffer:(id)arg1 atAudioFramePosition:(long long)arg2;	// IMP=0x000000000003b663
- (void)removeAllRequests;	// IMP=0x000000000003b584
- (void)removeRequest:(id)arg1;	// IMP=0x000000000003ae8b
- (_Bool)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 resultsHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x000000000003a2bf
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000039bf0
- (void)dealloc;	// IMP=0x00000000000398b1
- (id)initWithFormat:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000385ac

@end

