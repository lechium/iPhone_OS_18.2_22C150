//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDNotificationCenter, MSPSharedTripBlocklist, MSPSharedTripRelay, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString, NSTimer;
@protocol MSPReceiverETAControllerDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPReceiverETAController : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSMutableDictionary *_sharedSessions;	// 16 = 0x10
    NSMutableDictionary *_sharedNavStates;	// 24 = 0x18
    NSMutableDictionary *_waitingNavStates;	// 32 = 0x20
    NSMutableOrderedSet *_orderedNavStateIdentifiers;	// 40 = 0x28
    MDNotificationCenter *_mapsNotificationCenter;	// 48 = 0x30
    MSPSharedTripRelay *_idsRelay;	// 56 = 0x38
    MSPSharedTripBlocklist *_blockedList;	// 64 = 0x40
    NSTimer *_cleanupTimer;	// 72 = 0x48
    id <MSPReceiverETAControllerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000d91a
@property(nonatomic) __weak id <MSPReceiverETAControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)groupSessionEnded:(id)arg1;	// IMP=0x000000000000d785
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;	// IMP=0x000000000000d77f
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;	// IMP=0x000000000000d779
- (void)storageController:(id)arg1 updatedSharedTripGroupStorage:(id)arg2;	// IMP=0x000000000000d395
- (void)relay:(id)arg1 sharingClosed:(id)arg2;	// IMP=0x000000000000d1b7
- (void)relay:(id)arg1 receiveData:(id)arg2 info:(id)arg3 fromID:(id)arg4;	// IMP=0x000000000000ceff
- (void)_cleanGroup:(id)arg1;	// IMP=0x000000000000cc6a
- (_Bool)_cleanUpNecessaryForGroup:(id)arg1;	// IMP=0x000000000000c791
- (void)_cleanupIfNecessary;	// IMP=0x000000000000c615
- (void)_updateDelegateWithUpdateState:(id)arg1 to:(id)arg2 freshAvailable:(_Bool)arg3;	// IMP=0x000000000000c234
- (void)_updateData:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;	// IMP=0x000000000000b992
- (_Bool)_allowMessageWithState:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;	// IMP=0x000000000000b430
- (void)updateContacts;	// IMP=0x000000000000aff2
- (void)_resolveContactIfNeeded:(id)arg1 fromId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a948
- (void)_showOrUpdateNotificationIfNeeded:(id)arg1;	// IMP=0x000000000000a399
- (void)purgeExpiredBlockedTripIdentifiers;	// IMP=0x000000000000a322
- (void)clearBlockedTripIdentifiers;	// IMP=0x000000000000a2ab
- (void)blockSharedTrip:(id)arg1;	// IMP=0x0000000000009f96
- (_Bool)unsubscribeFromUpdatesToSharedTrip:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009db2
- (_Bool)subscribeToUpdatesToSharedTrip:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000009a74
@property(readonly, nonatomic) NSArray *allTrips;
- (void)cleanTimer;	// IMP=0x0000000000009818
- (void)_setNotificationCenter:(id)arg1;	// IMP=0x0000000000009807
- (void)dealloc;	// IMP=0x000000000000973d
- (id)initWithRelay:(id)arg1;	// IMP=0x000000000000955c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

