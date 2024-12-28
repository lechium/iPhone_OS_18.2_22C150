//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSSet, NSString;

@interface PDWhatChangedTask
{
    NSMutableArray *_pendingTasks;	// 8 = 0x8
    NSMutableArray *_completedTasks;	// 16 = 0x10
    NSMutableArray *_activeTasks;	// 24 = 0x18
    _Bool _gotUpdates;	// 32 = 0x20
    NSString *_passTypeIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000003516bf
+ (id)taskWithPassTypeIdentifier:(id)arg1 subtasks:(id)arg2;	// IMP=0x0010000000350e1e
- (void).cxx_destruct;	// IMP=0x0020000000351c89
@property(readonly, nonatomic) _Bool gotUpdates; // @synthesize gotUpdates=_gotUpdates;
@property(readonly, retain, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
- (void)_updateForTaskDeactivation:(_Bool)arg1;	// IMP=0x0010000000351be0
- (void)_addTask:(id)arg1;	// IMP=0x0010000000351b83
- (void)_commonInit;	// IMP=0x0010000000351b12
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000351a38
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003516c7
- (void)taskRequestedReauthentication:(id)arg1;	// IMP=0x00100000003516b9
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;	// IMP=0x001000000035169e
- (void)task:(id)arg1 encounteredError:(id)arg2;	// IMP=0x0010000000351683
- (void)taskFailedForAuthentication:(id)arg1;	// IMP=0x0010000000351648
- (void)taskFailed:(id)arg1;	// IMP=0x001000000035160d
- (void)taskSucceeded:(id)arg1;	// IMP=0x0010000000351571
- (void)taskChangedState:(id)arg1;	// IMP=0x001000000035155f
- (void)task:(id)arg1 gotResult:(id)arg2;	// IMP=0x0010000000351492
- (_Bool)_matchesTask:(id)arg1;	// IMP=0x0000000000351436
@property(readonly, copy) NSString *description;
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x00100000003513ec
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x00100000003513d6
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x00100000003513a8
- (void)performReset;	// IMP=0x00100000003513a2
- (void)performCancel;	// IMP=0x0010000000351273
- (void)performStart:(_Bool)arg1;	// IMP=0x00100000003510d1
@property(readonly, retain, nonatomic) NSSet *subtasks;
- (id)_initWithPassTypeIdentifier:(id)arg1 subtasks:(id)arg2;	// IMP=0x0010000000350e8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
