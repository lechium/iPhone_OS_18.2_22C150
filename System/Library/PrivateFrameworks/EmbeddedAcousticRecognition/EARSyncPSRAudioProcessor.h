//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol EARSyncPSRAudioProcessorDelegate, OS_dispatch_queue;

@interface EARSyncPSRAudioProcessor : NSObject
{
    struct shared_ptr<quasar::SyncPSRAudioProcessor> _audioProcessor;	// 8 = 0x8
    struct SystemConfig _sysConfig;	// 24 = 0x18
    unsigned long long _sampleRate;	// 1568 = 0x620
    double _scoreReportTimestamp;	// 1576 = 0x628
    long long _maxBufferSizeSeconds;	// 1584 = 0x630
    unsigned long long _accumulatedProcessingTime;	// 1592 = 0x638
    _Bool _lastRowOutputOnly;	// 1600 = 0x640
    id <EARSyncPSRAudioProcessorDelegate> _delegate;	// 1608 = 0x648
    NSString *_configRoot;	// 1616 = 0x650
    NSObject<OS_dispatch_queue> *_queue;	// 1624 = 0x658
}

+ (void)initialize;	// IMP=0x0060000000819854
- (id).cxx_construct;	// IMP=0x000000000081a877
- (void).cxx_destruct;	// IMP=0x000000000081a82b
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *configRoot; // @synthesize configRoot=_configRoot;
@property(nonatomic) __weak id <EARSyncPSRAudioProcessorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getAccmulatedProcessingTime;	// IMP=0x000000000081a710
- (unsigned long long)getProcessedAudioDurationMs;	// IMP=0x000000000081a656
- (id)getLatestSuperVector;	// IMP=0x000000000081a4f9
- (void)endAudio;	// IMP=0x000000000081a29a
- (void)addAudio:(id)arg1;	// IMP=0x0000000000819f14
- (void)resetForNewRequest;	// IMP=0x0000000000819d72
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5 maxBufferSizeSeconds:(long long)arg6 memoryLock:(_Bool)arg7 outputLastRowOnly:(_Bool)arg8;	// IMP=0x0000000000819999
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5 maxBufferSizeSeconds:(long long)arg6;	// IMP=0x000000000081996c
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5 outputLastRowOnly:(_Bool)arg6;	// IMP=0x0000000000819949
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5;	// IMP=0x000000000081992d
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4;	// IMP=0x00000000008198a2

@end
