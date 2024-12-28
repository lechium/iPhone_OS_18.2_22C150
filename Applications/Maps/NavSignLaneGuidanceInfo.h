//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

@interface NavSignLaneGuidanceInfo : NSObject
{
    _Bool _isForManeuver;	// 8 = 0x8
    NSUUID *_laneInfoId;	// 16 = 0x10
    NSArray *_lanes;	// 24 = 0x18
    NSArray *_textAlternatives;	// 32 = 0x20
    NSArray *_midStepTitles;	// 40 = 0x28
}

+ (struct _NSRange)highlightedLaneRangeForLanes:(id)arg1;	// IMP=0x0040000000dd743f
+ (id)_createFakeLanes;	// IMP=0x0010000000dd6aba
+ (id)fakeInfoForManeuver:(_Bool)arg1;	// IMP=0x0010000000dd6988
- (void).cxx_destruct;	// IMP=0x0020000000dd7787
@property(readonly, nonatomic) NSArray *midStepTitles; // @synthesize midStepTitles=_midStepTitles;
@property(readonly, nonatomic) NSArray *textAlternatives; // @synthesize textAlternatives=_textAlternatives;
@property(readonly, nonatomic) _Bool isForManeuver; // @synthesize isForManeuver=_isForManeuver;
@property(readonly, copy, nonatomic) NSArray *lanes; // @synthesize lanes=_lanes;
@property(readonly, copy, nonatomic) NSUUID *laneInfoId; // @synthesize laneInfoId=_laneInfoId;
- (id)highlightedLanes;	// IMP=0x0010000000dd7721
- (struct _NSRange)highlightedLaneRange;	// IMP=0x0010000000dd73db
@property(readonly, nonatomic) _Bool isForMidStep;
- (id)description;	// IMP=0x0010000000dd7290
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000dd71c2
- (id)initWithLaneInfoId:(id)arg1 lanes:(id)arg2 forManeuver:(_Bool)arg3 midStepTitles:(id)arg4 details:(id)arg5;	// IMP=0x0010000000dd70ac
- (id)initWithLaneInfoId:(id)arg1 lanes:(id)arg2;	// IMP=0x0010000000dd7080
- (id)initWithGuidanceLaneInfo:(id)arg1;	// IMP=0x0010000000dd6bd1

@end
