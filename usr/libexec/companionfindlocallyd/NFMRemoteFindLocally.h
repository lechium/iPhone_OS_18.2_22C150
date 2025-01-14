//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoLeash/NFMIDSServiceDelegate.h>

@class IDSService, NFMPingMyWatchCoordinator, NFMPlayCommands, NSMutableDictionary, NSObject, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface NFMRemoteFindLocally : NFMIDSServiceDelegate
{
    IDSService *_gizmoService;	// 8 = 0x8
    NSXPCListener *_localListener;	// 16 = 0x10
    NSMutableDictionary *_localConnections;	// 24 = 0x18
    NFMPlayCommands *_playCommands;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialQueue;	// 40 = 0x28
    NFMPingMyWatchCoordinator *_pingMyWatchCoordinator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000003ebf
@property(retain, nonatomic) NFMPingMyWatchCoordinator *pingMyWatchCoordinator; // @synthesize pingMyWatchCoordinator=_pingMyWatchCoordinator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NFMPlayCommands *playCommands; // @synthesize playCommands=_playCommands;
@property(retain, nonatomic) NSMutableDictionary *localConnections; // @synthesize localConnections=_localConnections;
@property(retain, nonatomic) NSXPCListener *localListener; // @synthesize localListener=_localListener;
@property(retain, nonatomic) IDSService *gizmoService; // @synthesize gizmoService=_gizmoService;
- (void)pingMyWatchCapabilityDidChange;	// IMP=0x0010000000003d2e
- (unsigned short)_behaviorModeOverride;	// IMP=0x0010000000003cc9
- (void)_tellPhoneToPlaySoundWithBehavior:(unsigned short)arg1;	// IMP=0x0010000000003a5a
- (void)playSoundAndFlashRemotely;	// IMP=0x00100000000039a1
- (void)playSoundRemotely;	// IMP=0x00100000000038d9
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000002d9c
- (void)didPlaySoundAndFlashLED:(id)arg1;	// IMP=0x0010000000002b80
- (void)didPlaySound:(id)arg1;	// IMP=0x0010000000002964
- (void)playSound:(id)arg1;	// IMP=0x0010000000002300
- (void)playSoundAndFlash:(id)arg1;	// IMP=0x0010000000001ed7
- (id)init;	// IMP=0x0010000000001b9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

