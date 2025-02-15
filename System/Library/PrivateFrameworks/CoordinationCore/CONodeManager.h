//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COBallotBrowser, COConstituent, COElectionInfo, COExecutionContext, COMeshNode, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol CONodeManagerDelegate, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CONodeManager : NSObject
{
    _Bool _started;	// 8 = 0x8
    _Bool _isInElection;	// 9 = 0x9
    id <CONodeManagerDelegate> _delegate;	// 16 = 0x10
    COExecutionContext *_executionContext;	// 24 = 0x18
    COConstituent *_leader;	// 32 = 0x20
    NSSet *_acceptableCommands;	// 40 = 0x28
    COBallotBrowser *_ballotBrowser;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_electionElapsedTimer;	// 56 = 0x38
    unsigned long long _electionPrevious;	// 64 = 0x40
    unsigned long long _electionStart;	// 72 = 0x48
    unsigned long long _electionEnd;	// 80 = 0x50
    unsigned long long _longestBackOff;	// 88 = 0x58
    COConstituent *_longestBackedOffConstituent;	// 96 = 0x60
    NSMutableDictionary *_browsersObservers;	// 104 = 0x68
    NSMutableDictionary *_nodeControllers;	// 112 = 0x70
    COElectionInfo *_electionInfo;	// 120 = 0x78
    NSError *_error;	// 128 = 0x80
    NSMutableArray *_pendingDiscoveryRecords;	// 136 = 0x88
    NSMutableDictionary *_leaderCommands;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000067a5c
@property(retain, nonatomic) NSMutableDictionary *leaderCommands; // @synthesize leaderCommands=_leaderCommands;
@property(retain, nonatomic) NSMutableArray *pendingDiscoveryRecords; // @synthesize pendingDiscoveryRecords=_pendingDiscoveryRecords;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) COElectionInfo *electionInfo; // @synthesize electionInfo=_electionInfo;
@property(retain, nonatomic) NSMutableDictionary *nodeControllers; // @synthesize nodeControllers=_nodeControllers;
@property(readonly, nonatomic) NSMutableDictionary *browsersObservers; // @synthesize browsersObservers=_browsersObservers;
@property(nonatomic) _Bool isInElection; // @synthesize isInElection=_isInElection;
@property(retain, nonatomic) COConstituent *longestBackedOffConstituent; // @synthesize longestBackedOffConstituent=_longestBackedOffConstituent;
@property(nonatomic) unsigned long long longestBackOff; // @synthesize longestBackOff=_longestBackOff;
@property(nonatomic) unsigned long long electionEnd; // @synthesize electionEnd=_electionEnd;
@property(nonatomic) unsigned long long electionStart; // @synthesize electionStart=_electionStart;
@property(nonatomic) unsigned long long electionPrevious; // @synthesize electionPrevious=_electionPrevious;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *electionElapsedTimer; // @synthesize electionElapsedTimer=_electionElapsedTimer;
@property(retain, nonatomic) COBallotBrowser *ballotBrowser; // @synthesize ballotBrowser=_ballotBrowser;
@property(retain, nonatomic) NSSet *acceptableCommands; // @synthesize acceptableCommands=_acceptableCommands;
@property(retain, nonatomic) COConstituent *leader; // @synthesize leader=_leader;
@property(copy, nonatomic) COExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
@property(nonatomic) __weak id <CONodeManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logElectionSummary;	// IMP=0x0000000000067148
- (id)_constituentCharacteristics:(id)arg1;	// IMP=0x00000000000670c7
- (void)_checkForElectionCompletion:(id)arg1 nodeController:(id)arg2;	// IMP=0x0000000000066973
- (void)_nodeStartedElection:(id)arg1 withElectionInfo:(id)arg2;	// IMP=0x0000000000066609
- (void)_informDelegateAboutNodeRemoval:(id)arg1 oldState:(long long)arg2;	// IMP=0x0000000000066526
- (void)_informDelegateAboutNodeAddition:(id)arg1 oldState:(long long)arg2;	// IMP=0x000000000006642f
- (void)_nodeBecameInactive:(id)arg1 withReason:(long long)arg2;	// IMP=0x000000000006607a
- (void)_nodeStopped:(id)arg1 withReason:(long long)arg2;	// IMP=0x0000000000065eb5
- (void)_handleLostRecord:(id)arg1;	// IMP=0x0000000000065d8f
- (void)_handleDiscoveryRecord:(id)arg1;	// IMP=0x000000000006571d
- (void)_informControllersAboutNewElectionInfo;	// IMP=0x00000000000655ad
- (void)_reportLostLeader:(id)arg1 withReason:(long long)arg2;	// IMP=0x0000000000064597
- (void)_handleEnqueuedCommandsForLostNode:(id)arg1 error:(id)arg2;	// IMP=0x00000000000641a3
- (_Bool)_updateBallot:(id)arg1;	// IMP=0x0000000000063ecb
- (void)_resetBallot;	// IMP=0x0000000000063cbe
- (void)_bumpGeneration;	// IMP=0x0000000000063b07
- (void)backedOffNodeMovedOutOfElection:(id)arg1;	// IMP=0x00000000000639e9
- (void)nodeController:(id)arg1 didReceiveOnDemandNodeCreationRequest:(id)arg2;	// IMP=0x0000000000063980
- (void)nodeController:(id)arg1 didRemoveTransport:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000063130
- (void)nodeController:(id)arg1 didAddTransport:(id)arg2;	// IMP=0x0000000000062dbb
- (void)nodeController:(id)arg1 didUpdateRemoteConstituent:(id)arg2 to:(id)arg3;	// IMP=0x000000000006270b
- (void)nodeController:(id)arg1 didReceiveError:(id)arg2 forCommand:(id)arg3;	// IMP=0x00000000000624ce
- (void)nodeController:(id)arg1 didReceiveRequest:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000622db
- (void)nodeController:(id)arg1 didReceiveCommand:(id)arg2;	// IMP=0x0000000000062160
- (void)nodeController:(id)arg1 didReceiveElectionCmd:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006135f
- (void)fast_fold_nodeController:(id)arg1 didReceiveElectionCmd:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060978
- (void)nodeController:(id)arg1 didUpdateState:(long long)arg2 to:(long long)arg3 reason:(long long)arg4 withLastSentElectionInfo:(id)arg5;	// IMP=0x00000000000606e9
- (void)_didLoseRecord:(id)arg1;	// IMP=0x00000000000605bb
- (void)_didDiscoverRecord:(id)arg1;	// IMP=0x0000000000060541
- (id)activeNodesWithSelfNode:(_Bool)arg1;	// IMP=0x00000000000602b2
@property(readonly, nonatomic) NSArray *nodes;
- (id)nodeControllerForIDS:(id)arg1;	// IMP=0x000000000006004f
- (id)nodeControllerForConstituent:(id)arg1;	// IMP=0x000000000005fd84
@property(readonly, nonatomic) COMeshNode *nodeForMe;
@property(readonly, nonatomic) COConstituent *me;
- (void)pingLeader;	// IMP=0x000000000005fb35
- (void)sendCommand:(id)arg1;	// IMP=0x000000000005f57d
- (void)sendCommands:(id)arg1;	// IMP=0x000000000005f3d5
- (void)removeBrowser:(id)arg1;	// IMP=0x000000000005f33d
- (void)addBrowser:(id)arg1;	// IMP=0x000000000005f27c
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005e572
- (void)start;	// IMP=0x000000000005dfda
@property(readonly, copy) NSString *description;
- (id)shortDescription;	// IMP=0x000000000005de47
- (id)initWithExecutionContext:(id)arg1;	// IMP=0x000000000005dd14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

