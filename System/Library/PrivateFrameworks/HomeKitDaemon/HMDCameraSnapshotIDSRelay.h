//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFOSTransaction, NSObject, NSString, NSUUID;
@protocol HMDIDSService, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotIDSRelay : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSUUID *_sessionID;	// 16 = 0x10
    id <HMDIDSService> _idsStreamService;	// 24 = 0x18
    HMFOSTransaction *_snapshotRelayTransaction;	// 32 = 0x20
    NSString *_logIdentifier;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000a18d56
- (void).cxx_destruct;	// IMP=0x0000000000a18cf2
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMFOSTransaction *snapshotRelayTransaction; // @synthesize snapshotRelayTransaction=_snapshotRelayTransaction;
@property(readonly) id <HMDIDSService> idsStreamService; // @synthesize idsStreamService=_idsStreamService;
@property(readonly) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)dealloc;	// IMP=0x0000000000a18b50
- (id)initWithSessionID:(id)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000a189bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
