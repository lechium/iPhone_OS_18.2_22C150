//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVRoutingDiscoverySessionConfiguration, MRDHostedRoutingController, MRDMediaRemoteClient, MROSTransaction, MRXPCConnectionMonitor, NSArray, NSDate, NSString, NSXPCConnection, RBSProcessMonitor;
@protocol MRDAVHostedDiscoverySessionDelegate, OS_dispatch_queue;

@interface MRDAVHostedDiscoverySession : NSObject
{
    MRAVRoutingDiscoverySessionConfiguration *_configuration;	// 8 = 0x8
    _Bool _endpointsDelayed;	// 16 = 0x10
    _Bool _devicesDelayed;	// 17 = 0x11
    _Bool _processSuspended;	// 18 = 0x12
    unsigned int _desiredDiscoveryMode;	// 20 = 0x14
    unsigned int _effectiveDiscoveryMode;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    MRDHostedRoutingController *_hostedRoutingController;	// 40 = 0x28
    id <MRDAVHostedDiscoverySessionDelegate> _delegate;	// 48 = 0x30
    MROSTransaction *_transaction;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_serialQueue;	// 64 = 0x40
    NSArray *_updatedEndpoints;	// 72 = 0x48
    NSArray *_updatedOutputDevices;	// 80 = 0x50
    NSArray *_pendingEndpoints;	// 88 = 0x58
    NSArray *_pendingOutputDevices;	// 96 = 0x60
    MRXPCConnectionMonitor *_connectionMonitor;	// 104 = 0x68
    NSString *_bundleIdentifier;	// 112 = 0x70
    MRDMediaRemoteClient *_xpcClient;	// 120 = 0x78
    NSString *_clientIdentifier;	// 128 = 0x80
    NSDate *_lastDesiredDiscoveryModeEnableDate;	// 136 = 0x88
    NSDate *_lastDesiredDiscoveryModeDisableDate;	// 144 = 0x90
    NSDate *_lastEffectiveDiscoveryModeEnableDate;	// 152 = 0x98
    NSDate *_lastEffectiveDiscoveryModeDisableDate;	// 160 = 0xa0
    RBSProcessMonitor *_stateMonitor;	// 168 = 0xa8
}

+ (id)calloutQueue;	// IMP=0x002000000006ae6c
- (void).cxx_destruct;	// IMP=0x002000000006cd81
@property(retain, nonatomic) RBSProcessMonitor *stateMonitor; // @synthesize stateMonitor=_stateMonitor;
@property(nonatomic) _Bool processSuspended; // @synthesize processSuspended=_processSuspended;
@property(retain, nonatomic) NSDate *lastEffectiveDiscoveryModeDisableDate; // @synthesize lastEffectiveDiscoveryModeDisableDate=_lastEffectiveDiscoveryModeDisableDate;
@property(retain, nonatomic) NSDate *lastEffectiveDiscoveryModeEnableDate; // @synthesize lastEffectiveDiscoveryModeEnableDate=_lastEffectiveDiscoveryModeEnableDate;
@property(nonatomic) unsigned int effectiveDiscoveryMode; // @synthesize effectiveDiscoveryMode=_effectiveDiscoveryMode;
@property(retain, nonatomic) NSDate *lastDesiredDiscoveryModeDisableDate; // @synthesize lastDesiredDiscoveryModeDisableDate=_lastDesiredDiscoveryModeDisableDate;
@property(retain, nonatomic) NSDate *lastDesiredDiscoveryModeEnableDate; // @synthesize lastDesiredDiscoveryModeEnableDate=_lastDesiredDiscoveryModeEnableDate;
@property(nonatomic) unsigned int desiredDiscoveryMode; // @synthesize desiredDiscoveryMode=_desiredDiscoveryMode;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) MRDMediaRemoteClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) MRXPCConnectionMonitor *connectionMonitor; // @synthesize connectionMonitor=_connectionMonitor;
@property(nonatomic) _Bool devicesDelayed; // @synthesize devicesDelayed=_devicesDelayed;
@property(nonatomic) _Bool endpointsDelayed; // @synthesize endpointsDelayed=_endpointsDelayed;
@property(retain, nonatomic) NSArray *pendingOutputDevices; // @synthesize pendingOutputDevices=_pendingOutputDevices;
@property(retain, nonatomic) NSArray *pendingEndpoints; // @synthesize pendingEndpoints=_pendingEndpoints;
@property(retain, nonatomic) NSArray *updatedOutputDevices; // @synthesize updatedOutputDevices=_updatedOutputDevices;
@property(retain, nonatomic) NSArray *updatedEndpoints; // @synthesize updatedEndpoints=_updatedEndpoints;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) MROSTransaction *transaction; // @synthesize transaction=_transaction;
@property(nonatomic) __weak id <MRDAVHostedDiscoverySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRDHostedRoutingController *hostedRoutingController; // @synthesize hostedRoutingController=_hostedRoutingController;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_reevaluateEffectiveDiscoveryMode;	// IMP=0x001000000006cb0c
- (unsigned int)_calculateEffectiveDiscoveryMode;	// IMP=0x001000000006cae8
- (void)_maybeWakeClient;	// IMP=0x001000000006c9c9
- (void)_resumeConnection;	// IMP=0x001000000006c63b
- (void)_notifyAvailableEndpointsDidChange:(id)arg1;	// IMP=0x001000000006c34c
- (void)_notifyAvailableOutputDevicesDidChange:(id)arg1;	// IMP=0x001000000006c05d
- (void)_invalidate;	// IMP=0x001000000006bf5e
- (void)connectionDidResume:(id)arg1;	// IMP=0x001000000006bf4c
- (void)getAvailableOutputDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006bee9
- (void)getAvailableEndpointsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006be86
- (void)setDiscoveryMode:(unsigned int)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006bdf3
- (void)getDiscoveryModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006bd12
- (void)getDevicePresenceDetectedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006bcc5
- (void)hostedRoutingController:(id)arg1 outputDevicesDidChange:(id)arg2 forFeature:(unsigned int)arg3;	// IMP=0x001000000006bcb0
- (void)hostedRoutingController:(id)arg1 endpointsDidChange:(id)arg2;	// IMP=0x001000000006bc9b
@property(copy, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration;
- (void)configurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006b56b
@property(nonatomic) unsigned int discoveryMode;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000006aa9a
- (id)initWithConnection:(id)arg1 hostedRoutingController:(id)arg2;	// IMP=0x001000000006a637

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

