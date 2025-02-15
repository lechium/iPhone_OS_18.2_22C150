//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSCalendar, NSString;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

__attribute__((visibility("hidden")))
@interface HDSleepPeriodSegmentArrayBuilder : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
    long long _morningIndex;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
    NSCalendar *_gregorianCalendar;	// 32 = 0x20
    id <HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a1121
- (id)sortedSleepPeriodSegmentsFromSamples:(id)arg1;	// IMP=0x00000000000a081a
- (id)initProfile:(id)arg1 morningIndex:(long long)arg2 options:(unsigned long long)arg3 gregorianCalendar:(id)arg4 sourceOrderProvider:(id)arg5;	// IMP=0x000000000009ffbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

