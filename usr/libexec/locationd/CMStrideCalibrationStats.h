//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationStats : NSObject
{
    struct CLStrideCalibrationSessionMetrics fSessionMetrics;	// 8 = 0x8
    long long fHeightCM;	// 104 = 0x68
    struct CMFixedSizeQueue<double, 2UL> fLastAWDTimestamps;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x00200000006bd3db
- (void).cxx_destruct;	// IMP=0x00100000006bd3d5
- (void)updateUserHeight:(long long)arg1;	// IMP=0x00100000006bd3cb
- (void)storeLastAWDTimestamps;	// IMP=0x00100000006bd36e
- (void)loadLastAWDTimestamps;	// IMP=0x00100000006bd27b
- (void)awdMotionFitnessStrideCalibration:(const struct CLStrideCalEntry *)arg1;	// IMP=0x00100000006bcdc2
- (void)activityLoggerLogStrideCalEntry:(const struct CLStrideCalEntry *)arg1;	// IMP=0x00100000006bcb73
- (void)awdLogDistance:(double)arg1 status:(int)arg2 description:(id)arg3;	// IMP=0x00100000006bc897
- (void)setReadyForSubmission;	// IMP=0x00100000006bc885
- (void)endSessionMetrics:(double)arg1;	// IMP=0x00100000006bc3ce
- (void)startSessionMetricsWithTime:(double)arg1 session:(int)arg2;	// IMP=0x00100000006bc374
- (id)init;	// IMP=0x00100000006bc30e

@end
