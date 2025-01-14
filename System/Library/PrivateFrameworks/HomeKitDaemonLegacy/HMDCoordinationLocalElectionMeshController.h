//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/COMeshController.h>

@class NSArray, NSString;
@protocol HMDLocalElectionMeshControllerDelegate, HMDLocalElectionMeshNode;

__attribute__((visibility("hidden")))
@interface HMDCoordinationLocalElectionMeshController : COMeshController
{
    id <HMDLocalElectionMeshControllerDelegate> delegate;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x001000000082ef26
- (void).cxx_destruct;	// IMP=0x000000000082e404
@property(nonatomic) __weak id <HMDLocalElectionMeshControllerDelegate> delegate; // @synthesize delegate;
- (void)meshControllerDidUpdatesNodes;	// IMP=0x000000000082e360
- (void)meshControllerDidStartElection;	// IMP=0x000000000082e2e9
- (void)meshControllerDidElectLeader;	// IMP=0x000000000082e272
- (id)logIdentifier;	// IMP=0x000000000082e206
- (id)debugDescriptionForMeshState;	// IMP=0x000000000082e168
- (id)debugDescriptionForControllerType;	// IMP=0x000000000082e053
@property(readonly) NSArray *meshNodes;
@property(readonly) id <HMDLocalElectionMeshNode> leaderNode;
@property(readonly) _Bool isProcessing;
@property(readonly) _Bool isLeader;
- (void)sendPingRequestToNode:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000082dbdb
- (id)meshNodeFor:(id)arg1;	// IMP=0x000000000082dad5
- (void)sendPingNotificationToFollowersWithPrimaryResident:(id)arg1;	// IMP=0x000000000082da36
- (void)sendPingCommandToLeaderWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000082d959
- (void)stop;	// IMP=0x000000000082d8fb
- (void)startMeshWithName:(id)arg1;	// IMP=0x000000000082d874
- (void)_setupMessageRegistrations;	// IMP=0x000000000082d6e9
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000082d5d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

