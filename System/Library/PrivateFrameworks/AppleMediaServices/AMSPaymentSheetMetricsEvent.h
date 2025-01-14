//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSMetricsEvent.h"

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetMetricsEvent : AMSMetricsEvent
{
}

+ (id)_timestamp;	// IMP=0x008000000047fba3
+ (id)_propertyValueClassesForKnownProperties;	// IMP=0x008000000047f8a3
+ (id)dictionaryForUserAction:(long long)arg1 didBiometricsLockout:(_Bool)arg2;	// IMP=0x008000000047eba8
+ (id)dictionaryForCancellationEvent:(unsigned long long)arg1 didBiometricsLockout:(_Bool)arg2 biometricsType:(long long)arg3;	// IMP=0x008000000047eb1c
+ (id)dictionaryForBiometricMatchState:(long long)arg1 didBiometricsLockout:(_Bool)arg2 biometricsType:(long long)arg3;	// IMP=0x008000000047e5a0
- (void)addUserActions:(id)arg1;	// IMP=0x000000000047f88a
- (void)addDualActionSuccess:(_Bool)arg1;	// IMP=0x000000000047f85a
- (void)addClientMetadataForPurchaseInfo:(id)arg1 metricsDictionary:(id)arg2;	// IMP=0x000000000047f3f8
- (void)addClientMetadataForPaymentSheetRequest:(id)arg1;	// IMP=0x000000000047f307
- (void)addBiometricsState:(long long)arg1;	// IMP=0x000000000047f2d0
- (void)addBiometricMatchState:(long long)arg1;	// IMP=0x000000000047ef98

@end

