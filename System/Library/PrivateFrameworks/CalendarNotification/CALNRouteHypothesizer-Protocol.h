//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/CADSyntheticRouteHypothesizer-Protocol.h>

@class EKTravelEngineHypothesis;

@protocol CALNRouteHypothesizer <CADSyntheticRouteHypothesizer>
@property(readonly, nonatomic) CDUnknownBlockType updateHandler;
@property(readonly, nonatomic) EKTravelEngineHypothesis *currentHypothesis;
@property(readonly, nonatomic) unsigned long long state;
- (void)didPostUINotification:(unsigned long long)arg1;
- (void)stopHypothesizing;
- (void)requestRefresh;
- (void)startHypothesizingWithUpdateHandler:(void (^)(void))arg1;
@end
