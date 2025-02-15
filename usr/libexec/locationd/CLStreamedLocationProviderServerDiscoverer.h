//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, RPCompanionLinkClient;
@protocol OS_dispatch_queue;

@interface CLStreamedLocationProviderServerDiscoverer : NSObject
{
    RPCompanionLinkClient *_nearbyDeviceListener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQ;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_requestQ;	// 24 = 0x18
    NSMutableArray *_probeClients;	// 32 = 0x20
}

+ (_Bool)validateRemoteDeviceForStreaming:(id)arg1;	// IMP=0x004000000022374d
+ (_Bool)macOSSourceVersionNewEnough:(CDStruct_2ec95fd7)arg1;	// IMP=0x001000000022372c
+ (_Bool)iOSSourceVersionNewEnough:(CDStruct_2ec95fd7)arg1;	// IMP=0x001000000022370b
@property(nonatomic) NSMutableArray *probeClients; // @synthesize probeClients=_probeClients;
@property(nonatomic) NSObject<OS_dispatch_queue> *requestQ; // @synthesize requestQ=_requestQ;
@property(nonatomic) NSObject<OS_dispatch_queue> *workQ; // @synthesize workQ=_workQ;
@property(nonatomic) RPCompanionLinkClient *nearbyDeviceListener; // @synthesize nearbyDeviceListener=_nearbyDeviceListener;
- (void)findCandidateServersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000223d23
- (id)deviceWithEffectiveID:(id)arg1;	// IMP=0x00100000002234ef
- (void)invalidateAndReleaseProbeClients;	// IMP=0x00100000002233b5
- (void)invalidate;	// IMP=0x0010000000223371
- (void)dealloc;	// IMP=0x0010000000223333
- (id)initOnQueue:(id)arg1;	// IMP=0x0010000000222cfa

@end

