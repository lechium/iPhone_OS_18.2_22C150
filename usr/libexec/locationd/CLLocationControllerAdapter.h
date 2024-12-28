//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLocationControllerAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000003e48ac
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000003e4893
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003e4836
- (void)setRealTimeHarvestTriggered:(double)arg1;	// IMP=0x00200000003e63c0
- (void)onOutdoorUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e62f3
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x00100000003e62ed
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e5e54
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x00100000003e5e4e
- (void)setGpsAssistantHasClients:(_Bool)arg1 forNotification:(int)arg2;	// IMP=0x00100000003e5e0e
- (void)setTrackRunHint:(id)arg1;	// IMP=0x00100000003e5c14
- (_Bool)syncgetZaxisStats:(void *)arg1;	// IMP=0x00100000003e51fe
- (_Bool)syncgetActiveTechs:(void *)arg1;	// IMP=0x00100000003e4af2
- (_Bool)syncgetMetric:(void *)arg1;	// IMP=0x00100000003e4ac0
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e4a98
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000003e4a6b
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e4a43
- (void *)adaptee;	// IMP=0x00100000003e4a10
- (void)endService;	// IMP=0x00100000003e49f5
- (void)beginService;	// IMP=0x00100000003e4945
- (id)init;	// IMP=0x00100000003e4908

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
