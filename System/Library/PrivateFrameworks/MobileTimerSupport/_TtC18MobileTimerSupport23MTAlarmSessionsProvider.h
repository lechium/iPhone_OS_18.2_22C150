//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC18MobileTimerSupport23MTAlarmSessionsProvider
{
    MISSING_TYPE *serializerQueue;	// 8 = 0x8
    MISSING_TYPE *activities;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000016ba0
- (id)init;	// IMP=0x0000000000016b30
- (id)alertingSessionId;	// IMP=0x0000000000016910
- (long long)numberOfActiveSessions;	// IMP=0x00000000000166e0
- (id)activityIdForAlarmIdWithAlarmId:(id)arg1;	// IMP=0x00000000000162b0
- (void)restoreSessionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015f60
- (void)finishSessionWithAlarmId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015830
- (void)updateSessionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015020
- (void)createSessionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2 forAlert:(_Bool)arg3;	// IMP=0x0000000000014a20
- (id)activeAlarmSessions;	// IMP=0x0000000000013e60
- (_Bool)hasActiveAlarmSession;	// IMP=0x0000000000013c90

@end
