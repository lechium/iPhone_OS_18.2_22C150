//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AVVCMetricsManager : NSObject
{
    _Bool mProfileAVVC;	// 8 = 0x8
    unsigned long long _voiceTriggerStartHostTime;	// 16 = 0x10
    unsigned long long _callToStartRecordHostTime;	// 24 = 0x18
    NSMutableDictionary *_publicMetrics;	// 32 = 0x20
    NSMutableDictionary *_avvcProfilingInfoDictionary;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x006000000005b523
+ (void)destroySharedManager;	// IMP=0x006000000005b3d5
+ (void)createSharedManager;	// IMP=0x006000000005b264
+ (void *)getLock;	// IMP=0x006000000005b238
- (void).cxx_destruct;	// IMP=0x000000000005b210
@property(retain) NSMutableDictionary *avvcProfilingInfoDictionary; // @synthesize avvcProfilingInfoDictionary=_avvcProfilingInfoDictionary;
@property(retain) NSMutableDictionary *publicMetrics; // @synthesize publicMetrics=_publicMetrics;
@property(nonatomic) unsigned long long callToStartRecordHostTime; // @synthesize callToStartRecordHostTime=_callToStartRecordHostTime;
@property(nonatomic) unsigned long long voiceTriggerStartHostTime; // @synthesize voiceTriggerStartHostTime=_voiceTriggerStartHostTime;
- (void)logProfileMetrics:(id)arg1;	// IMP=0x000000000005b19c
- (int)disposeADAM;	// IMP=0x000000000005b194
- (int)adamAnalyzeBuffer:(struct AudioBufferList)arg1 numFrames:(unsigned int)arg2 timeStamp:(const struct AudioTimeStamp *)arg3 shouldAnalyze:(_Bool)arg4;	// IMP=0x000000000005b18c
- (int)setADAMFormat:(struct CAStreamBasicDescription)arg1 numFrames:(unsigned int)arg2;	// IMP=0x000000000005b184
- (int)resetAudioIssueDetector;	// IMP=0x000000000005b17c
- (int)audioIssueDetectorAnalyzeBuffer:(struct AudioBufferList)arg1 numFrames:(unsigned int)arg2 timeStamp:(const struct AudioTimeStamp *)arg3 shouldAnalyze:(_Bool)arg4;	// IMP=0x000000000005b174
- (int)setAudioIssueDetectorFormat:(struct CAStreamBasicDescription)arg1 numFrames:(unsigned int)arg2;	// IMP=0x000000000005b16c
- (_Bool)measureElapseTimeForMetric:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000005ade3
- (id)retrieveProfileMetrics;	// IMP=0x000000000005ad77
- (void)resetProfileMetrics;	// IMP=0x000000000005ad71
- (id)getStringDate:(id)arg1;	// IMP=0x000000000005ac86
- (id)retrieveMetrics;	// IMP=0x000000000005abd5
- (void)dealloc;	// IMP=0x000000000005aa91
- (id)init;	// IMP=0x000000000005a73e

@end
