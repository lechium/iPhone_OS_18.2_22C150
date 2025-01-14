//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMActionSetBuilder, HMHome, HMTriggerPolicy, NSArray, NSMutableArray, NSPredicate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _HMEventTriggerBuilder
{
    _Bool _executeOnce;	// 24 = 0x18
    NSPredicate *_predicate;	// 32 = 0x20
    unsigned long long _recurrenceDays;	// 40 = 0x28
    NSMutableArray *_events;	// 48 = 0x30
    NSMutableArray *_endEvents;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x0010000000232a48
- (void).cxx_destruct;	// IMP=0x00000000002329f5
- (void)_with:(id)arg1 updateEvents:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000232949
- (void)_with:(id)arg1 removeEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002327cf
- (void)_with:(id)arg1 addEvent:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000232655
- (void)updateEndEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000232497
- (void)updateEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002322d9
- (void)removeEndEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000023211b
- (void)removeEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000231f5d
- (void)addEndEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000231d9f
- (void)addEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000231be1
- (void)_with:(id)arg1 setEvents:(id)arg2;	// IMP=0x0000000000231760
- (_Bool)_with:(id)arg1 removeEvent:(id)arg2;	// IMP=0x0000000000231667
- (_Bool)_with:(id)arg1 addEvent:(id)arg2;	// IMP=0x0000000000231509
- (void)removeEndEvent:(id)arg1;	// IMP=0x000000000023136c
- (void)removeEvent:(id)arg1;	// IMP=0x00000000002311cf
- (void)addEndEvent:(id)arg1;	// IMP=0x0000000000231032
- (void)addEvent:(id)arg1;	// IMP=0x0000000000230e95
@property(copy, nonatomic) NSArray *endEvents;
@property(copy, nonatomic) NSArray *events;
- (void)updatePredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000230afc
@property(copy, nonatomic) NSPredicate *predicate;
- (void)updateExecuteOnce:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000230842
@property(nonatomic) _Bool executeOnce;
- (id)copyAsBuilder;	// IMP=0x000000000023078b
- (id)initWithEventTrigger:(id)arg1;	// IMP=0x000000000023021d
- (id)initWithContext:(id)arg1 home:(id)arg2;	// IMP=0x000000000023019a
- (Class)class;	// IMP=0x0000000000230189
- (unsigned long long)triggerActivationState;	// IMP=0x0000000000232aa2

// Remaining properties
@property(copy, nonatomic) NSArray *actionSets;
@property(readonly, copy, nonatomic) NSString *configuredName;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMHome *home;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool nameIsConfigured;
@property(retain, nonatomic) HMTriggerPolicy *policy;
@property(nonatomic) unsigned long long recurrenceDays;
@property(copy, nonatomic) NSArray *recurrences;
@property(readonly) Class superclass;
@property(readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;

@end

