//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, XCTDProcessMonitorDelegate, XCTDRBSProcessMonitor;

@interface XCTDProcessMonitor : NSObject
{
    _Bool _valid;	// 8 = 0x8
    NSMutableSet *_monitoredBundleIDs;	// 16 = 0x10
    id <XCTDProcessMonitorDelegate> _delegate;	// 24 = 0x18
    id <XCTDRBSProcessMonitor> _processMonitor;	// 32 = 0x20
    Class _processHandleClass;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_applicationDidUpdateStateQueue;	// 48 = 0x30
}

+ (id)processStateDescriptor;	// IMP=0x00200000000249ac
+ (id)predicatesForBundleIDs:(id)arg1;	// IMP=0x00100000000247df
+ (id)stateSnapshotFromRBSState:(id)arg1 forRBSBundle:(id)arg2 pid:(int)arg3;	// IMP=0x001000000002450e
- (void).cxx_destruct;	// IMP=0x0020000000025d4f
@property(readonly) NSObject<OS_dispatch_queue> *applicationDidUpdateStateQueue; // @synthesize applicationDidUpdateStateQueue=_applicationDidUpdateStateQueue;
@property(readonly) Class processHandleClass; // @synthesize processHandleClass=_processHandleClass;
@property(readonly) id <XCTDRBSProcessMonitor> processMonitor; // @synthesize processMonitor=_processMonitor;
@property __weak id <XCTDProcessMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (int)pidForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000025bd1
- (id)bundleIDForPID:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000025b1c
- (id)processSpecifierForPID:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000025ad0
- (void)startMonitoringApplicationWithBundleID:(id)arg1 path:(id)arg2;	// IMP=0x0010000000024a4a
- (void)guardIsValid:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024499
- (void)invalidate;	// IMP=0x00100000000243a5
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000024332
- (id)initWithDelegate:(id)arg1 processMonitor:(id)arg2 processHandleClass:(Class)arg3;	// IMP=0x001000000002422c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

