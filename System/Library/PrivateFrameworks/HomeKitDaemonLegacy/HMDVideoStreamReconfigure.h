//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, HMFTimer, NSDictionary, NSMutableArray, NSObject, NSString;
@protocol HMDVideoStreamReconfigureDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDVideoStreamReconfigure : HMFObject
{
    _Bool _reconfigurationMode;	// 8 = 0x8
    NSDictionary *_downlinkQualityInfo;	// 16 = 0x10
    NSMutableArray *_reconfigureEvents;	// 24 = 0x18
    HMFTimer *_upgradeDebouceTimer;	// 32 = 0x20
    HMFTimer *_downgradeDebouceTimer;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    HMDCameraStreamSessionID *_sessionID;	// 56 = 0x38
    id <HMDVideoStreamReconfigureDelegate> _delegate;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000001dc504
- (void).cxx_destruct;	// IMP=0x00000000001db577
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000001db172
- (void)downlinkQualityChanged:(id)arg1;	// IMP=0x00000000001daff3
- (void)updateReconfigurationMode:(_Bool)arg1;	// IMP=0x00000000001dada3
- (id)logIdentifier;	// IMP=0x00000000001dad7d
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000001dac80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

