//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityCapabilityIsSupportedOnAnyPairedBluetoothDeviceRequirement
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ff85
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006ff04
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x000000000006fe9b
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x000000000006fc21
- (_Bool)capabilityIsSupportedOnPairedBluetoothDevice:(id)arg1;	// IMP=0x00000000002e4bb8
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006fb29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *requirementDescription;
@property(readonly) Class superclass;

@end
