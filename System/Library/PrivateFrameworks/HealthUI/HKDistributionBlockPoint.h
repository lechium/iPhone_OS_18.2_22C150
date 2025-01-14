//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

__attribute__((visibility("hidden")))
@interface HKDistributionBlockPoint : NSObject
{
    NSArray *_distributionSegments;	// 8 = 0x8
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;	// 16 = 0x10
    struct CGPoint _minPoint;	// 24 = 0x18
    struct CGPoint _maxPoint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001ce72e
@property(readonly, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSArray *distributionSegments; // @synthesize distributionSegments=_distributionSegments;
@property(readonly, nonatomic) struct CGPoint maxPoint; // @synthesize maxPoint=_maxPoint;
@property(readonly, nonatomic) struct CGPoint minPoint; // @synthesize minPoint=_minPoint;
- (id)_applyTransformToSegments:(id)arg1 transform:(struct CGAffineTransform)arg2;	// IMP=0x00000000001ce494
@property(readonly, copy) NSString *description;
- (id)_quickDate:(id)arg1;	// IMP=0x00000000001ce126
@property(readonly, nonatomic) double endXValue;
@property(readonly, nonatomic) double startXValue;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;	// IMP=0x00000000001ce0e2
- (id)initWithTransform:(struct CGAffineTransform)arg1 blockPoint:(id)arg2;	// IMP=0x00000000001cdf73
- (id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3 gapZeroCount:(long long)arg4;	// IMP=0x00000000001cdda2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

