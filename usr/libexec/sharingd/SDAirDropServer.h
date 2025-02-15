//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUCoalescer, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimer, NSUUID, SDAirDropInformation, SDAirDropPublisher, SDStatusMonitor;
@protocol OS_dispatch_queue, OS_os_transaction, SDAirDropServerDelegate;

@interface SDAirDropServer : NSObject
{
    _Bool _screenOn;	// 8 = 0x8
    _Bool _contactsOnly;	// 9 = 0x9
    NSNumber *_portNumber;	// 16 = 0x10
    NSTimer *_awdlTimer;	// 24 = 0x18
    NSTimer *_bluetoothTimer;	// 32 = 0x20
    CUCoalescer *_coalescer;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    struct __SecIdentity *_identity;	// 56 = 0x38
    struct _CFHTTPServer *_server;	// 64 = 0x40
    double _startTime;	// 72 = 0x48
    SDStatusMonitor *_monitor;	// 80 = 0x50
    NSString *_discoverableMode;	// 88 = 0x58
    SDAirDropPublisher *_publisher;	// 96 = 0x60
    NSMutableSet *_discoveredHashes;	// 104 = 0x68
    NSMutableDictionary *_properties;	// 112 = 0x70
    SDAirDropInformation *_information;	// 120 = 0x78
    struct __CFDictionary *_connections;	// 128 = 0x80
    NSObject<OS_os_transaction> *_transaction;	// 136 = 0x88
    NSUUID *_scanningIdentifier;	// 144 = 0x90
    int _clientPid;	// 152 = 0x98
    NSString *_clientBundleID;	// 160 = 0xa0
    id <SDAirDropServerDelegate> _delegate;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00200000000b0f13
@property __weak id <SDAirDropServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property int clientPid; // @synthesize clientPid=_clientPid;
- (void)_createOSTransactionIfNeeded;	// IMP=0x00100000000b0e6b
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x00100000000b0b10
- (void)activate;	// IMP=0x00100000000b09e5
- (void)stop;	// IMP=0x00100000000b08b1
- (void)start;	// IMP=0x00100000000b0714
- (_Bool)thisIsTheFinder;	// IMP=0x00100000000b06f4
- (void)airDropInformation:(id)arg1 didChange:(id)arg2;	// IMP=0x00100000000b06dd
- (void)startServer;	// IMP=0x00100000000b0617
- (void)foundDevice:(id)arg1;	// IMP=0x00100000000b04ba
- (void)stopProximityScanner;	// IMP=0x00100000000b04b4
- (void)startProximityScanner;	// IMP=0x00100000000b04ae
- (void)startHTTPServer:(unsigned short)arg1;	// IMP=0x00100000000b0130
- (id)sslSettings;	// IMP=0x00100000000aff0a
- (void)bonjourPublisher:(id)arg1 propertiesDidChange:(id)arg2;	// IMP=0x00100000000afef5
- (void)notifyClient:(long long)arg1 withResults:(id)arg2;	// IMP=0x00100000000afe91
- (void)removeObservers;	// IMP=0x00100000000afe3e
- (void)addObservers;	// IMP=0x00100000000afc94
- (void)airDropUnpublished:(id)arg1;	// IMP=0x00100000000afb7b
- (void)updateServerState;	// IMP=0x00100000000af837
- (void)logDiscoveryWithHash:(id)arg1 rssi:(id)arg2;	// IMP=0x00100000000af703
- (void)handleFoundHashes:(id)arg1 rssi:(id)arg2;	// IMP=0x00100000000af563
- (void)stopScanningAndStartServer;	// IMP=0x00100000000af51b
- (_Bool)discoverableByContactsOnly;	// IMP=0x00100000000af4fb
- (_Bool)discoverableByEveryone;	// IMP=0x00100000000af4db
- (void)screenStateChange:(id)arg1;	// IMP=0x00100000000af3dd
- (void)keyBagFirstUnlock:(id)arg1;	// IMP=0x00100000000af361
- (void)discoverableModeChanged:(id)arg1;	// IMP=0x00100000000af272
- (void)finderAirDropEnabled:(id)arg1;	// IMP=0x00100000000af199
- (void)consoleUserChanged:(id)arg1;	// IMP=0x00100000000af036
- (void)systemHasPoweredOn:(id)arg1;	// IMP=0x00100000000aef27
- (void)systemWillSleep:(id)arg1;	// IMP=0x00100000000aee62
- (void)appleIDChanged:(id)arg1;	// IMP=0x00100000000aedda
- (void)appleIDAccountInfoChanged:(id)arg1;	// IMP=0x00100000000aed52
- (void)airDropStatusChanged:(id)arg1;	// IMP=0x00100000000aecb5
- (void)bluetoothChanged:(id)arg1;	// IMP=0x00100000000aeca1
- (void)wirelessChanged:(id)arg1;	// IMP=0x00100000000aec8d
- (void)bluetoothTimeoutFired:(id)arg1;	// IMP=0x00100000000aec7b
- (void)awdlTimeoutFired:(id)arg1;	// IMP=0x00100000000aebf4
- (void)publishedInfoChanged:(id)arg1;	// IMP=0x00100000000ae94f
- (void)didReceiveError:(struct __CFError *)arg1;	// IMP=0x00100000000ae7a2
- (void)didCloseConnection:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x00100000000ae663
- (void)didOpenConnection:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x00100000000ae4e3
- (void)invalidateTimers;	// IMP=0x00100000000ae47d
- (void)startTimers;	// IMP=0x00100000000ae3c6
- (void)handleTerminalCallBack;	// IMP=0x00100000000ae22c
- (void)dealloc;	// IMP=0x00100000000ae1e1
- (id)init;	// IMP=0x00100000000ae00d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

