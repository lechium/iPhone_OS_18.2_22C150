//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CALNTTLEventTracker
- (void)trackEmailEngagedForTTLAlertWithTransportType:(unsigned long long)arg1 etaType:(unsigned long long)arg2 hasSuggestedLocation:(_Bool)arg3 isOnSharedCalendar:(_Bool)arg4;
- (void)trackDirectionsEngagedForTTLAlertWithTransportType:(unsigned long long)arg1 etaType:(unsigned long long)arg2 hasSuggestedLocation:(_Bool)arg3 isOnSharedCalendar:(_Bool)arg4;
- (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(_Bool)arg5 isOnSharedCalendar:(_Bool)arg6;
@end
