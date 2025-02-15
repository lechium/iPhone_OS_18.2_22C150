//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSHashTable, NSString;
@protocol HMDXPCActivityInterfacing, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDLogEventDailyScheduler : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    CDUnknownBlockType _dateFactory;	// 16 = 0x10
    NSDate *_lastRunTime;	// 24 = 0x18
    NSString *_xpcActivityIdentifier;	// 32 = 0x20
    NSString *_preferencesKey;	// 40 = 0x28
    NSHashTable *_mutableTaskRunners;	// 48 = 0x30
    id <HMDXPCActivityInterfacing> _xpcActivityInterface;	// 56 = 0x38
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000405d10
+ (id)createSchedulerWithLogEventSubmitter:(id)arg1;	// IMP=0x0010000000405c64
- (void).cxx_destruct;	// IMP=0x0000000000405941
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain, nonatomic) id <HMDXPCActivityInterfacing> xpcActivityInterface; // @synthesize xpcActivityInterface=_xpcActivityInterface;
@property(retain, nonatomic) NSHashTable *mutableTaskRunners; // @synthesize mutableTaskRunners=_mutableTaskRunners;
@property(readonly, nonatomic) NSString *preferencesKey; // @synthesize preferencesKey=_preferencesKey;
@property(readonly, nonatomic) NSString *xpcActivityIdentifier; // @synthesize xpcActivityIdentifier=_xpcActivityIdentifier;
@property(retain, nonatomic) NSDate *lastRunTime; // @synthesize lastRunTime=_lastRunTime;
@property(copy) CDUnknownBlockType dateFactory; // @synthesize dateFactory=_dateFactory;
- (id)statusSummary;	// IMP=0x0000000000405764
- (void)runHomeutilTasks;	// IMP=0x0000000000405471
- (void)runDailyTasks;	// IMP=0x0000000000405234
- (id)taskRunners;	// IMP=0x00000000004051cc
- (void)registerDailyTaskRunner:(id)arg1;	// IMP=0x0000000000405156
- (void)_runActivity:(id)arg1;	// IMP=0x0000000000404d17
- (void)_handleCheckInForActivity:(id)arg1;	// IMP=0x0000000000404a73
- (void)_registerActivity;	// IMP=0x000000000040487a
- (id)_criteriaForActivity;	// IMP=0x00000000004047db
- (id)initWithIdentifier:(id)arg1 preferencesKey:(id)arg2 logEventSubmitter:(id)arg3 xpcActivityInterface:(id)arg4 dateFactory:(CDUnknownBlockType)arg5;	// IMP=0x00000000004045ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

