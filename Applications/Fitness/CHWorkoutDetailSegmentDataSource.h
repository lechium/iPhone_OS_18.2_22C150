//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CHWorkoutDetailSegmentDataSource : NSObject
{
    MISSING_TYPE *dataCalculator;	// 8 = 0x8
    MISSING_TYPE *formattingManager;	// 16 = 0x10
    MISSING_TYPE *workout;	// 24 = 0x18
    MISSING_TYPE *_metrics;	// 0 = 0x0
    MISSING_TYPE *_columns;	// 0 = 0x0
    MISSING_TYPE *defaultColumns;	// 0 = 0x0
    MISSING_TYPE *columnSizes;	// 0 = 0x0
    MISSING_TYPE *internalQueue;	// 7933871 = 0x790faf
    MISSING_TYPE *delegate;	// 6902 = 0x1af6
    MISSING_TYPE *trackDistanceUnit;	// 7933871 = 0x790faf
}

- (void).cxx_destruct;	// IMP=0x00400000002b0160
- (id)init;	// IMP=0x00100000002b0100
- (id)initWithWorkout:(id)arg1 dataCalculator:(id)arg2 formattingManager:(id)arg3;	// IMP=0x00100000002ade80
- (id)initWithWorkout:(id)arg1 dataCalculator:(id)arg2 trackDistanceUnit:(unsigned long long)arg3 formattingManager:(id)arg4;	// IMP=0x00100000002ade00

@end

