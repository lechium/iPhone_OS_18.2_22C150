//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString, NavdDoomStorage;
@protocol OS_dispatch_queue;

@interface NavdDoomConfigurableGuard : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_requestTimes;	// 16 = 0x10
    NSError *_mostRecentError;	// 24 = 0x18
    unsigned long long _mostRecentErrorOccured;	// 32 = 0x20
    NavdDoomStorage *_storage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000ac69
- (_Bool)isTrue;	// IMP=0x001000000000ac57
- (id)objectForJSON;	// IMP=0x001000000000ac3d
- (id)nameForJSON;	// IMP=0x001000000000ac2b
@property(readonly, nonatomic) NSString *uniqueName;
@property(readonly, copy) NSString *description;
- (double)defaultMinTimeWhenHappy;	// IMP=0x001000000000ab60
- (double)defaultMaxCooldownTime;	// IMP=0x001000000000ab49
- (double)defaultCooldownMultiplierPerError;	// IMP=0x001000000000ab32
- (double)defaultCooldownTimeForError;	// IMP=0x001000000000ab1b
- (long long)defaultMeasuredMaxRequests;	// IMP=0x001000000000ab04
- (double)defaultMeasuredTimeInterval;	// IMP=0x001000000000aaed
- (double)defaultPurgeAgeLimit;	// IMP=0x001000000000aad6
- (long long)defaultPurgeCountLimit;	// IMP=0x001000000000aabf
- (void)reset;	// IMP=0x001000000000a9ca
- (_Bool)evaluateError:(id)arg1;	// IMP=0x001000000000a3b8
- (void)didRequestRoute;	// IMP=0x001000000000a16a
- (_Bool)canRequestRoute;	// IMP=0x001000000000a117
- (id)nextAllowedRequestTime;	// IMP=0x0010000000009f64
- (void)_purgeWithMaxAge:(double)arg1 maxCount:(long long)arg2;	// IMP=0x0010000000009baf
- (id)_calculateNextAvailableTime;	// IMP=0x00100000000098f1
- (unsigned long long)_requestsOverTimeInterval:(double)arg1;	// IMP=0x001000000000966d
- (id)initWithStorage:(id)arg1;	// IMP=0x0010000000009490

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
