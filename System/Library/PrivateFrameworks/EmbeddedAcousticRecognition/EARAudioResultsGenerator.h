//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;
@protocol EARAudioResultsGeneratorDelegate, OS_dispatch_queue;

@interface EARAudioResultsGenerator : NSObject
{
    struct shared_ptr<quasar::SyncPSRAudioProcessor> _audioProcessor;	// 8 = 0x8
    struct SystemConfig _sysConfig;	// 24 = 0x18
    unsigned long long _sampleRate;	// 1568 = 0x620
    _Bool _isAudioSessionLive;	// 1576 = 0x628
    NSMutableData *_entireResultMatrix;	// 1584 = 0x630
    unsigned long long _globalNumVectors;	// 1592 = 0x638
    unsigned long long _vectorSize;	// 1600 = 0x640
    unsigned long long _sessionFrameCount;	// 1608 = 0x648
    id <EARAudioResultsGeneratorDelegate> _delegate;	// 1616 = 0x650
    NSString *_configRoot;	// 1624 = 0x658
    NSObject<OS_dispatch_queue> *_queue;	// 1632 = 0x660
}

+ (void)initialize;	// IMP=0x00600000006beef0
- (id).cxx_construct;	// IMP=0x00000000006c0420
- (void).cxx_destruct;	// IMP=0x00000000006c03c6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *configRoot; // @synthesize configRoot=_configRoot;
@property(nonatomic) __weak id <EARAudioResultsGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endAudio;	// IMP=0x00000000006bffc4
- (void)addAudio:(id)arg1;	// IMP=0x00000000006bfb3a
- (id)audioResultLastVector;	// IMP=0x00000000006bf834
- (id)audioResultMatrix;	// IMP=0x00000000006bf4ee
- (void)resetForNewRequest;	// IMP=0x00000000006bf32b
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5;	// IMP=0x00000000006bef3e

@end
