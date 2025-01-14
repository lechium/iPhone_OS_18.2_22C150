//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshAddOn.h"

@class COHomeHubAdapter, COHomeKitAdapter, COMTActionDirector, COTimerReadRequest, MTTimerManager, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol COMeshTimerAddOnDelegate;

__attribute__((visibility("hidden")))
@interface COMeshTimerAddOn : COMeshAddOn
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <COMeshTimerAddOnDelegate> _delegate;	// 16 = 0x10
    MTTimerManager *_timerManager;	// 24 = 0x18
    MTTimerManager *_observedTimerManager;	// 32 = 0x20
    NSSet *_members;	// 40 = 0x28
    NSDictionary *_interests;	// 48 = 0x30
    NSDictionary *_ourInterests;	// 56 = 0x38
    COMTActionDirector *_actionDirector;	// 64 = 0x40
    NSMutableDictionary *_timerIndex;	// 72 = 0x48
    COHomeKitAdapter *_homekit;	// 80 = 0x50
    COHomeHubAdapter *_homehub;	// 88 = 0x58
    NSArray *_deletes;	// 96 = 0x60
    NSArray *_mergingNodes;	// 104 = 0x68
    COTimerReadRequest *_mergeRequest;	// 112 = 0x70
    NSArray *_mergeTimers;	// 120 = 0x78
    NSDictionary *_mergeResponses;	// 128 = 0x80
    NSArray *_queuedCommands;	// 136 = 0x88
    CDUnknownBlockType _recorder;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000005a582
