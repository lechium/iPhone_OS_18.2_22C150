//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NRDevice, NSNumber, NSObject, NSUUID;
@protocol HDPairedDeviceCapabilityProvidingObserver, OS_dispatch_queue;

@protocol HDPairedDeviceCapabilityProviding
- (void)unregisterObserver:(id <HDPairedDeviceCapabilityProvidingObserver>)arg1;
- (void)registerObserver:(id <HDPairedDeviceCapabilityProvidingObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (_Bool)isCapabilitySupported:(NSUUID *)arg1 onDevice:(NRDevice *)arg2;
- (NRDevice *)activePairedDevice;
- (NSNumber *)isCapabilitySupportedOnActivePairedDevice:(NSUUID *)arg1 error:(id *)arg2;
@end

