//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface RidesharingAnalyticsBookedSession : NSObject
{
    long long _statusIssue;	// 8 = 0x8
    NSMutableArray *_intentResponseFailures;	// 16 = 0x10
    _Bool _sessionEnded;	// 24 = 0x18
    _Bool _bookedUsingMaps;	// 25 = 0x19
    _Bool _cancelled;	// 26 = 0x1a
    _Bool _contactedDriver;	// 27 = 0x1b
    _Bool _viewedInProactiveTray;	// 28 = 0x1c
    _Bool _tappedProactiveTrayItem;	// 29 = 0x1d
    _Bool _viewedDetails;	// 30 = 0x1e
    _Bool _invalidVehicleLocation;	// 31 = 0x1f
    _Bool _missingVehicleLocation;	// 32 = 0x20
    unsigned long long _numberOfInstalledExtensions;	// 40 = 0x28
    unsigned long long _numberOfEnabledExtensions;	// 48 = 0x30
    NSString *_sessionId;	// 56 = 0x38
    NSString *_appVersion;	// 64 = 0x40
    NSString *_appIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000a1e7b6
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(nonatomic) _Bool missingVehicleLocation; // @synthesize missingVehicleLocation=_missingVehicleLocation;
@property(nonatomic) _Bool invalidVehicleLocation; // @synthesize invalidVehicleLocation=_invalidVehicleLocation;
@property(nonatomic) _Bool viewedDetails; // @synthesize viewedDetails=_viewedDetails;
@property(nonatomic) _Bool tappedProactiveTrayItem; // @synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem;
@property(nonatomic) _Bool viewedInProactiveTray; // @synthesize viewedInProactiveTray=_viewedInProactiveTray;
@property(nonatomic) _Bool contactedDriver; // @synthesize contactedDriver=_contactedDriver;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool bookedUsingMaps; // @synthesize bookedUsingMaps=_bookedUsingMaps;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool sessionEnded; // @synthesize sessionEnded=_sessionEnded;
- (void)mapsForegrounded;	// IMP=0x0010000000a1e6bf
- (void)mapsBackgrounded;	// IMP=0x0010000000a1e6ad
- (void)endSession;	// IMP=0x0010000000a1e381
- (void)captureIntent:(int)arg1 withFailure:(int)arg2;	// IMP=0x0010000000a1e2d1
- (void)captureStatusIssue:(long long)arg1;	// IMP=0x0010000000a1e2c7
@property(nonatomic) unsigned long long numberOfEnabledExtensions; // @synthesize numberOfEnabledExtensions=_numberOfEnabledExtensions;
@property(nonatomic) unsigned long long numberOfInstalledExtensions; // @synthesize numberOfInstalledExtensions=_numberOfInstalledExtensions;
- (id)init;	// IMP=0x0010000000a1e19d

@end

