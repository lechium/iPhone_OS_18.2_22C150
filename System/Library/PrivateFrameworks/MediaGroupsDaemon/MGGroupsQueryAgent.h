//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MGGroupIdentifier, NSDictionary, NSMapTable, NSOperationQueue;
@protocol MGGroupsQueryAgentDelegate;

__attribute__((visibility("hidden")))
@interface MGGroupsQueryAgent : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <MGGroupsQueryAgentDelegate> _delegate;	// 16 = 0x10
    NSOperationQueue *_queue;	// 24 = 0x18
    NSDictionary *_operations;	// 32 = 0x20
    NSMapTable *_mediators;	// 40 = 0x28
    NSDictionary *_mediatorsByGroup;	// 48 = 0x30
    NSDictionary *_groupsByMediator;	// 56 = 0x38
    NSDictionary *_groups;	// 64 = 0x40
    MGGroupIdentifier *_currentIdentifier;	// 72 = 0x48
    NSDictionary *_containers;	// 80 = 0x50
    NSDictionary *_variables;	// 88 = 0x58
    NSDictionary *_queries;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000017062
@property(copy, nonatomic) NSDictionary *queries; // @synthesize queries=_queries;
@property(copy, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property(copy, nonatomic) NSDictionary *containers; // @synthesize containers=_containers;
@property(copy, nonatomic) MGGroupIdentifier *currentIdentifier; // @synthesize currentIdentifier=_currentIdentifier;
@property(copy, nonatomic) NSDictionary *groups; // @synthesize groups=_groups;
@property(copy, nonatomic) NSDictionary *groupsByMediator; // @synthesize groupsByMediator=_groupsByMediator;
@property(copy, nonatomic) NSDictionary *mediatorsByGroup; // @synthesize mediatorsByGroup=_mediatorsByGroup;
@property(readonly, nonatomic) NSMapTable *mediators; // @synthesize mediators=_mediators;
@property(copy, nonatomic) NSDictionary *operations; // @synthesize operations=_operations;
@property(readonly, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <MGGroupsQueryAgentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)groupsMediatorRemoved:(id)arg1;	// IMP=0x0000000000016d9b
- (void)groupsMediator:(id)arg1 didUpdateGroups:(id)arg2;	// IMP=0x0000000000016b5a
- (id)outstandingQueryForIdentifier:(id)arg1;	// IMP=0x00000000000169d5
- (void)removeOutstandingQuery:(id)arg1;	// IMP=0x00000000000166c7
- (void)addOutstandingQuery:(id)arg1;	// IMP=0x000000000001634f
- (void)_queryOperation:(id)arg1 didFindGroups:(id)arg2;	// IMP=0x0000000000015a20
- (void)_prepareWithGroups:(id)arg1 currentIdentifier:(id)arg2;	// IMP=0x0000000000013de7
- (void)_performQueryExchangeUsingGroups:(id)arg1 currentIdentifier:(id)arg2;	// IMP=0x0000000000013c67
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013c29
- (void)setCurrentDeviceIdentifier:(id)arg1;	// IMP=0x0000000000013b78
- (id)init;	// IMP=0x0000000000013482
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000131f3

@end

