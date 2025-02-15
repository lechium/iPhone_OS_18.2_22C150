//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSArray, NSNumber, NSString;

@interface AppUsageMetricsEvent : AMSMetricsEvent
{
    NSNumber *_appSessionReporterKeyRepaired;	// 8 = 0x8
    NSNumber *_beta;	// 16 = 0x10
    unsigned char _appEventType;	// 24 = 0x18
    _Bool _clip;	// 25 = 0x19
    _Bool _hasBeenPosted;	// 26 = 0x1a
    unsigned char _installationType;	// 27 = 0x1b
    unsigned char _installType;	// 28 = 0x1c
    NSString *_tempUserId;	// 32 = 0x20
    NSString *_tempDeviceIdentifer;	// 40 = 0x28
    NSString *_actorID;	// 48 = 0x30
    NSString *_appSessionReporterKey;	// 56 = 0x38
    long long _appUsageType;	// 64 = 0x40
    NSString *_bundleID;	// 72 = 0x48
    NSString *_bundleVersion;	// 80 = 0x50
    NSString *_clientEventID;	// 88 = 0x58
    NSString *_clipAppType;	// 96 = 0x60
    NSString *_cohort;	// 104 = 0x68
    NSNumber *_collectionTime;	// 112 = 0x70
    long long _cumulativeUserCount;	// 120 = 0x78
    long long _databaseID;	// 128 = 0x80
    long long _duration;	// 136 = 0x88
    NSNumber *_evid;	// 144 = 0x90
    NSNumber *_eventTimeOverride;	// 152 = 0x98
    NSArray *_foregroundEvents;	// 160 = 0xa0
    NSString *_hardwareFamily;	// 168 = 0xa8
    NSString *_hardwareModel;	// 176 = 0xb0
    NSNumber *_itemID;	// 184 = 0xb8
    NSString *_itemName;	// 192 = 0xc0
    NSString *_ocelotDeviceID;	// 200 = 0xc8
    NSString *_ocelotID;	// 208 = 0xd0
    NSString *_ocelotSubscriptionState;	// 216 = 0xd8
    NSString *_OS;	// 224 = 0xe0
    NSString *_osBuild;	// 232 = 0xe8
    NSString *_platform;	// 240 = 0xf0
    NSString *_shortVersion;	// 248 = 0xf8
    NSNumber *_startTime;	// 256 = 0x100
    NSNumber *_storefront;	// 264 = 0x108
    long long _timeRangeEnd;	// 272 = 0x110
    long long _timeRangeStart;	// 280 = 0x118
    long long _usageTime;	// 288 = 0x120
    long long _usageCount;	// 296 = 0x128
    long long _qualifiedDuration;	// 304 = 0x130
    NSString *_weekStartDate;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x00200000002a7030
- (id)description;	// IMP=0x00100000002a5fdc

@end

