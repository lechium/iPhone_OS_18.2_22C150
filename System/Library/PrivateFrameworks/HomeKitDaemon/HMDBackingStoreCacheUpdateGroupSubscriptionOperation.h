//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordZoneSubscription, HMDBackingStoreCacheGroup;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheUpdateGroupSubscriptionOperation
{
    HMDBackingStoreCacheGroup *_record;	// 8 = 0x8
    CKRecordZoneSubscription *_subscription;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003c27ac
@property(retain, nonatomic) CKRecordZoneSubscription *subscription; // @synthesize subscription=_subscription;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *record; // @synthesize record=_record;
- (id)mainReturningError;	// IMP=0x00000000003c2413
- (id)initWithGroup:(id)arg1 subscription:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000003c235d

@end

