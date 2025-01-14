//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLElevationProfileEstimator;

@interface CLContextManagerElevationProfileBase
{
    _Bool _registeredXPCTaskMSLP;	// 40 = 0x28
    _Bool _registeredXPCTaskElevationProfile;	// 41 = 0x29
    _Bool _isElevationDbInMemory;	// 42 = 0x2a
    CLElevationProfileEstimator *_elevationProfileEstimator;	// 48 = 0x30
    void *_elevationDb;	// 56 = 0x38
}

+ (_Bool)isQueryValidWithStartTime:(double)arg1 andEndTime:(double)arg2;	// IMP=0x0040000000f4f5d1
@property(nonatomic) _Bool isElevationDbInMemory; // @synthesize isElevationDbInMemory=_isElevationDbInMemory;
@property(nonatomic) void *elevationDb; // @synthesize elevationDb=_elevationDb;
@property(nonatomic) CLElevationProfileEstimator *elevationProfileEstimator; // @synthesize elevationProfileEstimator=_elevationProfileEstimator;
@property(nonatomic) _Bool registeredXPCTaskElevationProfile; // @synthesize registeredXPCTaskElevationProfile=_registeredXPCTaskElevationProfile;
@property(nonatomic) _Bool registeredXPCTaskMSLP; // @synthesize registeredXPCTaskMSLP=_registeredXPCTaskMSLP;
- (_Bool)isLocationUsefulForCalibration:(int)arg1;	// IMP=0x0010000000f4f5b8
- (void)fetchElevationsWithStartTime:(double)arg1 andEndTime:(double)arg2 andBatchSize:(id)arg3 andElevationArray:(id)arg4;	// IMP=0x0010000000f4ef82
- (void)fetchLocationsWithStartTime:(double)arg1 andEndTime:(double)arg2 andBatchSize:(unsigned int)arg3 andLocationArray:(id)arg4 andVisitSearchStartIndex:(int)arg5 andCompletionBlock:(CDUnknownBlockType)arg6;	// IMP=0x0010000000f4ef2d
- (void)queryElevationsFromDate:(id)arg1 toDate:(id)arg2 withBatchSize:(id)arg3 fromRecordId:(id)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000f4ef10
- (void)getStoredVisit:(id)arg1 betweenStartTime:(double)arg2 andEndTime:(double)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000f4ef0a
- (void)sendElevationsFromEstimates:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000f4ef04
- (void)pushElevationsFromTime:(double)arg1 toTime:(double)arg2;	// IMP=0x0010000000f4eee7
- (void)getHistoricalMeanSeaLevelPressureWithStartTime:(double)arg1 andEndTime:(double)arg2 andCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000f4ee7e
- (void)initElevationProfileEstimator:(id)arg1 withElevationDbInMemory:(_Bool)arg2;	// IMP=0x0010000000f4ede4
- (void)dealloc;	// IMP=0x0010000000f4ed78
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x0010000000f4ebc8

@end

