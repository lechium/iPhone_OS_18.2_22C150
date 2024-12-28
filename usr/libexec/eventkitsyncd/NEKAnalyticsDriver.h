//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NDTActivity, NEKNotificationCenter, NEKSyncController, NSDate, NSString;

@interface NEKAnalyticsDriver : NSObject
{
    NEKNotificationCenter *_notificationCenter;	// 8 = 0x8
    NEKSyncController *_syncController;	// 16 = 0x10
    NSDate *_minimumDateThreshold;	// 24 = 0x18
    NDTActivity *_activity;	// 32 = 0x20
    IDSService *_service;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000310ba
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(retain, nonatomic) NDTActivity *activity; // @synthesize activity=_activity;
- (_Bool)_shouldNotifyForDrift:(id)arg1 orDuplication:(id)arg2 forDiagnosticTimestamp:(double)arg3;	// IMP=0x0010000000030d22
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000030887
- (char *)activitySubsystem:(id)arg1;	// IMP=0x001000000003087a
- (void)activityRun:(id)arg1;	// IMP=0x0010000000030865
- (char *)activityIdentifier:(id)arg1;	// IMP=0x0010000000030858
- (id)_runOccurrenceCacheDumper;	// IMP=0x0010000000030850
- (id)_runDuplicateChecker;	// IMP=0x0010000000030848
- (void)_sendMessage:(id)arg1;	// IMP=0x001000000003062d
- (id)initWithSyncController:(id)arg1;	// IMP=0x0010000000030498

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
