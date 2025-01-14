//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBProximitySensorManager;

@protocol SBProximitySensorManagerObserver <NSObject>

@optional
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 shouldSuppressBacklightChanges:(_Bool)arg2;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 crudeProximityDidChange:(_Bool)arg2;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 proximityDetectionPermittedDidChange:(_Bool)arg2;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 proximityDetectionEnabledDidChange:(_Bool)arg2;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 objectWithinProximityDidChange:(_Bool)arg2;
- (void)proximitySensorManager:(SBProximitySensorManager *)arg1 objectWithinProximityDidChange:(_Bool)arg2 detectionMode:(int)arg3;
@end

