//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFTimer, NSString, NSUUID;
@protocol HMDMediaGroupsAggregateBackupMessageTimerDelegate, HMDTimerProvider;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsAggregateBackupMessageTimer : NSObject
{
    id <HMDMediaGroupsAggregateBackupMessageTimerDelegate> _delegate;	// 8 = 0x8
    NSUUID *_participantAccessoryUUID;	// 16 = 0x10
    NSUUID *_currentMessageIdentifier;	// 24 = 0x18
    id <HMDTimerProvider> _timerProvider;	// 32 = 0x20
    HMFTimer *_timer;	// 40 = 0x28
    unsigned long long _attemptCount;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000a73025
- (void).cxx_destruct;	// IMP=0x0000000000a72fe0
@property unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(retain) HMFTimer *timer; // @synthesize timer=_timer;
@property __weak id <HMDTimerProvider> timerProvider; // @synthesize timerProvider=_timerProvider;
@property(copy) NSUUID *currentMessageIdentifier; // @synthesize currentMessageIdentifier=_currentMessageIdentifier;
@property(readonly, copy) NSUUID *participantAccessoryUUID; // @synthesize participantAccessoryUUID=_participantAccessoryUUID;
@property __weak id <HMDMediaGroupsAggregateBackupMessageTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x0000000000a72ed4
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000a72d6a
- (id)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000a72d2a
- (double)nextTimeInterval;	// IMP=0x0000000000a72caa
- (void)startRetryTimer;	// IMP=0x0000000000a7291b
- (void)markAttemptWithMessageIdentifier:(id)arg1;	// IMP=0x0000000000a728dc
- (id)initWithParticipantAccessoryUUID:(id)arg1 timerProvider:(id)arg2;	// IMP=0x0000000000a72811
- (id)initWithParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000a727fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

