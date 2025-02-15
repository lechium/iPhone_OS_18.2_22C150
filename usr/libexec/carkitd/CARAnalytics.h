//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARConnectionTimeServiceAgent, NSDate, NSNumber;

@interface CARAnalytics : NSObject
{
    _Bool _isCurrentlyDriving;	// 8 = 0x8
    CARConnectionTimeServiceAgent *_connectionTimeServiceAgent;	// 16 = 0x10
    NSNumber *_wifiChannel;	// 24 = 0x18
    unsigned long long _carKeyPairingResult;	// 32 = 0x20
    double _driveStartTimeInterval;	// 40 = 0x28
    NSDate *_wirelessReconnectStartDate;	// 48 = 0x30
    NSDate *_wirelessReconnectEndDate;	// 56 = 0x38
}

+ (_Bool)shouldRecordAnalyticsEvents;	// IMP=0x004000000006c117
+ (long long)calendarUnitsOfType:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3;	// IMP=0x001000000006bf6e
+ (id)sharedInstance;	// IMP=0x001000000006b981
- (void).cxx_destruct;	// IMP=0x002000000006c2d3
@property(retain, nonatomic) NSDate *wirelessReconnectEndDate; // @synthesize wirelessReconnectEndDate=_wirelessReconnectEndDate;
@property(retain, nonatomic) NSDate *wirelessReconnectStartDate; // @synthesize wirelessReconnectStartDate=_wirelessReconnectStartDate;
@property(nonatomic) _Bool isCurrentlyDriving; // @synthesize isCurrentlyDriving=_isCurrentlyDriving;
@property(nonatomic) double driveStartTimeInterval; // @synthesize driveStartTimeInterval=_driveStartTimeInterval;
@property(nonatomic) unsigned long long carKeyPairingResult; // @synthesize carKeyPairingResult=_carKeyPairingResult;
@property(retain, nonatomic) NSNumber *wifiChannel; // @synthesize wifiChannel=_wifiChannel;
@property(retain, nonatomic) CARConnectionTimeServiceAgent *connectionTimeServiceAgent; // @synthesize connectionTimeServiceAgent=_connectionTimeServiceAgent;
- (void)_prepareConnectionTTRDraftWithConnectionSession:(id)arg1 withAdditionalDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000006c11f
- (id)_CARCoreAnalyticsEventNameForEvent:(unsigned long long)arg1;	// IMP=0x001000000006bee7
- (void)sendEvent:(unsigned long long)arg1 withDictionary:(id)arg2;	// IMP=0x001000000006be54
- (void)navigationOwnershipEndedWithMaximumConcurrentCount:(unsigned long long)arg1;	// IMP=0x001000000006bd8f
- (void)userIndicatedNotDrivingWithReason:(id)arg1;	// IMP=0x001000000006bccc
- (void)userCreatedWirelessPairingWithSource:(id)arg1 payload:(id)arg2;	// IMP=0x001000000006ba42
- (id)init;	// IMP=0x001000000006ba06

@end

