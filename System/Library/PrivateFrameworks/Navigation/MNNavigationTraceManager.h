//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNTraceNetworkEvent, MNTracePlayer, MNTraceRecorder, NSBundle, NSString;
@protocol GEOMotionContextProviderDelegate, MNLocationProviderDelegate, MNNavigationTraceManagerDelegate, MNVirtualGarageProviderDelegate;

__attribute__((visibility("hidden")))
@interface MNNavigationTraceManager : NSObject
{
    MNTracePlayer *_tracePlayer;	// 8 = 0x8
    MNTraceRecorder *_traceRecorder;	// 16 = 0x10
    _Bool _isSimulation;	// 24 = 0x18
    MNTraceNetworkEvent *_initialNetworkState;	// 32 = 0x20
    long long _navigationType;	// 40 = 0x28
    id <MNNavigationTraceManagerDelegate> _traceManagerDelegate;	// 48 = 0x30
    id <MNLocationProviderDelegate> _locationProviderDelegate;	// 56 = 0x38
    id <GEOMotionContextProviderDelegate> _motionContextProviderDelegate;	// 64 = 0x40
    id <MNVirtualGarageProviderDelegate> _virtualGarageProviderDelegate;	// 72 = 0x48
    NSString *_hardwareModel;	// 80 = 0x50
    _Bool _isStarted;	// 88 = 0x58
}

+ (void)_clearOldTracesInDirectory:(id)arg1 matchingExpression:(id)arg2 beforeDate:(id)arg3;	// IMP=0x001000000004c716
+ (void)clearOldTraces;	// IMP=0x001000000004c38f
- (void).cxx_destruct;	// IMP=0x000000000004c32d
@property(nonatomic) long long navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) MNTraceRecorder *traceRecorder; // @synthesize traceRecorder=_traceRecorder;
@property(readonly, nonatomic) MNTracePlayer *tracePlayer; // @synthesize tracePlayer=_tracePlayer;
@property(nonatomic) __weak id <MNNavigationTraceManagerDelegate> traceManagerDelegate; // @synthesize traceManagerDelegate=_traceManagerDelegate;
@property(readonly, nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(nonatomic) __weak id <MNVirtualGarageProviderDelegate> virtualGarageDelegate; // @synthesize virtualGarageDelegate=_virtualGarageProviderDelegate;
@property(nonatomic) __weak id <GEOMotionContextProviderDelegate> motionDelegate; // @synthesize motionDelegate=_motionContextProviderDelegate;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_locationProviderDelegate;
@property(readonly, nonatomic) _Bool assumesFullCharge;
@property(readonly, nonatomic) unsigned long long vehiclesCount;
- (void)updatedVehicleStateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004bfcc
- (void)stopVirtualGarageUpdates;	// IMP=0x000000000004bfc6
- (void)startVirtualGarageUpdates;	// IMP=0x000000000004bfc0
- (void)stopMotionUpdates;	// IMP=0x000000000004bfba
- (void)startMotionUpdates;	// IMP=0x000000000004bfb4
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) unsigned long long traceVersion;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) _Bool coarseModeEnabled;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) int headingOrientation;
@property(readonly, nonatomic) _Bool isAuthorized;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)stopMonitoringForRegion:(id)arg1;	// IMP=0x000000000004bf00
- (void)startMonitoringForRegion:(id)arg1;	// IMP=0x000000000004befa
- (void)resetForActiveTileGroupChanged;	// IMP=0x000000000004bef4
- (void)stopUpdatingVehicleHeading;	// IMP=0x000000000004beee
- (void)startUpdatingVehicleHeading;	// IMP=0x000000000004bee8
- (void)stopUpdatingVehicleSpeed;	// IMP=0x000000000004bee2
- (void)startUpdatingVehicleSpeed;	// IMP=0x000000000004bedc
- (void)stopUpdatingHeading;	// IMP=0x000000000004bed6
- (void)startUpdatingHeading;	// IMP=0x000000000004bed0
- (void)stopUpdatingLocation;	// IMP=0x000000000004beba
- (void)startUpdatingLocation;	// IMP=0x000000000004be4e
- (void)tracePlayer:(id)arg1 didRecieveNetworkEvent:(id)arg2;	// IMP=0x000000000004be32
- (void)tracePlayer:(id)arg1 didUpdateEVData:(id)arg2;	// IMP=0x000000000004bdd6
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x000000000004bd70
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x000000000004bd0a
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;	// IMP=0x000000000004bcb1
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;	// IMP=0x000000000004bc55
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;	// IMP=0x000000000004bc1f
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;	// IMP=0x000000000004bbe9
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;	// IMP=0x000000000004bb8d
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x000000000004bb31
- (void)tracePlayerDidStayOnRoute:(id)arg1;	// IMP=0x000000000004bb2b
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 waypoints:(id)arg4;	// IMP=0x000000000004bb25
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;	// IMP=0x000000000004ba94
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4;	// IMP=0x000000000004ba03
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;	// IMP=0x000000000004b9fd
- (void)tracePlayerDidResume:(id)arg1;	// IMP=0x000000000004b98b
- (void)tracePlayerDidPause:(id)arg1;	// IMP=0x000000000004b919
- (void)tracePlayerDidStop:(id)arg1;	// IMP=0x000000000004b913
- (void)tracePlayerDidStart:(id)arg1;	// IMP=0x000000000004b90d
- (void)_copyTraceToCrashReporterDirectory:(id)arg1;	// IMP=0x000000000004b5a4
- (void)_createSymlinkForTracePath:(id)arg1;	// IMP=0x000000000004b457
- (void)_recordStylesheet:(id)arg1;	// IMP=0x000000000004b1c5
- (void)_recordEnvironmentInfo:(id)arg1;	// IMP=0x000000000004afd6
- (id)hardwareModel;	// IMP=0x000000000004af99
- (id)_defaultTraceNameForDestination:(id)arg1 isSimulation:(_Bool)arg2;	// IMP=0x000000000004ae0d
- (unsigned long long)_startIndexForNavigation;	// IMP=0x000000000004ad93
- (_Bool)_isNavigating;	// IMP=0x000000000004ad7e
- (void)close;	// IMP=0x000000000004ab56
- (void)saveRoutePlanningTrace:(id)arg1;	// IMP=0x000000000004a6a4
- (void)openForSimulationWithRoute:(id)arg1 traceRecordingData:(id)arg2 traceNameOverride:(id)arg3;	// IMP=0x0000000000049db7
- (void)openForRecordingWithTraceRecordingData:(id)arg1 traceName:(id)arg2 selectedRouteIndex:(unsigned long long)arg3 isReconnecting:(_Bool)arg4 isSimulation:(_Bool)arg5;	// IMP=0x0000000000049724
- (void)openForPlaybackWithTracePath:(id)arg1;	// IMP=0x0000000000049348
- (void)dealloc;	// IMP=0x00000000000492e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
