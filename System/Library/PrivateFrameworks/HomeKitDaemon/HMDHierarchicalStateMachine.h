//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CUStateEvent, CUStateMachine, HMDHierarchicalStateMachineState, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHierarchicalStateMachine : HMFObject
{
    _Bool _allowSelfStateTransitions;	// 8 = 0x8
    _Bool _started;	// 9 = 0x9
    CUStateMachine *_cuStateMachine;	// 16 = 0x10
    CUStateEvent *_eventCausingStateTransition;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    HMDHierarchicalStateMachineState *_currentHSMState;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000fa6a81
- (void).cxx_destruct;	// IMP=0x0000000000fa66fe
@property __weak HMDHierarchicalStateMachineState *currentHSMState; // @synthesize currentHSMState=_currentHSMState;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CUStateEvent *eventCausingStateTransition; // @synthesize eventCausingStateTransition=_eventCausingStateTransition;
@property(readonly, nonatomic, getter=hasStarted) _Bool started; // @synthesize started=_started;
@property(readonly, nonatomic) _Bool allowSelfStateTransitions; // @synthesize allowSelfStateTransitions=_allowSelfStateTransitions;
@property(retain, nonatomic) CUStateMachine *cuStateMachine; // @synthesize cuStateMachine=_cuStateMachine;
- (void)setHSMInternalCurrentState:(id)arg1;	// IMP=0x0000000000fa65cd
- (id)stateWithName:(id)arg1;	// IMP=0x0000000000fa647f
- (void)currentHSMStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000fa63c7
- (void)setStates:(id)arg1;	// IMP=0x0000000000fa62fc
@property(retain, nonatomic) HMDHierarchicalStateMachineState *initialState; // @dynamic initialState;
- (void)transitionToState:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000fa60e3
- (void)transitionToState:(id)arg1;	// IMP=0x0000000000fa6067
- (void)dispatchEvent:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000fa5fc5
- (void)dispatchEvent:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000fa5f33
- (void)dispatchEvent:(id)arg1;	// IMP=0x0000000000fa5e7b
- (void)invalidate;	// IMP=0x0000000000fa5e0a
- (void)_start;	// IMP=0x0000000000fa5d8c
- (void)start;	// IMP=0x0000000000fa5d1b
- (id)initWithQueue:(id)arg1 allowSelfStateTransitions:(_Bool)arg2;	// IMP=0x0000000000fa5c7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

