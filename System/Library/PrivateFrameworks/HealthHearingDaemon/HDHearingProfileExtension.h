//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDAnalyticsDailyEventManager, HDAudioAnalyticsManager, HDBackgroundFeatureDeliveryManager, HDFeatureAvailabilityManager, HDHeadphoneDoseManager, NSString;

__attribute__((visibility("hidden")))
@interface HDHearingProfileExtension : NSObject
{
    HDAudioAnalyticsManager *_analyticsManager;	// 8 = 0x8
    HDHeadphoneDoseManager *_headphoneDoseManager;	// 16 = 0x10
    HDFeatureAvailabilityManager *_hearingTestFeatureAvailabilityManager;	// 24 = 0x18
    HDBackgroundFeatureDeliveryManager *_hearingTestBackgroundFeatureDeliveryManager;	// 32 = 0x20
    HDFeatureAvailabilityManager *_hearingAidFeatureAvailabilityManager;	// 40 = 0x28
    HDBackgroundFeatureDeliveryManager *_hearingAidBackgroundFeatureDeliveryManager;	// 48 = 0x30
    HDFeatureAvailabilityManager *_hearingProtectionFeatureAvailabilityManager;	// 56 = 0x38
    HDBackgroundFeatureDeliveryManager *_hearingProtectionBackgroundFeatureDeliveryManager;	// 64 = 0x40
    HDAnalyticsDailyEventManager *_dailyAnalyticsEventManager;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000018858
@property(readonly, nonatomic) HDHeadphoneDoseManager *headphoneDoseManager; // @synthesize headphoneDoseManager=_headphoneDoseManager;
- (id)dailyAnalyticsEventManagerWithProfile:(id)arg1;	// IMP=0x0000000000018700
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;	// IMP=0x0000000000018656
- (id)initWithProfile:(id)arg1;	// IMP=0x00000000000182fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

