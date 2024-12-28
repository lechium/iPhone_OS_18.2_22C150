//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class BSPortDeathWatcher, CAContext, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSnapshotCATransactionHandler : HMFObject
{
    CAContext *_snapshotContext;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientQueue;	// 16 = 0x10
    BSPortDeathWatcher *_backboardServicesWatcher;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000005bc2ab
+ (id)sharedHandler;	// IMP=0x00100000005bc27b
- (void).cxx_destruct;	// IMP=0x00000000005bbec1
@property(retain, nonatomic) BSPortDeathWatcher *backboardServicesWatcher; // @synthesize backboardServicesWatcher=_backboardServicesWatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) CAContext *snapshotContext; // @synthesize snapshotContext=_snapshotContext;
- (struct CGImage *)createSnapshotCGImageRef:(id)arg1;	// IMP=0x00000000005bbc0d
- (void)_deleteSlotWithIdentifier:(id)arg1 filePath:(id)arg2 snapshotCATransaction:(id)arg3;	// IMP=0x00000000005bba58
- (void)deleteSlotWithIdentifier:(id)arg1 filePath:(id)arg2;	// IMP=0x00000000005bb937
- (id)_createSlotWithFilePath:(id)arg1 snapshotCATransaction:(id)arg2;	// IMP=0x00000000005bb793
- (void)clearSlotWithIdentifier:(id)arg1;	// IMP=0x00000000005bb61c
- (void)fillSlotWithIdentifier:(id)arg1 filePath:(id)arg2;	// IMP=0x00000000005bb425
- (id)createSlotWithFilePath:(id)arg1;	// IMP=0x00000000005bb29b
- (void)_backboardServicesRelaunched;	// IMP=0x00000000005bb166
- (void)_createSnapshotContext;	// IMP=0x00000000005bb0e2
- (id)init;	// IMP=0x00000000005bb002

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
