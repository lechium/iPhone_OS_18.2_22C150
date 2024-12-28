//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BRContainersMonitor, NSString;

@interface NDCloudContainer
{
    _Bool _isForeground;	// 24 = 0x18
    _Bool _initializedForegroundStateFromMonitorCallback;	// 25 = 0x19
    BRContainersMonitor *_monitor;	// 32 = 0x20
}

+ (id)containerIDForPrimaryIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;	// IMP=0x0020000000002b9d
- (void).cxx_destruct;	// IMP=0x0020000000003242
@property(nonatomic) _Bool initializedForegroundStateFromMonitorCallback; // @synthesize initializedForegroundStateFromMonitorCallback=_initializedForegroundStateFromMonitorCallback;
@property(nonatomic) _Bool isForeground; // @synthesize isForeground=_isForeground;
@property(retain, nonatomic) BRContainersMonitor *monitor; // @synthesize monitor=_monitor;
- (void)containerDidEnterForeground:(id)arg1;	// IMP=0x00100000000030e0
- (void)containerDidEnterBackground:(id)arg1;	// IMP=0x0010000000002fd3
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000002f13
- (void)addObserver:(id)arg1;	// IMP=0x0010000000002e53
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x0010000000002d34
- (id)initWithOperationID:(id)arg1;	// IMP=0x0010000000002ccb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
