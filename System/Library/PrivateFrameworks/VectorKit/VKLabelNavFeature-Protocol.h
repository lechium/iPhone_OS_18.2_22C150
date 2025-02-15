//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol VKLabelNavFeature
@property(readonly, nonatomic) _Bool isValid;
@property(nonatomic) _Bool isPicked;
@property(readonly, nonatomic) _Bool isTrafficCameraFeature;
@property(readonly, nonatomic) _Bool isEtaFeature;
@property(readonly, nonatomic) _Bool isGuidanceStepStart;
@property(readonly, nonatomic) long long intraRoadPriorityForShieldLabel;
@property(readonly, nonatomic) long long intraRoadPriorityForRoadLabel;
@property(readonly, nonatomic) _Bool isInGuidance;
@property(readonly, nonatomic) _Bool isStartOfRoadName;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool isRamp;
@property(readonly, nonatomic) struct PolylineCoordinate routeOffset;
@property(readonly, nonatomic) _Bool isAwayFromRoute;
@property(readonly, nonatomic) _Bool isOnRoute;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
@end

