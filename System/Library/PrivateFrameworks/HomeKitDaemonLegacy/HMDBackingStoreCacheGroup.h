//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordZoneSubscription, CKServerChangeToken, HMDBackingStoreCacheZone, NSString;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheGroup : HMFObject
{
    long long _groupID;	// 8 = 0x8
    HMDBackingStoreCacheZone *_zone;	// 16 = 0x10
    NSString *_rootRecordName;	// 24 = 0x18
    CKServerChangeToken *_serverChangeToken;	// 32 = 0x20
    NSString *_subscriptionName;	// 40 = 0x28
    NSString *_owner;	// 48 = 0x30
    CKRecordZoneSubscription *_subscription;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000023d44b
@property(retain) CKRecordZoneSubscription *subscription; // @synthesize subscription=_subscription;
@property(readonly) NSString *owner; // @synthesize owner=_owner;
@property(readonly) NSString *subscriptionName; // @synthesize subscriptionName=_subscriptionName;
@property(retain) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(readonly) NSString *rootRecordName; // @synthesize rootRecordName=_rootRecordName;
@property(readonly) __weak HMDBackingStoreCacheZone *zone; // @synthesize zone=_zone;
@property long long groupID; // @synthesize groupID=_groupID;
- (id)dumpDebug;	// IMP=0x000000000023d1ba
- (id)initWithGroupID:(long long)arg1 zone:(id)arg2 rootRecord:(id)arg3 serverChangeToken:(id)arg4 subscriptionName:(id)arg5 owner:(id)arg6 subscription:(id)arg7;	// IMP=0x000000000023d058

@end
