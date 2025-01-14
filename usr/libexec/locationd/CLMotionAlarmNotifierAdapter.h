//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionAlarmNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000006c9416
+ (id)getSilo;	// IMP=0x00100000006c9202
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006c91e9
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006c918c
- (void)fireEventAlarm:(unsigned int)arg1;	// IMP=0x00200000006cd788
- (void)onCardioChangeEvent;	// IMP=0x00100000006cd11f
- (void)onClassATimerActivity:(id)arg1 withAlarmId:(unsigned long long)arg2;	// IMP=0x00100000006cca20
- (void)launchWatchApplicationForCompanion:(id)arg1;	// IMP=0x00100000006cca0e
- (void)launchRemoteApplication:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006cc776
- (void)acknowledgeAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006cbbf4
- (void)unregisterAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006cb409
- (void)registerAlarm:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006ca24d
- (void)unregisterClient:(CDUnknownBlockType)arg1 systemClient:(_Bool)arg2;	// IMP=0x00100000006c9c26
- (void)registerClient:(CDUnknownBlockType)arg1 adapter:(byref id)arg2 systemClient:(_Bool)arg3;	// IMP=0x00100000006c9426
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006c93ee
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006c93c1
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006c9399
- (void *)adaptee;	// IMP=0x00100000006c9366
- (void)endService;	// IMP=0x00100000006c934b
- (void)beginService;	// IMP=0x00100000006c929b
- (id)init;	// IMP=0x00100000006c925e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

