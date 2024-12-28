//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel : HMBModel
{
    NSSet *_lastSynchronizedRecordIDs;	// 8 = 0x8
}

+ (id)hmbProperties;	// IMP=0x0010000000d5ab9a
+ (id)parentModelID;	// IMP=0x0010000000d5ab6a
+ (id)modelID;	// IMP=0x0010000000d5ab3a
+ (id)logCategory;	// IMP=0x0010000000d5ab0a
- (void).cxx_destruct;	// IMP=0x0000000000d5b35c
@property(retain, nonatomic) NSSet *lastSynchronizedRecordIDs; // @synthesize lastSynchronizedRecordIDs=_lastSynchronizedRecordIDs;
- (id)init;	// IMP=0x0000000000d5ad3c

// Remaining properties
@property(retain, nonatomic) NSData *archivedLastSynchronizedRecordIDs; // @dynamic archivedLastSynchronizedRecordIDs;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
