//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC19HealthBalanceDaemon32HealthBalanceDailyAnalyticsEvent : _TtCs12_SwiftObject
{
    MISSING_TYPE *profile;	// 16 = 0x10
    MISSING_TYPE *notificationManager;	// 24 = 0x18
    MISSING_TYPE *privacyDefaults;	// 32 = 0x20
    MISSING_TYPE *respiratoryDefaults;	// 40 = 0x28
    MISSING_TYPE *settings;	// 48 = 0x30
    MISSING_TYPE *sleepStore;	// 56 = 0x38
    MISSING_TYPE *analyticsEnvironment;	// 64 = 0x40
    MISSING_TYPE *summaryAnalytics;	// 144 = 0x90
}

- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008ea0
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000088e0
@property(nonatomic, readonly) NSString *eventName;
@property(nonatomic, readonly) _Bool isEventSubmissionIHAGated;

@end
