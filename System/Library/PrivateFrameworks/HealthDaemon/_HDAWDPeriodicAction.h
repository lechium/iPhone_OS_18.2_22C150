//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDAssertion, HDPeriodicActivity, HDProfile, NSDate, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HDAWDPeriodicAction : NSObject
{
    NSString *_waitingToRunKey;	// 8 = 0x8
    NSString *_lastSubmissionAttemptKey;	// 16 = 0x10
    NSString *_intervalCounterKey;	// 24 = 0x18
    NSString *_lastProcessedDateKey;	// 32 = 0x20
    long long _repeatInterval;	// 40 = 0x28
    long long _graceInterval;	// 48 = 0x30
    _Bool _requiresClassB;	// 56 = 0x38
    long long _intervalMultiple;	// 64 = 0x40
    long long _maximumAttemptCount;	// 72 = 0x48
    double _minimumDelayBetweenAttempts;	// 80 = 0x50
    HDProfile *_profile;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
    HDAssertion *_preparedDatabaseAccessibilityAssertion;	// 104 = 0x68
    CDUnknownBlockType _block;	// 112 = 0x70
    HDPeriodicActivity *_periodicActivity;	// 120 = 0x78
    long long _waitingToRun;	// 128 = 0x80
    NSDate *_lastSubmissionAttemptDate;	// 136 = 0x88
    long long _intervalCounter;	// 144 = 0x90
    NSDate *_lastProcessedDate;	// 152 = 0x98
    NSString *_taskName;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000036d842
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000036d589
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;	// IMP=0x000000000036d4e9
- (void)dealloc;	// IMP=0x000000000036c69a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

