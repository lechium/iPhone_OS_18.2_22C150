//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryBackgroundOperation
{
}

+ (id)logCategory;	// IMP=0x0010000000da51c2
+ (id)predicate;	// IMP=0x0010000000da5136
- (id)logIdentifier;	// IMP=0x0000000000da50e6
- (id)attributeDescriptions;	// IMP=0x0000000000da4f11
@property(readonly, copy, nonatomic) NSUUID *homeUUID;
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy, nonatomic) NSUUID *accessoryUUID;
- (_Bool)isAccessoryOperation;	// IMP=0x0000000000da4dd7
- (unsigned long long)accessoryOperationStatus;	// IMP=0x0000000000da47fe
- (id)initWithAccessoryUUID:(id)arg1 accessoryIdentifier:(id)arg2 homeUUIDWhereAccessoryWasPaired:(id)arg3 userData:(id)arg4;	// IMP=0x0000000000da44bc
- (id)initWithAccessory:(id)arg1 userData:(id)arg2;	// IMP=0x0000000000da43a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
