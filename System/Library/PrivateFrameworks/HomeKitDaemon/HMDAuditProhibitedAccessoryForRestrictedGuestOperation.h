//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAuditProhibitedAccessoryForRestrictedGuestOperation
{
}

+ (id)logCategory;	// IMP=0x0010000000981230
+ (id)awaitForAllSettledFutures:(id)arg1;	// IMP=0x00100000009811d2
+ (id)getPairingsFromAccessory:(id)arg1 flow:(id)arg2;	// IMP=0x0010000000980c86
- (id)logIdentifier;	// IMP=0x00000000009800d0
- (_Bool)_anyModificationsFailedExcludingDoesNotExistError:(id)arg1 responseError:(id *)arg2;	// IMP=0x000000000097ffd3
- (id)_auditHAPAccessory:(id)arg1 forRestrictedGuest:(id)arg2 inHome:(id)arg3 flow:(id)arg4;	// IMP=0x000000000097f80d
- (id)executeOperationWithHomeManager:(id)arg1 flow:(id)arg2;	// IMP=0x000000000097eab5
@property(readonly, copy, nonatomic) NSUUID *guestUUID;
- (_Bool)mainWithError:(id *)arg1;	// IMP=0x000000000097e271
- (id)initWithAccessory:(id)arg1 restrictedGuest:(id)arg2;	// IMP=0x000000000097df71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

