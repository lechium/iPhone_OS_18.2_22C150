//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVExternalDevice, CARNavigationOwnershipManager, CARSessionStatus, CarMetadataConnectionManager, GCDTimer, MapsExternalDeviceState, NSArray, NSMapTable, NSString;

@interface MapsExternalDevice : NSObject
{
    struct __IOHIDEventSystemClient *_client;	// 8 = 0x8
    NSArray *_notificationObservers;	// 16 = 0x10
    CARSessionStatus *_carSessionStatus;	// 24 = 0x18
    GCDTimer *_screenOwnershipCheckTimer;	// 32 = 0x20
    unsigned long long _maxScreenOwnershipChecks;	// 40 = 0x28
    unsigned long long _screenOwnershipChecksRemaining;	// 48 = 0x30
    _Bool _initialising;	// 56 = 0x38
    _Bool _carPlayIsNavigating;	// 57 = 0x39
    _Bool _monitoringIOHID;	// 58 = 0x3a
    AVExternalDevice *_externalDevice;	// 64 = 0x40
    NSString *_externalDeviceDescription;	// 72 = 0x48
    MapsExternalDeviceState *_currentState;	// 80 = 0x50
    MapsExternalDeviceState *_lastPostedState;	// 88 = 0x58
    id _screenBorrowToken;	// 96 = 0x60
    CarMetadataConnectionManager *_metadataManager;	// 104 = 0x68
    NSMapTable *_navigationAccessories;	// 112 = 0x70
    CARNavigationOwnershipManager *_navigationOwnershipManager;	// 120 = 0x78
}

+ (id)_stringRepresentationOfDictionary:(id)arg1;	// IMP=0x002000000064e70c
+ (id)_localizedReasonForHandoffError:(long long)arg1;	// IMP=0x001000000064e5d6
+ (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x001000000064e5b0
+ (id)_destinationHandoffErrorWithReason:(long long)arg1;	// IMP=0x001000000064e442
+ (void)_presentActivityControllerForDestination:(id)arg1 searchResult:(id)arg2 dictionary:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000064dce5
+ (void)_presentActivityControllerForDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000064da8b
+ (id)sharedInstance;	// IMP=0x001000000064993e
+ (void)initialize;	// IMP=0x00100000006498da
- (void).cxx_destruct;	// IMP=0x002000000064eeb2
@property(retain, nonatomic) CARNavigationOwnershipManager *navigationOwnershipManager; // @synthesize navigationOwnershipManager=_navigationOwnershipManager;
@property(retain) NSMapTable *navigationAccessories; // @synthesize navigationAccessories=_navigationAccessories;
@property(retain, nonatomic) CarMetadataConnectionManager *metadataManager; // @synthesize metadataManager=_metadataManager;
@property _Bool monitoringIOHID; // @synthesize monitoringIOHID=_monitoringIOHID;
@property(retain) id screenBorrowToken; // @synthesize screenBorrowToken=_screenBorrowToken;
@property(retain) MapsExternalDeviceState *lastPostedState; // @synthesize lastPostedState=_lastPostedState;
- (id);	// IMP=0x001000000064edff
@property(retain, nonatomic) MapsExternalDeviceState *currentState; // @synthesize currentState=_currentState;
@property(readonly, copy, nonatomic) NSString *externalDeviceDescription; // @synthesize externalDeviceDescription=_externalDeviceDescription;
@property(readonly, nonatomic) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(nonatomic) _Bool carPlayIsNavigating; // @synthesize carPlayIsNavigating=_carPlayIsNavigating;
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x001000000064ed3a
- (void)forwardInvocation:(id)arg1;	// IMP=0x001000000064ec38
- (void)setRouteGuidanceBeingShownInApp:(_Bool)arg1;	// IMP=0x001000000064ec32
- (void)stopMonitoringIOHIDRepeatCurrentGuidance;	// IMP=0x001000000064ebc9
- (void)startMonitoringIOHIDRepeatCurrentGuidance;	// IMP=0x001000000064ea68
- (void)_handleIOHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000064e8eb
- (void)handoffDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000064cdaf
- (_Bool)_destinationHandoffTestingEnabled;	// IMP=0x001000000064cd19
- (_Bool)destinationHandoffEnabled;	// IMP=0x001000000064cbd9
- (void)navigationOwnershipChangedToOwner:(unsigned long long)arg1;	// IMP=0x001000000064ca8d
@property(readonly, nonatomic) _Bool externalAccessoryIsNavigating;
- (void)_postNotificationIfNeeded;	// IMP=0x001000000064c3f1
- (_Bool)_isCurrentStateEqualLastPostedState;	// IMP=0x001000000064c36f
- (_Bool)_checkScreenOwnershipIfNeeded:(id)arg1;	// IMP=0x001000000064bfdc
- (void)_updateStateForRecievedNotification:(id)arg1;	// IMP=0x001000000064be9e
- (void)setExternalDevice:(id)arg1;	// IMP=0x001000000064b516
- (void)checkForActiveCarPlayConnection;	// IMP=0x001000000064afed
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (void)relinquishScreenIfNeeded;	// IMP=0x001000000064af6f
- (void)borrowScreenIfNeededForReason:(id)arg1;	// IMP=0x001000000064ae6a
- (void)_unregisterForAVNotifications;	// IMP=0x001000000064ac7e
- (void)_registerForAVNotifications;	// IMP=0x0010000000649fe0
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x0010000000649e4a
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0010000000649c5e
- (_Bool)_isCarPlaySessionActive;	// IMP=0x0010000000649c27
- (void)dealloc;	// IMP=0x0010000000649bb2
- (id)init;	// IMP=0x0010000000649993

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

