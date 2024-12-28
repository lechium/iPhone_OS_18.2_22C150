//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

__attribute__((visibility("hidden")))
@interface HKSleepComparisonDayCoordinate : NSObject
{
    double _xValueStart;	// 8 = 0x8
    double _xValueEnd;	// 16 = 0x10
    long long _sleepValue;	// 24 = 0x18
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001f5bd7
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) long long sleepValue; // @synthesize sleepValue=_sleepValue;
@property(readonly, nonatomic) double xValueEnd; // @synthesize xValueEnd=_xValueEnd;
@property(readonly, nonatomic) double xValueStart; // @synthesize xValueStart=_xValueStart;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;	// IMP=0x00000000001f5ad5
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)initWithXValueStart:(double)arg1 xValueEnd:(double)arg2 sleepValue:(long long)arg3 userInfo:(id)arg4;	// IMP=0x00000000001f5a26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
