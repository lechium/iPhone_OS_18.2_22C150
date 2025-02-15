//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, SYBacklinkMonitorServiceHandleDelegate;

__attribute__((visibility("hidden")))
@interface SYBacklinkMonitorServiceHandle : NSObject
{
    id <SYBacklinkMonitorServiceHandleDelegate> _delegate;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_handleQueue;	// 24 = 0x18
}

+ (id)handleWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x001000000002cc04
- (void).cxx_destruct;	// IMP=0x000000000002d504
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handleQueue; // @synthesize handleQueue=_handleQueue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <SYBacklinkMonitorServiceHandleDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_indicatorCoverage;	// IMP=0x000000000002d408
- (oneway void)indicatorCoverageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d38b
- (oneway void)setIndicatorCoverage:(id)arg1;	// IMP=0x000000000002d251
- (oneway void)activeUserActivityDidChange:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d119
- (void)setFilterCache:(id)arg1;	// IMP=0x000000000002d01b
@property(readonly, nonatomic) int processIdentifier;
- (void)_killConnectionWithCallback;	// IMP=0x000000000002cfb9
- (void)dealloc;	// IMP=0x000000000002cf77
- (id)initWithConnection:(id)arg1 queue:(id)arg2;	// IMP=0x000000000002cc72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

