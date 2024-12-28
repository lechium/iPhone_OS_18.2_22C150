//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCoreDataCloudKitSetupActivityLogEvent : HMMLogEvent
{
    NSUUID *_activityIdentifier;	// 8 = 0x8
    NSString *_setupSessionIdentifier;	// 16 = 0x10
    long long _checkAccountDurationMS;	// 24 = 0x18
    long long _checkUserIdentityDurationMS;	// 32 = 0x20
    long long _initializeAssetStorageDurationMS;	// 40 = 0x28
    long long _initializeDatabaseSubscriptionDurationMS;	// 48 = 0x30
    long long _initializeMetadataDurationMS;	// 56 = 0x38
    long long _initializeZoneDurationMS;	// 64 = 0x40
    long long _scheduledDurationMS;	// 72 = 0x48
    long long _totalSetupDurationMS;	// 80 = 0x50
    long long _phaseErrorCode;	// 88 = 0x58
    NSString *_phaseErrorDomain;	// 96 = 0x60
    NSString *_errorPhaseName;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000da36d9
@property(retain, nonatomic) NSString *errorPhaseName; // @synthesize errorPhaseName=_errorPhaseName;
@property(retain, nonatomic) NSString *phaseErrorDomain; // @synthesize phaseErrorDomain=_phaseErrorDomain;
@property(nonatomic) long long phaseErrorCode; // @synthesize phaseErrorCode=_phaseErrorCode;
@property(nonatomic) long long totalSetupDurationMS; // @synthesize totalSetupDurationMS=_totalSetupDurationMS;
@property(nonatomic) long long scheduledDurationMS; // @synthesize scheduledDurationMS=_scheduledDurationMS;
@property(nonatomic) long long initializeZoneDurationMS; // @synthesize initializeZoneDurationMS=_initializeZoneDurationMS;
@property(nonatomic) long long initializeMetadataDurationMS; // @synthesize initializeMetadataDurationMS=_initializeMetadataDurationMS;
@property(nonatomic) long long initializeDatabaseSubscriptionDurationMS; // @synthesize initializeDatabaseSubscriptionDurationMS=_initializeDatabaseSubscriptionDurationMS;
@property(nonatomic) long long initializeAssetStorageDurationMS; // @synthesize initializeAssetStorageDurationMS=_initializeAssetStorageDurationMS;
@property(nonatomic) long long checkUserIdentityDurationMS; // @synthesize checkUserIdentityDurationMS=_checkUserIdentityDurationMS;
@property(nonatomic) long long checkAccountDurationMS; // @synthesize checkAccountDurationMS=_checkAccountDurationMS;
@property(readonly, nonatomic) NSString *setupSessionIdentifier; // @synthesize setupSessionIdentifier=_setupSessionIdentifier;
@property(readonly, nonatomic) NSUUID *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (void)setErrorForPhase:(id)arg1 error:(id)arg2;	// IMP=0x0000000000da2f06
- (void)setDurationForPhase:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000da2da3
- (id)initWithActivityIdentifier:(id)arg1 setupSessionIdentifier:(id)arg2;	// IMP=0x0000000000da2c8e

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,N

@property(readonly) Class superclass;

@end
