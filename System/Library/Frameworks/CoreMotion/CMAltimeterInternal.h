//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CMAltimeterInternal : NSObject
{
    struct Dispatcher *fFilteredPressureDispatcher;	// 8 = 0x8
    CDUnknownBlockType fRelativeAltimeterHandler;	// 16 = 0x10
    NSOperationQueue *fRelativeAltimeterQueue;	// 24 = 0x18
    Sample_068dee23 fBaseAltimeterSample;	// 32 = 0x20
    float fBarometricBaseAltitude;	// 48 = 0x30
    _Bool fBaselineReceived;	// 52 = 0x34
    float fMostRecentFilteredPressure;	// 56 = 0x38
    struct deque<float, std::allocator<float>> fPressureSamples;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *fAppQueue;	// 120 = 0x78
    void *fLocationdConnection;	// 128 = 0x80
    CDUnknownBlockType fHandler;	// 136 = 0x88
    CDUnknownBlockType fSignificantElevationSampleHandler;	// 144 = 0x90
    double fElevationAscendedOffset;	// 152 = 0x98
    double fElevationDescendedOffset;	// 160 = 0xa0
    _Bool fStopSignificantElevationUpdates;	// 168 = 0xa8
    double fFilteredElevationOffset;	// 176 = 0xb0
    _Bool fStopRelativeAltitudeUpdates;	// 184 = 0xb8
    NSOperationQueue *fAbsoluteAltitudeClientQueue;	// 192 = 0xc0
    CDUnknownBlockType fAbsoluteAltitudeClientHandler;	// 200 = 0xc8
}

+ (_Bool)_bundleBeforeTCCCheck:(id)arg1;	// IMP=0x0060000000292c9d
+ (_Bool)_bundleBeforeTCCCheck;	// IMP=0x0060000000292c45
- (id).cxx_construct;	// IMP=0x0000000000293d5a
- (void).cxx_destruct;	// IMP=0x0000000000293d4c
- (void)_handleAbsoluteAltitudeUpdate:(shared_ptr_bdcc6d0f)arg1;	// IMP=0x00000000002936d5
- (void)_resumeAbsoluteAltitudeUpdates;	// IMP=0x00000000002936cf
- (void)_pauseAbsoluteAltitudeUpdates;	// IMP=0x00000000002936c9
- (void)_stopAbsoluteAltitudeUpdates;	// IMP=0x00000000002934dc
- (void)_startAbsoluteAltitudeUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002932a0
- (void)_releaseHandlerObjects;	// IMP=0x0000000000293267
- (void)_stopRelativeAltitudeUpdates;	// IMP=0x00000000002930b9
- (void)_startRelativeAltitudeUpdates;	// IMP=0x0000000000292f1d
- (void)_queryElevationProfileFromDate:(id)arg1 toDate:(id)arg2 withBatchSize:(unsigned long long)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000292ba6
- (void)_queryElevationProfileFromDate:(id)arg1 toDate:(id)arg2 withBatchSize:(unsigned long long)arg3 fromRecordId:(int)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002921c5
- (void)_querySignificantElevationChangeFromDate:(id)arg1 toDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000291960
- (void)_stopSignificantElevationUpdates;	// IMP=0x00000000002917bc
- (void)_startSignificantElevationUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002915e2
- (void)_stopElevationUpdates;	// IMP=0x000000000029141e
- (void)_startElevationUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000291244
- (void)_teardown;	// IMP=0x00000000002911a8
- (void)dealloc;	// IMP=0x0000000000291130
- (id)init;	// IMP=0x000000000028fe08

@end
