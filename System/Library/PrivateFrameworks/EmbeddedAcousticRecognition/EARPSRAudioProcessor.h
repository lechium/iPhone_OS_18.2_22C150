//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol EARPSRAudioProcessorDelegate, OS_dispatch_queue;

@interface EARPSRAudioProcessor : NSObject
{
    struct shared_ptr<quasar::PSRAudioProcessor> _audioProcessor;	// 8 = 0x8
    struct SystemConfig _sysConfig;	// 24 = 0x18
    unsigned long long _sampleRate;	// 1568 = 0x620
    NSString *_configRoot;	// 1576 = 0x628
    id <EARPSRAudioProcessorDelegate> _delegate;	// 1584 = 0x630
    NSObject<OS_dispatch_queue> *_queue;	// 1592 = 0x638
    unsigned long long _batchSize;	// 1600 = 0x640
}

+ (void)initialize;	// IMP=0x006000000060a636
- (id).cxx_construct;	// IMP=0x000000000060b386
- (void).cxx_destruct;	// IMP=0x000000000060b33a
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <EARPSRAudioProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *configRoot; // @synthesize configRoot=_configRoot;
- (void)dealloc;	// IMP=0x000000000060b1fc
- (void)_startComputeTask;	// IMP=0x000000000060acc4
- (void)resetForNewRequest;	// IMP=0x000000000060ab9c
- (void)endAudio;	// IMP=0x000000000060ab3b
- (void)addAudio:(id)arg1;	// IMP=0x000000000060aab9
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5;	// IMP=0x000000000060a70f
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4;	// IMP=0x000000000060a684

@end

