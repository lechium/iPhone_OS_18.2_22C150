//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEONavdServer, MNNavigationServer, NAVDaemonServer, NavdRecentLocationsServer, RTRoutineManager;
@protocol OS_dispatch_source;

@interface NavdController : NSObject
{
    GEONavdServer *_navigationServer;	// 8 = 0x8
    NAVDaemonServer *_predictionsTTLServer;	// 16 = 0x10
    MNNavigationServer *_navServer;	// 24 = 0x18
    NavdRecentLocationsServer *_recentLocationsServer;	// 32 = 0x20
    RTRoutineManager *_routineManager;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_systemMemoryPressureWarningSource;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_systemMemoryPressureCriticalSource;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_processMemoryPressureCriticalSource;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_processMemoryPressureWarningSource;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000002ea65
- (void)_startListeningToMemoryPressureEvents;	// IMP=0x001000000002e6f7
- (void)dealloc;	// IMP=0x001000000002e6a2
- (void)start;	// IMP=0x001000000002e674
- (void)protectedDataDidBecomeAvailable:(id)arg1;	// IMP=0x001000000002e66e
- (void)_migrate;	// IMP=0x001000000002e47a
- (void)_clearNavTracesDirectory;	// IMP=0x001000000002e290
- (void)_stopMonitoringSignificantLocationChanges;	// IMP=0x001000000002e1e5
- (void)_turnOffCoreRoutineMonitoringOn3DTouchDevices;	// IMP=0x001000000002e144
- (void)_main;	// IMP=0x001000000002df26

@end
