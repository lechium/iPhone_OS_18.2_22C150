//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol CHDivingDataCalculatorDelegate;

@interface CHDivingDataCalculator : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *healthStore;	// 16 = 0x10
    MISSING_TYPE *diveSession;	// 24 = 0x18
    MISSING_TYPE *_metrics;	// 0 = 0x0
    MISSING_TYPE *_chartWidth;	// 0 = 0x0
    MISSING_TYPE *formattingManager;	// 0 = 0x0
    MISSING_TYPE *axisFormatter;	// 0 = 0x0
    MISSING_TYPE *predicate;	// 0 = 0x0
    MISSING_TYPE *rawTempSamples;	// 0 = 0x0
    MISSING_TYPE *rawDepthSamples;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000005d75d0
- (id)init;	// IMP=0x00100000005d7570
- (id)initWithHealthStore:(id)arg1 diveSession:(id)arg2 formattingManager:(id)arg3;	// IMP=0x00100000005d5510
@property(nonatomic) __weak id <CHDivingDataCalculatorDelegate> delegate; // @synthesize delegate;

@end
