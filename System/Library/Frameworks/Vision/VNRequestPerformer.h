//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VNRequestPerformer : NSObject
{
    struct os_unfair_lock_s _requestLock;	// 8 = 0x8
    NSMutableArray *_requestsInFlight;	// 16 = 0x10
    NSMutableArray *_requestsPending;	// 24 = 0x18
    struct os_unfair_lock_s _trackersInFlightLock;	// 32 = 0x20
    NSMutableSet *_trackersInFlight;	// 40 = 0x28
    NSMutableDictionary *_sequencedRequestObservations;	// 48 = 0x30
}

+ (id)_requestPerformingQueuePriorityGroup2;	// IMP=0x00100000003df735
+ (id)_requestPerformingQueuePriorityGroup1;	// IMP=0x00100000003df671
- (void).cxx_destruct;	// IMP=0x00000000003de926
- (void)cancelAllRequests;	// IMP=0x00000000003de73a
- (id)getCurrentTrackersAndReset;	// IMP=0x00000000003de52f
- (void)recordTracker:(id)arg1;	// IMP=0x00000000003de48c
- (id)previousSequencedObservationsForRequest:(id)arg1;	// IMP=0x00000000003de415
- (void)recordSequencedObservationsForRequest:(id)arg1;	// IMP=0x00000000003de33d
- (_Bool)performDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2 inContext:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003de090
- (_Bool)performRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003de076
- (id)orderedRequestsForRequests:(id)arg1;	// IMP=0x00000000003de045
- (id)dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003ddb36
- (_Bool)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000003dcda2
- (void)_groupsRequestsWithTheSameOrdinality:(id)arg1 priorityGroup1:(id)arg2 priorityGroup2:(id)arg3;	// IMP=0x00000000003dca01
- (void)_groupOrderedRequests:(id)arg1 ordinality:(id)arg2 ordinalityAndPriorityGroups:(id)arg3;	// IMP=0x00000000003dc513
- (_Bool)_performRequests:(id)arg1 onBehalfOfRequest:(id)arg2 inContext:(id)arg3 error:(id *)arg4;	// IMP=0x00000000003dc24d
- (_Bool)_validateAndPrepareRequests:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003dc08c
- (id)init;	// IMP=0x00000000003dbf9d

@end

