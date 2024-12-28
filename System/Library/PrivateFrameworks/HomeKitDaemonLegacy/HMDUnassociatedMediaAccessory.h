//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccessoryAdvertisement, NSString;

__attribute__((visibility("hidden")))
@interface HMDUnassociatedMediaAccessory
{
    HMDAccessoryAdvertisement *_advertisement;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x001000000040db41
- (void).cxx_destruct;	// IMP=0x000000000040db2e
@property(retain) HMDAccessoryAdvertisement *advertisement; // @synthesize advertisement=_advertisement;
- (id)logIdentifier;	// IMP=0x000000000040daf5
- (id)addTransactionForHome:(id)arg1;	// IMP=0x000000000040d45f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000040d384
@property(readonly) unsigned long long hash;
- (long long)associationOptions;	// IMP=0x000000000040d2c4
- (id)dumpDescription;	// IMP=0x000000000040d169
- (unsigned long long)transportTypes;	// IMP=0x000000000040d15e
- (_Bool)isHAPAirPlay2Accessory;	// IMP=0x000000000040d0ab
- (void)updateAdvertisementData:(id)arg1;	// IMP=0x000000000040d04a
- (id)initWithAdvertisement:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000040cf44
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;	// IMP=0x000000000040ce3b
- (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;	// IMP=0x000000000040cdba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
