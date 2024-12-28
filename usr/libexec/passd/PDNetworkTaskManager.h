//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString;
@protocol OS_os_transaction, PDNetworkTaskDelegate;

@interface PDNetworkTaskManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_enqueuedTasks;	// 16 = 0x10
    NSMutableArray *_scheduledTasks;	// 24 = 0x18
    NSMutableSet *_activeTasks;	// 32 = 0x20
    NSObject<OS_os_transaction> *_activeTasksTransaction;	// 40 = 0x28
    NSString *_archivePath;	// 48 = 0x30
    NSString *_scheduledActivityClientIdentifier;	// 56 = 0x38
    NSString *_powerAssertionName;	// 64 = 0x40
    unsigned int _powerAssertionIdentifier;	// 72 = 0x48
    _Bool _archivePending;	// 76 = 0x4c
    id <PDNetworkTaskDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000001f76bc
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;	// IMP=0x00100000001f76a6
- (void)task:(id)arg1 encounteredError:(id)arg2;	// IMP=0x00100000001f7690
- (void)taskFailedForAuthentication:(id)arg1;	// IMP=0x00100000001f755c
- (void)taskFailed:(id)arg1;	// IMP=0x00100000001f73b5
- (void)taskSucceeded:(id)arg1;	// IMP=0x00100000001f731f
- (void)taskChangedState:(id)arg1;	// IMP=0x00100000001f730d
- (void)task:(id)arg1 gotResult:(id)arg2;	// IMP=0x00100000001f72f7
- (void)_unarchiveTasks;	// IMP=0x00100000001f6bef
- (void)_archiveTasks;	// IMP=0x00100000001f655e
- (void)_releasePowerAssertion;	// IMP=0x00100000001f6462
- (void)_createPowerAssertion;	// IMP=0x00100000001f62b1
- (void)_lock_deactivateTask:(id)arg1;	// IMP=0x00100000001f6091
- (void)_activateTask:(id)arg1;	// IMP=0x00100000001f5eae
- (void)_activateOrScheduleEligibleTasksWithNetworkConnectivity:(_Bool)arg1;	// IMP=0x00100000001f5ac0
- (void)_tryToDequeueTasks;	// IMP=0x00100000001f4f9c
- (void)_enqueueTask:(id)arg1;	// IMP=0x00100000001f49b0
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00100000001f4967
- (void)nukeArchive;	// IMP=0x00100000001f465c
- (_Bool)containsTaskPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f44fc
- (void)cancelTasksPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000001f414e
- (void)performTask:(id)arg1;	// IMP=0x00100000001f4120
- (void)dealloc;	// IMP=0x00100000001f4087
- (id)initWithDelegate:(id)arg1 archiveName:(id)arg2;	// IMP=0x00100000001f3e2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
