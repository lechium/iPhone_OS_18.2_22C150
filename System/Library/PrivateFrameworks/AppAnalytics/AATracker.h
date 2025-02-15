//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface AATracker : NSObject
{
    MISSING_TYPE *name;	// 8 = 0x8
    MISSING_TYPE *identifier;	// 24 = 0x18
    MISSING_TYPE *tracker;	// 40 = 0x28
    MISSING_TYPE *eventMirrorStore;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000535d0
- (id)init;	// IMP=0x0000000000053550
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *name;
- (void)timeRawEvent:(id)arg1 submitAndRestartWithSession:(_Bool)arg2 startTime:(id)arg3;	// IMP=0x0000000000053f40
- (void)timeRawEvent:(id)arg1 submitAndRestartWithSession:(_Bool)arg2;	// IMP=0x0000000000053db0
- (void)timeRawEvent:(id)arg1 startTime:(id)arg2;	// IMP=0x0000000000053b90
- (void)timeRawEvent:(id)arg1;	// IMP=0x0000000000053b20
- (void)timeEventType:(Class)arg1 submitAndRestartWithSession:(_Bool)arg2 startTime:(id)arg3;	// IMP=0x0000000000053ae0
- (void)timeEventType:(Class)arg1 submitAndRestartWithSession:(_Bool)arg2;	// IMP=0x0000000000053950
- (void)timeEventType:(Class)arg1 startTime:(id)arg2;	// IMP=0x00000000000537c0
- (void)timeEventType:(Class)arg1;	// IMP=0x0000000000053660
- (void)submitRawEvent:(id)arg1 onlyIfTimed:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000550a0
- (void)submitRawEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000054de0
- (void)submitRawEvent:(id)arg1 onlyIfTimed:(_Bool)arg2;	// IMP=0x0000000000054980
- (void)submitRawEvent:(id)arg1;	// IMP=0x00000000000547a0
- (void)submitEventType:(Class)arg1 onlyIfTimed:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000546f0
- (void)submitEventType:(Class)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000543d0
- (void)submitEventType:(Class)arg1 onlyIfTimed:(_Bool)arg2;	// IMP=0x00000000000542e0
- (void)submitEventType:(Class)arg1;	// IMP=0x00000000000540e0
- (id)delayedSubmitRawEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000056210
- (id)delayedSubmitRawEvent:(id)arg1 onlyIfTimed:(_Bool)arg2;	// IMP=0x00000000000560a0
- (id)delayedSubmitRawEvent:(id)arg1;	// IMP=0x0000000000055f30
- (id)delayedSubmitRawEvent:(id)arg1 onlyIfTimed:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000055e00
- (id)delayedSubmitEventType:(Class)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000055930
- (id)delayedSubmitEventType:(Class)arg1 onlyIfTimed:(_Bool)arg2;	// IMP=0x00000000000557c0
- (id)delayedSubmitEventType:(Class)arg1;	// IMP=0x0000000000055670
- (id)delayedSubmitEventType:(Class)arg1 onlyIfTimed:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000055530
- (void)explicitSubmitRawEvent:(id)arg1 submitTime:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000573e0
- (void)explicitSubmitRawEvent:(id)arg1 submitTime:(id)arg2;	// IMP=0x0000000000057270
- (void)explicitSubmitRawEvent:(id)arg1 onlyIfTimed:(_Bool)arg2 submitTime:(id)arg3;	// IMP=0x0000000000057040
- (void)explicitSubmitRawEvent:(id)arg1 onlyIfTimed:(_Bool)arg2 submitTime:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000056dc0
- (void)explicitSubmitEvent:(Class)arg1 submitTime:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000056a70
- (void)explicitSubmitEvent:(Class)arg1 submitTime:(id)arg2;	// IMP=0x0000000000056990
- (void)explicitSubmitEvent:(Class)arg1 onlyIfTimed:(_Bool)arg2 submitTime:(id)arg3;	// IMP=0x00000000000567d0
- (void)explicitSubmitEvent:(Class)arg1 onlyIfTimed:(_Bool)arg2 submitTime:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000056540
- (void)clearStackEventType:(Class)arg1 includeParentTrackers:(_Bool)arg2;	// IMP=0x0000000000057cf0
- (void)clearStack:(Class)arg1;	// IMP=0x0000000000057bd0
- (void)popDataEventByName:(id)arg1;	// IMP=0x0000000000057a20
- (void)popDataEventType:(Class)arg1;	// IMP=0x0000000000057950
- (void)pushDataEvent:(id)arg1 traits:(id)arg2 file:(id)arg3 line:(long long)arg4;	// IMP=0x0000000000057890
- (void)registerDataEventType:(Class)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057680
@property(nonatomic, readonly) NSArray *debugPath;
@property(nonatomic, readonly) NSArray *path;
- (id)chainWithName:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000057f40
- (id)chainWithName:(id)arg1;	// IMP=0x0000000000057e00
- (void)removeSessionObserversForObject:(id)arg1;	// IMP=0x00000000000583a0
- (id)onSessionChangeWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000058270
- (void)dynamicTransactionWithIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000587b0
- (void)transactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000584d0
- (void)ifSession:(CDUnknownBlockType)arg1;	// IMP=0x0000000000058cb0
- (void)whenSession:(CDUnknownBlockType)arg1;	// IMP=0x0000000000058a00
- (void)leaveGroup;	// IMP=0x0000000000059370
- (void)enterGroup;	// IMP=0x00000000000592d0
- (void)enterGroupWithName:(id)arg1 contentType:(long long)arg2;	// IMP=0x00000000000590d0
- (void)enterGroupWithName:(id)arg1;	// IMP=0x0000000000058f30
- (void)resume;	// IMP=0x00000000000594a0
- (void)suspend;	// IMP=0x0000000000059420

@end

