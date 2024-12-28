//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUserActivityReportValue;
@protocol HMDHomeActivityStateManagerDataSource, HMDUserActivityStateDetectorStateChangeDelegate;

__attribute__((visibility("hidden")))
@interface HMDUserActivityStateDetector : HMFObject
{
    id <HMDHomeActivityStateManagerDataSource> _dataSource;	// 8 = 0x8
    HMDUserActivityReportValue *_latestReport;	// 16 = 0x10
    id <HMDUserActivityStateDetectorStateChangeDelegate> _stateChangeDelegate;	// 24 = 0x18
}

+ (unsigned long long)contributorType;	// IMP=0x004000000099fac0
- (void).cxx_destruct;	// IMP=0x000000000099fa80
@property(nonatomic) __weak id <HMDUserActivityStateDetectorStateChangeDelegate> stateChangeDelegate; // @synthesize stateChangeDelegate=_stateChangeDelegate;
@property(retain, nonatomic) HMDUserActivityReportValue *latestReport; // @synthesize latestReport=_latestReport;
@property(readonly, nonatomic) id <HMDHomeActivityStateManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)notifyDetectorStateChangedWithReason:(unsigned long long)arg1;	// IMP=0x000000000099f95e
- (void)configureWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000099f8aa
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000099f83c

@end
