//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSURL;
@protocol CLIntersiloUniverse, CLWorkoutRecordingDelegate;

@interface CLWorkoutRecording : NSObject
{
    NSURL *_workingDirectory;	// 8 = 0x8
    NSMutableDictionary *_modulesDict;	// 16 = 0x10
    id <CLWorkoutRecordingDelegate> _delegate;	// 24 = 0x18
    id <CLIntersiloUniverse> _universe;	// 32 = 0x20
    shared_ptr_da0ccc6f _writer;	// 40 = 0x28
    NSMutableDictionary *_metadata;	// 56 = 0x38
    double _privacyTimeOffset;	// 64 = 0x40
    double _privacyElevationOffset;	// 72 = 0x48
    basic_string_76cbfbed _recordingType;	// 80 = 0x50
    unsigned int;	// 104 = 0x68
    unsigned long long _fFileSize;	// 112 = 0x70
    _Bool _disableStrideCalBins;	// 120 = 0x78
    _Bool _disableWeatherData;	// 121 = 0x79
    _Bool _disableMeanMaxMets;	// 122 = 0x7a
    struct CLDaemonLocation _startLocation;	// 124 = 0x7c
    CDUnknownBlockType _recordWorkoutSessionEvent;	// 304 = 0x130
    CDUnknownBlockType _getstartLocation;	// 312 = 0x138
    double _stopTime;	// 320 = 0x140
    double _startTime;	// 328 = 0x148
}

- (id).cxx_construct;	// IMP=0x002000000134929c
- (void).cxx_destruct;	// IMP=0x0010000001349272
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)releaseBlocks;	// IMP=0x001000000134923d
- (void)setMotionStateFunction:(CDUnknownBlockType)arg1;	// IMP=0x001000000134920b
- (void)setupModuleWriters;	// IMP=0x001000000134903b
- (struct CLDaemonLocation)getStartLocation;	// IMP=0x001000000134901a
- (void)deleteWorkingDirectory;	// IMP=0x0010000001348e2e
- (void)recordWorkoutEffort:(const Result_29b869fb *)arg1;	// IMP=0x0010000001348b13
- (double)makeSafeCFAbsoluteTime:(double)arg1;	// IMP=0x0010000001348af4
- (void)recordWeatherData:(id)arg1;	// IMP=0x00100000013485d1
- (void)writeStrideCalBins;	// IMP=0x0010000001347cca
- (void)recordWorkoutSessionPriors:(const void *)arg1;	// IMP=0x00100000013478ee
- (void)teardownListeners;	// IMP=0x00100000013475f7
- (void)setupListeners;	// IMP=0x00100000013474b6
@property(readonly, nonatomic) NSArray *recordingURLs;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
- (void)updateMetadata;	// IMP=0x0010000001346ca9
@property(readonly, nonatomic) double stopTime; // @synthesize stopTime=_stopTime;
- (_Bool)setWorkingDirectory:(id)arg1;	// IMP=0x0010000001346683
- (void)cleanup;	// IMP=0x0010000001346671
- (void)stop;	// IMP=0x00100000013465af
- (_Bool)start:(id)arg1 recentLocation:(struct CLDaemonLocation *)arg2 triggerDelay:(double)arg3 recentWeatherData:(id)arg4 maxFileCount:(unsigned int)arg5;	// IMP=0x0010000001345fc9
- (void)dealloc;	// IMP=0x0010000001345df6
- (basic_string_76cbfbed)getStringSessionId:(unsigned char [16])arg1;	// IMP=0x0010000001345d8b
- (id)initWithDelegate:(id)arg1 universe:(id)arg2 moduleDictionary:(id)arg3 setting:(struct SettingStructure)arg4;	// IMP=0x0010000001345498
- (void)initializeTheSettings:(struct SettingStructure)arg1;	// IMP=0x0010000001345459
- (void)recordWorkoutSessionEvent:(const struct WorkoutEvent *)arg1;	// IMP=0x001000000134543d
- (CDUnknownBlockType)getLocationBlock;	// IMP=0x0010000001345430

@end