@property(copy, nonatomic) CDUnknownBlockType recorder; // @synthesize recorder=_recorder;
@property(copy, nonatomic) NSArray *queuedCommands; // @synthesize queuedCommands=_queuedCommands;
@property(retain, nonatomic) NSDictionary *mergeResponses; // @synthesize mergeResponses=_mergeResponses;
@property(retain, nonatomic) NSArray *mergeTimers; // @synthesize mergeTimers=_mergeTimers;
@property(retain, nonatomic) COTimerReadRequest *mergeRequest; // @synthesize mergeRequest=_mergeRequest;
@property(copy, nonatomic) NSArray *mergingNodes; // @synthesize mergingNodes=_mergingNodes;
@property(copy, nonatomic) NSArray *deletes; // @synthesize deletes=_deletes;
@property(readonly, nonatomic) COHomeHubAdapter *homehub; // @synthesize homehub=_homehub;
@property(readonly, nonatomic) COHomeKitAdapter *homekit; // @synthesize homekit=_homekit;
@property(retain, nonatomic) NSMutableDictionary *timerIndex; // @synthesize timerIndex=_timerIndex;
@property(retain, nonatomic) COMTActionDirector *actionDirector; // @synthesize actionDirector=_actionDirector;
@property(retain, nonatomic) NSDictionary *ourInterests; // @synthesize ourInterests=_ourInterests;
@property(retain, nonatomic) NSDictionary *interests; // @synthesize interests=_interests;
@property(retain) NSSet *members; // @synthesize members=_members;
@property(readonly, nonatomic) MTTimerManager *observedTimerManager; // @synthesize observedTimerManager=_observedTimerManager;
@property(readonly, nonatomic) MTTimerManager *timerManager; // @synthesize timerManager=_timerManager;
- (void)director:(id)arg1 performAction:(id)arg2 from:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x000000000005986e
- (void)director:(id)arg1 membersChanged:(id)arg2;	// IMP=0x0000000000059108
- (void)interestTrackerTriggerReset:(id)arg1;	// IMP=0x0000000000058fca
- (void)interestTracker:(id)arg1 setInterests:(id)arg2 forMember:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0000000000058990
- (void)setInterests:(id)arg1 asAccessory:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000584b8
- (id)secondaryClusterMemberIfRequiredForAccessory:(id)arg1;	// IMP=0x000000000005821e
- (id)secondaryClusterMemberForAccessory:(id)arg1;	// IMP=0x0000000000057f73
- (void)establishSecondaryClusterForAccessory:(id)arg1;	// IMP=0x0000000000057ba2
- (void)canDispatchAsAccessory:(id)arg1 asInstance:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000005730e
- (void)dismissTimerWithIdentifier:(id)arg1 fromClient:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x000000000005723e
- (void)removeTimer:(id)arg1 asAccessory:(id)arg2 fromClient:(id)arg3 withCallback:(CDUnknownBlockType)arg4;	// IMP=0x00000000000570f8
- (void)updateTimer:(id)arg1 asAccessory:(id)arg2 fromClient:(id)arg3 withCallback:(CDUnknownBlockType)arg4;	// IMP=0x0000000000056fb2
- (void)addTimer:(id)arg1 asAccessory:(id)arg2 fromClient:(id)arg3 withCallback:(CDUnknownBlockType)arg4;	// IMP=0x000000000005693a
- (void)timersForAccessories:(id)arg1 fromClient:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000055dbf
- (void)timersAsAccessory:(id)arg1 fromClient:(id)arg2 withCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000559c9
- (void)handleTimerManagerStateResetNotification:(id)arg1;	// IMP=0x000000000005592c
- (void)handleTimersChangedNotification:(id)arg1;	// IMP=0x0000000000055926
- (void)handleTimerFiringTimerDismissedNotification:(id)arg1;	// IMP=0x00000000000554a2
- (void)handleTimerFiredNotification:(id)arg1;	// IMP=0x00000000000553e6
- (void)handleTimersUpdatedNotification:(id)arg1;	// IMP=0x0000000000054f26
- (void)handleTimersRemovedNotification:(id)arg1;	// IMP=0x00000000000549f3
- (void)handleTimersAddedNotification:(id)arg1;	// IMP=0x0000000000054533
- (void)handleTimerDismissRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053b5b
- (void)handleTimerDeleteRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000000000534fa
- (void)handleTimerUpdateRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052f7d
- (void)handleTimerCreateRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000052a00
- (void)handleTimerReadRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000005202c
- (_Bool)_isTimer:(id)arg1 targetingAccessory:(id)arg2;	// IMP=0x0000000000051e95
- (id)dismissTimerWithIdentifier:(id)arg1 client:(id)arg2;	// IMP=0x00000000000517a4
- (id)dismissTimerWithIdentifier:(id)arg1;	// IMP=0x0000000000051790
- (id)removeTimer:(id)arg1 client:(id)arg2 member:(id)arg3;	// IMP=0x0000000000050d1f
- (id)removeTimer:(id)arg1;	// IMP=0x0000000000050d08
- (id)updateTimer:(id)arg1 client:(id)arg2 member:(id)arg3;	// IMP=0x00000000000502d7
- (id)updateTimer:(id)arg1;	// IMP=0x00000000000502c0
- (id)addTimer:(id)arg1 client:(id)arg2 member:(id)arg3;	// IMP=0x000000000004f88f
- (id)addTimer:(id)arg1;	// IMP=0x000000000004f878
- (id)timers;	// IMP=0x000000000004f845
- (void)_addTimerDeleteEvent:(id)arg1;	// IMP=0x000000000004f608
- (void)_processQueuedCommands;	// IMP=0x000000000004f4c1
- (void)_reloadIndexWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ed5b
- (void)_finishMerge:(id)arg1;	// IMP=0x000000000004d90f
- (id)_commandsForReconciling:(id)arg1 toTruth:(id)arg2 forNode:(id)arg3;	// IMP=0x000000000004d055
- (void)_abandonMerge;	// IMP=0x000000000004ced2
- (void)_continueMerge:(id)arg1 withResponse:(id)arg2 fromNode:(id)arg3;	// IMP=0x000000000004cb1d
- (void)_primeMerge:(id)arg1 withNodes:(id)arg2;	// IMP=0x000000000004c8a3
- (void)_broadcastMerge:(id)arg1 withTruth:(id)arg2;	// IMP=0x000000000004bf59
- (void)_startMerge;	// IMP=0x000000000004bbcf
- (void)_timerManagerTimersChanged:(id)arg1;	// IMP=0x000000000004bb1b
- (void)_timerManagerStateReset:(id)arg1;	// IMP=0x000000000004b8c2
- (void)_timerManagerTimerFired:(id)arg1;	// IMP=0x000000000004b74a
- (void)_timerManagerTimersUpdated:(id)arg1;	// IMP=0x000000000004b377
- (void)_timerManagerTimersRemoved:(id)arg1;	// IMP=0x000000000004b01a
- (void)_timerManagerTimersAdded:(id)arg1;	// IMP=0x000000000004ac47
- (void)_sendNotification:(id)arg1;	// IMP=0x000000000004a7ef
- (id)_currentAccessoryForClient:(id)arg1;	// IMP=0x000000000004a6e7
- (_Bool)_isTimer:(id)arg1 targetingAccessoryIdentifiers:(id)arg2;	// IMP=0x000000000004a172
- (id)_timersForAccessories:(id)arg1 fromClient:(id)arg2 results:(id)arg3;	// IMP=0x0000000000049926
- (id)_timersForAccessory:(id)arg1 member:(id)arg2;	// IMP=0x00000000000492b2
- (id)_timersForAccessoryIdentifier:(id)arg1 allowLocalStorage:(_Bool)arg2;	// IMP=0x0000000000047ea7
- (id)_filteredTimersList:(id)arg1 forAccessory:(id)arg2;	// IMP=0x0000000000047cbd
- (void)_addCompletionsToFuture:(id)arg1 withXPCCallback:(CDUnknownBlockType)arg2 transactionDescription:(const char *)arg3;	// IMP=0x0000000000047a87
- (id)_sendRequest:(id)arg1 client:(id)arg2;	// IMP=0x00000000000474c8
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047487
@property(readonly, nonatomic) _Bool performsLocalActions;
@property(nonatomic) __weak id <COMeshTimerAddOnDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeNodesForMeshController:(id)arg1;	// IMP=0x0000000000046cbe
- (void)meshController:(id)arg1 didTransitionToState:(unsigned long long)arg2;	// IMP=0x00000000000469d9
- (void)didStopMeshController:(id)arg1;	// IMP=0x00000000000468af
- (void)willStartMeshController:(id)arg1;	// IMP=0x000000000004672d
- (void)willRemoveFromMeshController:(id)arg1;	// IMP=0x0000000000046505
- (void)didAddToMeshController:(id)arg1;	// IMP=0x00000000000452f0
- (id)init;	// IMP=0x00000000000452b0
- (id)initWithTimerManager:(id)arg1;	// IMP=0x000000000004520e
- (id)initWithTimerManager:(id)arg1 homekitAdapter:(id)arg2 hubAdapter:(id)arg3;	// IMP=0x0000000000044f77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

