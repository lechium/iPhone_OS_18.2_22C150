//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRDHostedExternalDeviceManager, MRDRemoteControlDiscoverySession, MRDeviceInfo, NSArray, NSDictionary, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MRDHostedRoutingController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;	// 16 = 0x10
    NSHashTable *_weakObservers;	// 24 = 0x18
    NSDictionary *_hostsByGroupID;	// 32 = 0x20
    NSArray *_availableEndpoints;	// 40 = 0x28
    NSDictionary *_availableOutputDevices;	// 48 = 0x30
    NSArray *_distantEndpoints;	// 56 = 0x38
    NSArray *_distantOutputDevices;	// 64 = 0x40
    MRAVEndpoint *_localEndpoint;	// 72 = 0x48
    id _discoverySessionOutputDevicesToken;	// 80 = 0x50
    id _discoverySessionEndpointsToken;	// 88 = 0x58
    MRDHostedExternalDeviceManager *_externalDeviceManager;	// 96 = 0x60
    MRDRemoteControlDiscoverySession *_discoverySession;	// 104 = 0x68
    NSMutableDictionary *_virtualOutputDeviceDictionary;	// 112 = 0x70
    MRDeviceInfo *_deviceInfo;	// 120 = 0x78
}

+ (void)initialize;	// IMP=0x00200000000fa380
- (void).cxx_destruct;	// IMP=0x00200000001002e7
@property(retain, nonatomic) MRDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) NSMutableDictionary *virtualOutputDeviceDictionary; // @synthesize virtualOutputDeviceDictionary=_virtualOutputDeviceDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) MRDRemoteControlDiscoverySession *discoverySession; // @synthesize discoverySession=_discoverySession;
- (_Bool)isOutputContextInUse:(id)arg1;	// IMP=0x00100000001000e6
- (id)filterOutputDevices:(id)arg1 remoteControllableOnly:(_Bool)arg2;	// IMP=0x00100000000ff96e
- (id)resolveOutputDevices:(id)arg1;	// IMP=0x00100000000ff645
- (id)computeHostsByGroupIDForOutputDevices:(id)arg1 unclusteredDevices:(id)arg2;	// IMP=0x00100000000feed5
- (void)hostedExternalDeviceManagerDidUpdateExternalDeviceMapping:(id)arg1;	// IMP=0x00100000000fedc3
- (void)_processDiscoveryObserverChanges;	// IMP=0x00100000000fe77c
- (void)_handleOutputContextManagerDidReset:(id)arg1;	// IMP=0x00100000000fe4eb
- (void)_handleEndpointOutputDevicesDidChangeNotification:(id)arg1;	// IMP=0x00100000000fe48a
- (void)_handleObserverDiscoveryModeDidChangeNotification:(id)arg1;	// IMP=0x00100000000fe478
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x00100000000fe39b
- (void)_onQueue_reloadWithOutputDevices:(id)arg1;	// IMP=0x00100000000fdbe8
- (id)_onQueue_determineGroupLeaderForOutputDevices:(id)arg1 availableOutputDevices:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00100000000fc9b3
- (void)_onQueue_reloadOutputDevices;	// IMP=0x00100000000fc8fe
- (void)removeVirtualOutputDevicesForClient:(id)arg1;	// IMP=0x00100000000fc7df
- (void)addVirtualOutputDevice:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000000fc5db
@property(readonly, nonatomic) NSArray *virtualOutputDevices;
- (id)determineGroupLeaderForOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000000fc25d
- (id)_onQueue_makeExternalDeviceForEndpoint:(id)arg1;	// IMP=0x00100000000fbe8d
- (id)_onQueue_makeHostedExternalDeviceForEndpoint:(id)arg1 didCreate:(_Bool *)arg2 factory:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fbcfb
- (id)_onQueue_makeLocalHostedExternalDeviceForEndpoint:(id)arg1 didCreate:(_Bool *)arg2;	// IMP=0x00100000000fbb99
- (id)_onQueue_makeHostedExternalDeviceForEndpoint:(id)arg1 didCreate:(_Bool *)arg2;	// IMP=0x00100000000fbac9
- (id)externalDeviceForEndpoint:(id)arg1;	// IMP=0x00100000000fb8b0
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000fb7f5
- (void)addObserver:(id)arg1;	// IMP=0x00100000000fb73a
@property(readonly, nonatomic) NSArray *availableOutputDevices;
@property(readonly, nonatomic) NSArray *availableDistantOutputDevices;
@property(readonly, nonatomic) NSDictionary *availableExternalDevices;
@property(readonly, nonatomic) NSArray *resolvedAvailableEndpoints;
@property(readonly, nonatomic) NSArray *availableDistantEndpoints;
@property(readonly, nonatomic) NSArray *availableEndpoints;
@property(readonly, nonatomic) unsigned int discoveryMode;
@property(readonly, nonatomic) _Bool devicePresenceDetected;
- (id)makeTransientExternalDeviceToOutputDevice:(id)arg1;	// IMP=0x00100000000faf5f
- (id)makeEndpointWithOutputDeviceUIDs:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000000fad40
- (id)makeEndpointWithOutputDevices:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000000facae
- (id)_onQueue_makeExternalDeviceTransportForEndpoint:(id)arg1 designatedGroupLeader:(id)arg2;	// IMP=0x00100000000fac0f
- (void)_onQueue_reloadEndpoints;	// IMP=0x00100000000fab86
- (id)createDiscoverySession;	// IMP=0x00100000000faafd
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (void)dealloc;	// IMP=0x00100000000fa9e1
- (id)init;	// IMP=0x00100000000fa9cd
- (id)initWithDiscoverySession:(id)arg1;	// IMP=0x00100000000fa40c

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

