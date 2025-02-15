//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface CMHealthColdStorageCompanionSyncService : CLIntersiloService
{
    struct shared_ptr<CLHRRecoveryInputHRRecorderDb> fInputHRDb;	// 8 = 0x8
    struct unique_ptr<CLActivityAggregator<HRRecoveryInputHR>, std::default_delete<CLActivityAggregator<HRRecoveryInputHR>>> fInputHRAggregator;	// 24 = 0x18
    struct shared_ptr<CLHRRecoveryInputWRRecorderDb> fInputWRDb;	// 32 = 0x20
    struct unique_ptr<CLActivityAggregator<HRRecoveryInputWR>, std::default_delete<CLActivityAggregator<HRRecoveryInputWR>>> fInputWRAggregator;	// 48 = 0x30
    struct shared_ptr<CLHRRecoverySessionRecorderDb> fSessionDb;	// 56 = 0x38
    struct unique_ptr<CLActivityAggregator<HRRecoverySession>, std::default_delete<CLActivityAggregator<HRRecoverySession>>> fSessionAggregator;	// 72 = 0x48
    NSObject<OS_dispatch_source> *fAggregationTimer;	// 80 = 0x50
    struct shared_ptr<CLPredictedWalkDistanceBoutRecorderDb> fPredWalkDistanceBoutDb;	// 88 = 0x58
    struct shared_ptr<CLElevationGradeRecorderDb> fElevationGradeRecorderDb;	// 104 = 0x68
    struct unique_ptr<CLActivityAggregator<CLElevationGradeEntry>, std::default_delete<CLActivityAggregator<CLElevationGradeEntry>>> fElevationGradeAggregator;	// 120 = 0x78
    NSObject<OS_dispatch_source> *fCoreAnalyticsTimer;	// 128 = 0x80
    struct CLHealthColdStorageWatchStats fStats;	// 136 = 0x88
}

+ (_Bool);	// IMP=0x0020000000e07b9b
+ (id)getSilo;	// IMP=0x0010000000e07b02
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e07ae9
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000e07a8c
- (id).cxx_construct;	// IMP=0x0020000000e0aafc
- (void).cxx_destruct;	// IMP=0x0010000000e0aa5e
- (void)resetAnalytics;	// IMP=0x0010000000e0aa41
- (void)sendAnalytics;	// IMP=0x0010000000e0a58e
- (void)resetCoreAnalyticsTimer;	// IMP=0x0010000000e0a39e
- (void)receiveColdStorageDataUpdate:(id)arg1;	// IMP=0x0010000000e08cd6
- (void)setUpAggregationOnTimer;	// IMP=0x0010000000e08812
- (void)endService;	// IMP=0x0010000000e0863a
- (void)beginService;	// IMP=0x0010000000e07be1
- (id)init;	// IMP=0x0010000000e07b5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

