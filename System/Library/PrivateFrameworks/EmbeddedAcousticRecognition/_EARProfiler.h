//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _EARProfiler : NSObject
{
    unsigned long long _n_samples;	// 8 = 0x8
    double _max_rss;	// 16 = 0x10
    double _jetsam_max;	// 24 = 0x18
    double _jetsam_tot;	// 32 = 0x20
    struct vector<float, std::allocator<float>> _background_power;	// 40 = 0x28
    struct vector<void *, std::allocator<void *>> _networks;	// 64 = 0x40
    struct powerSummary _power_summary;	// 88 = 0x58
    double _start_time;	// 200 = 0xc8
    double _end_time;	// 208 = 0xd0
    double _ane_time;	// 216 = 0xd8
    NSString *_power_profiler_name;	// 224 = 0xe0
    NSString *_background_power_logfile_name;	// 232 = 0xe8
    NSString *_runtime_power_logfile_name;	// 240 = 0xf0
    _Bool __memoryProfiler;	// 248 = 0xf8
    _Bool __perfProfiler;	// 249 = 0xf9
    _Bool __powerProfiler;	// 250 = 0xfa
    _Bool __hasPMP;	// 251 = 0xfb
    _Bool __keepLogFiles;	// 252 = 0xfc
}

+ (id)sharedProfiler;	// IMP=0x0060000000a39a13
- (id).cxx_construct;	// IMP=0x0000000000a3c734
- (void).cxx_destruct;	// IMP=0x0000000000a3c6d0
@property _Bool _keepLogFiles; // @synthesize _keepLogFiles=__keepLogFiles;
@property _Bool _hasPMP; // @synthesize _hasPMP=__hasPMP;
@property _Bool _powerProfiler; // @synthesize _powerProfiler=__powerProfiler;
@property _Bool _perfProfiler; // @synthesize _perfProfiler=__perfProfiler;
@property _Bool _memoryProfiler; // @synthesize _memoryProfiler=__memoryProfiler;
- (void)parsePowerSummary:(id)arg1 writeTo:(struct powerSummary *)arg2;	// IMP=0x0000000000a3bdfd
- (void)cleanupLogfiles;	// IMP=0x0000000000a3bc69
- (void)reportProfiling;	// IMP=0x0000000000a3b927
- (id)reportProfilingAsDictionary;	// IMP=0x0000000000a3ae03
- (void)finishProfiling;	// IMP=0x0000000000a3ab3a
- (void)finishProfilingNetworks;	// IMP=0x0000000000a3aa27
- (void)sample;	// IMP=0x0000000000a3a76f
- (void)addProfilingNetwork:(void *)arg1;	// IMP=0x0000000000a3a681
- (void)KeepLogFiles:(_Bool)arg1;	// IMP=0x0000000000a3a66f
- (void)setPowerProfiler:(_Bool)arg1 powerProfilerName:(id)arg2;	// IMP=0x0000000000a39cba
- (void)setPerfProfiler:(_Bool)arg1;	// IMP=0x0000000000a39c25
- (void)setMemoryProfiler:(_Bool)arg1;	// IMP=0x0000000000a39c13
- (void)reset;	// IMP=0x0000000000a39a98
- (id)init;	// IMP=0x0000000000a399aa

@end

