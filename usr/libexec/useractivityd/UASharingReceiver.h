//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSSet, NSString, NSTimer, SFPeerDevice, UADispatchScheduler;

@interface UASharingReceiver
{
    NSMutableSet *_sfActivityScanners;	// 8 = 0x8
    NSMutableSet *_receivedItems;	// 16 = 0x10
    NSMutableSet *_activeDevices;	// 24 = 0x18
    NSString *_lastAutoPullActivitiesRequesterId;	// 32 = 0x20
    NSMutableSet *_recentlyLostDeviceIDs;	// 40 = 0x28
    _Bool _forceScanning;	// 48 = 0x30
    UADispatchScheduler *_periodicCleanup;	// 56 = 0x38
    SFPeerDevice *_lastSeenPasteboardDevice;	// 64 = 0x40
    long long _lastSeenPasteboardVersionBit;	// 72 = 0x48
    NSTimer *_remotePboardTimer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000637bf
@property(retain) NSTimer *remotePboardTimer; // @synthesize remotePboardTimer=_remotePboardTimer;
@property long long lastSeenPasteboardVersionBit; // @synthesize lastSeenPasteboardVersionBit=_lastSeenPasteboardVersionBit;
@property(retain) SFPeerDevice *lastSeenPasteboardDevice; // @synthesize lastSeenPasteboardDevice=_lastSeenPasteboardDevice;
@property(readonly, retain) UADispatchScheduler *periodicCleanup; // @synthesize periodicCleanup=_periodicCleanup;
@property _Bool forceScanning; // @synthesize forceScanning=_forceScanning;
- (void)clearRemotePasteboardAvailable:(id)arg1;	// IMP=0x0010000000063621
- (_Bool)terminate;	// IMP=0x001000000006359f
- (id)statusString;	// IMP=0x00000000000629b9
- (void)addNewItemsFromPayloads:(id)arg1 device:(id)arg2 scanner:(id)arg3 force:(_Bool)arg4;	// IMP=0x00100000000620dd
- (void)fetchMoreAppSuggestionsFromDevice:(id)arg1;	// IMP=0x0010000000061df9
- (_Bool)fetchMoreAppSuggestions;	// IMP=0x0010000000061882
- (void)receiveAdvertisement:(id)arg1 scanner:(id)arg2;	// IMP=0x001000000005db9c
- (void)activityScanner:(id)arg1 receivedAdvertisement:(id)arg2;	// IMP=0x001000000005d9f3
- (id)sharingBTLESuggestedItemForAdvertisementPayload:(id)arg1 forDevice:(id)arg2;	// IMP=0x001000000005d71c
- (void)periodicCleanupFunc;	// IMP=0x001000000005d283
- (void)removeAllFromDevice:(id)arg1;	// IMP=0x001000000005c9ea
- (_Bool)removeItem:(id)arg1;	// IMP=0x001000000005c917
- (_Bool)addItem:(id)arg1 scheduleUpdates:(_Bool)arg2;	// IMP=0x001000000005c5a4
- (_Bool)_addItem:(id)arg1 scheduleUpdates:(_Bool)arg2;	// IMP=0x001000000005bd40
- (void)lostDeviceWithUUID:(id)arg1;	// IMP=0x001000000005bb57
- (void)lostDevice:(id)arg1;	// IMP=0x001000000005b72f
- (void)activityScanner:(id)arg1 lostDeviceWithDevice:(id)arg2;	// IMP=0x001000000005b2d7
- (void)foundDevice:(id)arg1;	// IMP=0x001000000005b005
- (void)activityScanner:(id)arg1 foundDeviceWithDevice:(id)arg2;	// IMP=0x001000000005ae4e
- (_Bool)resume;	// IMP=0x001000000005abf2
- (_Bool)suspend;	// IMP=0x001000000005a9db
- (id)sfActivityScanner;	// IMP=0x001000000005a87b
- (_Bool)removeSFActivityScanner:(id)arg1;	// IMP=0x001000000005a748
- (_Bool)addSFActivityScanner:(id)arg1;	// IMP=0x001000000005a568
@property(readonly, copy) NSSet *sfActivityScanners;
- (_Bool)active;	// IMP=0x001000000005a48d
@property(readonly, retain) NSSet *activeDevices;
- (id)receivedItems;	// IMP=0x001000000005a3bf
- (void)setScanningForTypes:(id)arg1;	// IMP=0x0010000000059d9c
- (_Bool)receiving;	// IMP=0x0010000000059d39
- (id)initWithManager:(id)arg1;	// IMP=0x0010000000059b48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
