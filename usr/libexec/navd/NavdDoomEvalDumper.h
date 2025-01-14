//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol NavdDoomStorageSnapshotDataSource, OS_dispatch_queue;

@interface NavdDoomEvalDumper : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_currentStateDictionary;	// 16 = 0x10
    id <NavdDoomStorageSnapshotDataSource> _snapshotDataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000002def3
@property(retain, nonatomic) id <NavdDoomStorageSnapshotDataSource> snapshotDataSource; // @synthesize snapshotDataSource=_snapshotDataSource;
- (void)didEndUpdate;	// IMP=0x001000000002dce1
- (void)didScheduleWakeup;	// IMP=0x001000000002daea
- (void)didFireAlert;	// IMP=0x001000000002d8f3
- (void)willFireAlert;	// IMP=0x001000000002d6fc
- (void)didUpdateRoutes;	// IMP=0x001000000002d505
- (void)willUpdateRoutes;	// IMP=0x001000000002d30e
- (void)didUpdateDestinations;	// IMP=0x001000000002d117
- (void)willUpdateDestinations;	// IMP=0x001000000002cf20
- (void)didUpdateWindow;	// IMP=0x001000000002cd29
- (void)didInvalidateWindow;	// IMP=0x001000000002cb32
- (void)didUpdateExitTime;	// IMP=0x001000000002c93b
- (void)willUpdateExitTime;	// IMP=0x001000000002c744
- (void)willStartUpdate;	// IMP=0x001000000002c52d
- (void)logCurrentState:(id)arg1 stepName:(id)arg2 stopReason:(id)arg3;	// IMP=0x001000000002c0ad
- (id)init;	// IMP=0x001000000002c019

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

