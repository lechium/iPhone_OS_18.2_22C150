//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol HKGraphSeriesBlockCoordinateInfo;

__attribute__((visibility("hidden")))
@interface _TtC8HealthUI32HKMultiLineSeriesBlockCoordinate : NSObject
{
    MISSING_TYPE *coordinates;	// 8 = 0x8
    MISSING_TYPE *startXValue;	// 16 = 0x10
    MISSING_TYPE *endXValue;	// 24 = 0x18
    MISSING_TYPE *minYValue;	// 32 = 0x20
    MISSING_TYPE *maxYValue;	// 40 = 0x28
    MISSING_TYPE *userInfo;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000413980
- (id)init;	// IMP=0x0000000000413930
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(_Bool)arg2;	// IMP=0x00000000004138d0
@property(nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo;
@property(nonatomic, readonly) double endXValue; // @synthesize endXValue;
@property(nonatomic, readonly) double startXValue; // @synthesize startXValue;

@end
