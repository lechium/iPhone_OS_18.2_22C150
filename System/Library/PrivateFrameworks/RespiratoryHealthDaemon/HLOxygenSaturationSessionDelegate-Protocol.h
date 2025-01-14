//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RespiratoryHealthDaemon/NSObject-Protocol.h>

@class HLOxygenSaturationMeasurement, HLOxygenSaturationSession;

@protocol HLOxygenSaturationSessionDelegate <NSObject>
- (void)oxygenSaturationSession:(HLOxygenSaturationSession *)arg1 didEndForReason:(unsigned long long)arg2 measurement:(HLOxygenSaturationMeasurement *)arg3;
- (void)oxygenSaturationSession:(HLOxygenSaturationSession *)arg1 feedbackDidChange:(unsigned long long)arg2;
- (void)oxygenSaturationSession:(HLOxygenSaturationSession *)arg1 didBeginWithStartTime:(double)arg2 expectedDuration:(double)arg3;
@end

