//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSObject, NSSet, NSString, SFPeerDevice, UASimulatorAdvertisementCreator, UASimulatorAdvertiser, UASimulatorController, UASimulatorReceiver;
@protocol OS_dispatch_queue;

@interface UASimulator
{
    unsigned int _pairedClientPort;	// 8 = 0x8
    int _notifyToken;	// 12 = 0xc
    NSMutableSet *_notifiedItems;	// 16 = 0x10
    _Bool _activitiesShouldCrossover;	// 24 = 0x18
    unsigned int _commandPort;	// 28 = 0x1c
    UASimulatorController *_controller;	// 32 = 0x20
    SFPeerDevice *_ourDevice;	// 40 = 0x28
    SFPeerDevice *_peeredDevice;	// 48 = 0x30
    UASimulatorAdvertiser *_advertiser;	// 56 = 0x38
    UASimulatorReceiver *_receiver;	// 64 = 0x40
    UASimulatorAdvertisementCreator *_creator;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_dispatchQ;	// 80 = 0x50
    NSString *_bootstrapName;	// 88 = 0x58
}

+ (id)simulatorWithController:(id)arg1 parentSimulatorPortName:(id)arg2;	// IMP=0x0020000000094f65
+ (id)simulatorWithController:(id)arg1 pairedPort:(unsigned int)arg2 childSimPid:(int)arg3 childVersion:(unsigned long long)arg4;	// IMP=0x0010000000094f5d
- (void).cxx_destruct;	// IMP=0x00200000000967b7
@property(readonly, copy) NSString *bootstrapName; // @synthesize bootstrapName=_bootstrapName;
@property(readonly, retain) NSObject<OS_dispatch_queue> *dispatchQ; // @synthesize dispatchQ=_dispatchQ;
@property(readonly) unsigned int commandPort; // @synthesize commandPort=_commandPort;
@property(readonly) _Bool activitiesShouldCrossover; // @synthesize activitiesShouldCrossover=_activitiesShouldCrossover;
@property(readonly, retain) UASimulatorAdvertisementCreator *creator; // @synthesize creator=_creator;
@property(readonly, retain) UASimulatorReceiver *receiver; // @synthesize receiver=_receiver;
@property(readonly, retain) UASimulatorAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property(retain) SFPeerDevice *peeredDevice; // @synthesize peeredDevice=_peeredDevice;
@property(retain) SFPeerDevice *ourDevice; // @synthesize ourDevice=_ourDevice;
@property(readonly, retain) UASimulatorController *controller; // @synthesize controller=_controller;
- (id)statusString;	// IMP=0x0010000000096611
- (_Bool)terminate;	// IMP=0x0010000000096332
- (_Bool)suspend;	// IMP=0x0010000000096245
- (_Bool)resume;	// IMP=0x0010000000096158
- (void)setSimulatorInFront:(_Bool)arg1;	// IMP=0x0010000000095fb6
- (_Bool)active;	// IMP=0x0010000000095f83
@property(copy) NSSet *notifiedItems;
@property(readonly) unsigned int pairedClientPort; // @dynamic pairedClientPort;
- (_Bool)reconnectToParentSimulator;	// IMP=0x00100000000952ef
- (void)dealloc;	// IMP=0x001000000009523d
- (id)initWithController:(id)arg1;	// IMP=0x0010000000094842

@end

