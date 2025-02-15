//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNNavigationServiceDirectionsRequestTicket, NSString, Result;
@protocol OS_dispatch_queue;

@interface TraceRouteLoadingTask : NSObject
{
    unsigned long long _taskState;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 16 = 0x10
    Result *_resultOnIsolationQueue;	// 24 = 0x18
    MNNavigationServiceDirectionsRequestTicket *_ticket;	// 32 = 0x20
    NSString *_tracePath;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000ecda0d
@property(copy, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
@property(retain, nonatomic) MNNavigationServiceDirectionsRequestTicket *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) Result *resultOnIsolationQueue; // @synthesize resultOnIsolationQueue=_resultOnIsolationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property(nonatomic) unsigned long long taskState; // @synthesize taskState=_taskState;
- (void)cancel;	// IMP=0x0010000000ecd89f
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ecd070
@property(readonly, nonatomic) Result *result;
@property(readonly, nonatomic) _Bool inProgress;
- (id)initWithTracePath:(id)arg1;	// IMP=0x0010000000eccc5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

