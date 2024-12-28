//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttendingUsecaseManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_idleUsecases;	// 16 = 0x10
    NSHashTable *_activeUsecases;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000004bdc7
@property(retain, nonatomic) NSHashTable *activeUsecases; // @synthesize activeUsecases=_activeUsecases;
@property(retain, nonatomic) NSHashTable *idleUsecases; // @synthesize idleUsecases=_idleUsecases;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)speechStartDetectedWithEventInfo:(id)arg1;	// IMP=0x001000000004bd70
- (void)speechPauseDetected;	// IMP=0x001000000004bd6a
- (void)attendingStoppedWithReason:(long long)arg1;	// IMP=0x001000000004bd64
- (void)_cleanupUsecases:(id)arg1;	// IMP=0x001000000004bc47
- (void)stopAttending:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000004bb8f
- (void)startAttending:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004ba41
- (id)usecaseForType:(long long)arg1;	// IMP=0x001000000004b978
- (id)init;	// IMP=0x001000000004b8a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
