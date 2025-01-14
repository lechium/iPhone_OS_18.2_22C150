//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NRDevice, NSHashTable, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface PCSDevice : NSObject
{
    _Bool _isActivePairedDevice;	// 8 = 0x8
    _Bool _isConnected;	// 9 = 0x9
    _Bool _isTombstone;	// 10 = 0xa
    _Bool _syncingIsRestricted;	// 11 = 0xb
    NRDevice *_nrDevice;	// 16 = 0x10
    NSString *_idsDeviceIdentifier;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_internalQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000010af3
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly) NSHashTable *observers; // @synthesize observers=_observers;
@property _Bool syncingIsRestricted; // @synthesize syncingIsRestricted=_syncingIsRestricted;
@property _Bool isTombstone; // @synthesize isTombstone=_isTombstone;
@property _Bool isConnected; // @synthesize isConnected=_isConnected;
@property _Bool isActivePairedDevice; // @synthesize isActivePairedDevice=_isActivePairedDevice;
@property(readonly) NSString *idsDeviceIdentifier; // @synthesize idsDeviceIdentifier=_idsDeviceIdentifier;
@property(readonly) NRDevice *nrDevice; // @synthesize nrDevice=_nrDevice;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000010999
- (unsigned long long)hash;	// IMP=0x0010000000010955
@property(readonly) NSString *UUID;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *osVersion;
@property(readonly) NSString *buildVersion;
@property(readonly) NSString *watchSize;
@property(readonly) NSString *model;
// Error: Property attributes should begin with the type ('T') attribute, property name: isReachable
// Property attributes: (null)

- (_Bool)_onQueue_isReachable;	// IMP=0x0010000000010524
@property(readonly) _Bool supportsNewProtocol;
@property(readonly) _Bool supportsPCSKeySync;
@property(readonly) NSUUID *pairingID;
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000010335
- (void)addObserver:(id)arg1;	// IMP=0x001000000001022b
- (id)initForSimulatorWithNRDevice:(id)arg1;	// IMP=0x00100000000100cc
- (id)init;	// IMP=0x0010000000010045

@end

