//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBAdvertiser, CUBLEServer, CUBluetoothScalablePipe, CUBonjourAdvertiser, CUBonjourBrowser, CUHomeKitManager, CUNetLinkManager, CUSleepWakeMonitor, CUSystemMonitor, CUTCPServer, CUUserNotificationSession, CUWiFiManager, MISSING_TYPE, NSData, NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSUserDefaults, NSXPCInterface, NSXPCListener, RBSProcessMonitor, RPAppleTVDeviceInfoManager, RPCompanionLinkDevice, RPConnection, RPHIDDaemon, RPHomeKitManager, RPMediaControlDaemon, RPNearFieldDaemon, RPNearbyActionV2Advertiser, RPNearbyActionV2Discovery, RPNearbyInfoV2Discovery, RPSiriDaemon, SFClient, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface RPCompanionLinkDaemon : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableDictionary *_activeDevices;	// 16 = 0x10
    int _airplayBuddyNotReachableState;	// 24 = 0x18
    int _airplayLeaderState;	// 28 = 0x1c
    NSUserDefaults *_airplayPrefs;	// 32 = 0x20
    NSMutableDictionary *_authenticatedAWDLPairingModeDevices;	// 40 = 0x28
    NSMutableDictionary *_bleDevices;	// 48 = 0x30
    NSMutableDictionary *_nearbyInfoV2Devices;	// 56 = 0x38
    SFDeviceDiscovery *_bleActionDiscovery;	// 64 = 0x40
    unsigned int _bleActionDiscoveryID;	// 72 = 0x48
    NSMutableDictionary *_bleClientConnections;	// 80 = 0x50
    SFDeviceDiscovery *_bleDiscovery;	// 88 = 0x58
    unsigned long long _bleDiscoveryControlFlags;	// 96 = 0x60
    _Bool _bleDiscoveryForce;	// 104 = 0x68
    unsigned int _bleDiscoveryID;	// 108 = 0x6c
    _Bool _bleDiscoveryScreenOff;	// 112 = 0x70
    long long _bleDiscoveryScreenOffRescanInterval;	// 120 = 0x78
    unsigned int _bleDiscoveryScreenOffScanRate;	// 128 = 0x80
    RPNearbyActionV2Advertiser *_bleNearbyActionV2Advertiser;	// 136 = 0x88
    NSString *_bleNearbyActionV2AdvertiserProcessName;	// 144 = 0x90
    RPNearbyActionV2Discovery *_bleNearbyActionV2Discovery;	// 152 = 0x98
    RPCompanionLinkDevice *_bleNearbyActionV2Device;	// 160 = 0xa0
    RPNearbyInfoV2Discovery *_bleNearbyInfoV2Discovery;	// 168 = 0xa8
    SFService *_bleNeedsCLinkAdvertiser;	// 176 = 0xb0
    NSString *_bleNeedsCLinkAdvertiserProcessName;	// 184 = 0xb8
    RPCompanionLinkDevice *_bleNeedsCLinkDevice;	// 192 = 0xc0
    NSMutableDictionary *_bleNeedsCLinkDevices;	// 200 = 0xc8
    SFDeviceDiscovery *_bleNeedsCLinkScanner;	// 208 = 0xd0
    unsigned int _bleNeedsCLinkScannerID;	// 216 = 0xd8
    _Bool _bleNeedsCLinkAdvertiserScreenOff;	// 220 = 0xdc
    _Bool _bleProximityDetection;	// 221 = 0xdd
    long long _bleRSSIThreshold;	// 224 = 0xe0
    CUBLEServer *_bleServer;	// 232 = 0xe8
    NSMutableSet *_bleServerConnections;	// 240 = 0xf0
    CUBonjourAdvertiser *_bonjourAdvertiser;	// 248 = 0xf8
    MISSING_TYPE *_bonjourAWDLAdvertiseForPairing;	// 256 = 0x100
    CUBonjourAdvertiser *_bonjourAWDLAdvertiser;	// 264 = 0x108
    _Bool _bonjourAWDLAdvertiserForce;	// 272 = 0x110
    NSMutableDictionary *_bonjourAWDLDevices;	// 280 = 0x118
    CUBonjourBrowser *_bonjourBrowser;	// 288 = 0x120
    CUBonjourBrowser *_bonjourBrowserAWDL;	// 296 = 0x128
    _Bool _bonjourBrowserAWDLForce;	// 304 = 0x130
    NSString *_bonjourBrowserAWDLProcess;	// 312 = 0x138
    unsigned long long _bonjourReevaluateNextTicks;	// 320 = 0x140
    NSObject<OS_dispatch_source> *_bonjourReevaluateTimer;	// 328 = 0x148
    NSData *_btAdvAddrData;	// 336 = 0x150
    NSString *_btAdvAddrStr;	// 344 = 0x158
    CUSystemMonitor *_btAdvAddrMonitor;	// 352 = 0x160
    _Bool _prefBTPipeEnabled;	// 360 = 0x168
    CUBluetoothScalablePipe *_btPipe;	// 368 = 0x170
    RPConnection *_btPipeConnection;	// 376 = 0x178
    CUBluetoothScalablePipe *_btPipeHighPriority;	// 384 = 0x180
    long long _clientWiFiAssertionsCount;	// 392 = 0x188
    unsigned int _cnxIDLast;	// 400 = 0x190
    int _coreDeviceChangedNotifier;	// 404 = 0x194
    NSString *_deviceAuthTagStr;	// 408 = 0x198
    NSData *_deviceAWDLRandomID;	// 416 = 0x1a0
    _Bool _enableAWDLGuestDiscovery;	// 424 = 0x1a8
    NSSet *_screenOffDeviceFilter;	// 432 = 0x1b0
    _Bool _discoverPairedDevices;	// 440 = 0x1b8
    NSData *_discoveryNonceData;	// 448 = 0x1c0
    SFClient *_duetSyncClient;	// 456 = 0x1c8
    _Bool _disabled;	// 464 = 0x1d0
    _Bool _inDiscoverySession;	// 465 = 0x1d1
    NSMutableDictionary *_interestEvents;	// 472 = 0x1d8
    NSMutableDictionary *_interestPeers;	// 480 = 0x1e0
    _Bool _invalidateCalled;	// 488 = 0x1e8
    _Bool _invalidateDone;	// 489 = 0x1e9
    _Bool _fixedSoundBoardNameIssue;	// 490 = 0x1ea
    NSMutableDictionary *_homeHubDevices;	// 496 = 0x1f0
    NSData *_homeKitAuthTag;	// 504 = 0x1f8
    _Bool _homeKitForceGetIdentity;	// 512 = 0x200
    _Bool _homeKitGettingIdentity;	// 513 = 0x201
    NSData *_homeKitIRK;	// 520 = 0x208
    NSData *_homeKitLTPK;	// 528 = 0x210
    CUHomeKitManager *_homeKitManager;	// 536 = 0x218
    NSData *_homeKitRotatingID;	// 544 = 0x220
    _Bool _homeKitWaiting;	// 552 = 0x228
    int _lastSentActivityLevelOverWiFi;	// 556 = 0x22c
    NSMutableDictionary *_loopbackRequests;	// 560 = 0x230
    unsigned int _loopbackXid;	// 568 = 0x238
    CUNetLinkManager *_netLinkManager;	// 576 = 0x240
    _Bool _mediaAccessControlKVO;	// 584 = 0x248
    _Bool _mediaRemoteIDGetting;	// 585 = 0x249
    _Bool _mediaRouteIDGetting;	// 586 = 0x24a
    _Bool _miscStarted;	// 587 = 0x24b
    _Bool _needsActiveUserAltDSIDUpdate;	// 588 = 0x24c
    NSMutableSet *_needsAWDLNewPeers;	// 592 = 0x250
    NSMutableSet *_needsAWDLRequestIdentifiers;	// 600 = 0x258
    NSMutableSet *_needsAWDLSentToPeers;	// 608 = 0x260
    NSObject<OS_dispatch_source> *_needsAWDLRequestTimer;	// 616 = 0x268
    _Bool _needsAWDLTransaction;	// 624 = 0x270
    _Bool _needsPrimaryAppleIDUpdate;	// 625 = 0x271
    NSObject<OS_os_transaction> *_osTransaction;	// 632 = 0x278
    NSMutableDictionary *_pairedDevices;	// 640 = 0x280
    NSObject<OS_dispatch_source> *_pendingLostBLEDevicesTimer;	// 648 = 0x288
    NSObject<OS_dispatch_source> *_pendingLostNeedsCLinkDevicesTimer;	// 656 = 0x290
    RPConnection *_personalCnx;	// 664 = 0x298
    RBSProcessMonitor *_rbsProcessMonitor;	// 672 = 0x2a0
    _Bool _receiveHomeKitPairingUpdated;	// 680 = 0x2a8
    NSMutableDictionary *_registeredEvents;	// 688 = 0x2b0
    NSMutableSet *_registeredProfileIDs;	// 696 = 0x2b8
    NSMutableDictionary *_registeredRequests;	// 704 = 0x2c0
    NSString *_serviceType;	// 712 = 0x2c8
    unsigned int _sessionIDLast;	// 720 = 0x2d0
    _Bool _serverBonjourInfraPairing;	// 724 = 0x2d4
    CUSleepWakeMonitor *_sleepWakeMonitor;	// 728 = 0x2d8
    NSUserDefaults *_soundBoardPrefs;	// 736 = 0x2e0
    _Bool _soundBoardUserLeader;	// 744 = 0x2e8
    _Bool _soundBoardUserLeaderKVO;	// 745 = 0x2e9
    unsigned long long _startTicks;	// 752 = 0x2f0
    unsigned long long _startTicksFull;	// 760 = 0x2f8
    RPConnection *_stereoCnx;	// 768 = 0x300
    CUSystemMonitor *_systemMonitor;	// 776 = 0x308
    CBAdvertiser *_cbAdvertiser;	// 784 = 0x310
    NSMutableDictionary *_tcpClientConnections;	// 792 = 0x318
    NSMutableDictionary *_tcpOnDemandClientConnections;	// 800 = 0x320
    NSMutableSet *_tcpServerConnections;	// 808 = 0x328
    CUTCPServer *_tcpServer;	// 816 = 0x330
    NSMutableDictionary *_uiNoteDevices;	// 824 = 0x338
    CUUserNotificationSession *_uiNoteSession;	// 832 = 0x340
    NSMutableDictionary *_unauthDevices;	// 840 = 0x348
    NSData *_uniqueIDData;	// 848 = 0x350
    NSString *_uniqueIDStr;	// 856 = 0x358
    CUWiFiManager *_wifiManager;	// 864 = 0x360
    unsigned int _xidLast;	// 872 = 0x368
    NSMutableSet *_xpcConnections;	// 880 = 0x370
    NSXPCInterface *_xpcClientInterface;	// 888 = 0x378
    NSXPCInterface *_xpcServerInterface;	// 896 = 0x380
    NSXPCListener *_xpcListener;	// 904 = 0x388
    unsigned int _xpcLastID;	// 912 = 0x390
    NSMutableDictionary *_xpcMatchingMap;	// 920 = 0x398
    _Bool _prefSendActLvlInfra;	// 928 = 0x3a0
    _Bool _prefApplyNoiWiFiToUSB;	// 929 = 0x3a1
    _Bool _prefAppSignIn;	// 930 = 0x3a2
    _Bool _prefBLEClient;	// 931 = 0x3a3
    NSNumber *_prefMeDeviceIsMeOverride;	// 936 = 0x3a8
    unsigned int _prefBTPipeTimeoutSeconds;	// 944 = 0x3b0
    _Bool _prefClientEnabled;	// 948 = 0x3b4
    _Bool _prefCommunal;	// 949 = 0x3b5
    _Bool _prefCoreDeviceEnabled;	// 950 = 0x3b6
    _Bool _prefCoreDevicePaired;	// 951 = 0x3b7
    _Bool _prefHomeKitConfigured;	// 952 = 0x3b8
    _Bool _prefHomeKitEnabled;	// 953 = 0x3b9
    _Bool _prefIgnoreCompanionLinkChecks;	// 954 = 0x3ba
    _Bool _prefIPEnabled;	// 955 = 0x3bb
    unsigned int _prefMaxConnectionCount;	// 956 = 0x3bc
    _Bool _prefServerBonjourAlways;	// 960 = 0x3c0
    _Bool _prefServerBonjourOpportunitistic;	// 961 = 0x3c1
    _Bool _prefServerEnabled;	// 962 = 0x3c2
    _Bool _prefServerShouldRun;	// 963 = 0x3c3
    _Bool _prefUseTargetAuthTag;	// 964 = 0x3c4
    RPHIDDaemon *_hidDaemon;	// 968 = 0x3c8
    _Bool _prefHIDEnabled;	// 976 = 0x3d0
    RPMediaControlDaemon *_mediaControlDaemon;	// 984 = 0x3d8
    _Bool _prefMediaControlEnabled;	// 992 = 0x3e0
    RPSiriDaemon *_siriDaemon;	// 1000 = 0x3e8
    _Bool _prefSiriEnabled;	// 1008 = 0x3f0
    _Bool _prefTouchEnabled;	// 1009 = 0x3f1
    _Bool _prefUINotesEnabled;	// 1010 = 0x3f2
    _Bool _prefCompanionAuthentication;	// 1011 = 0x3f3
    RPAppleTVDeviceInfoManager *_tvDeviceInfoManager;	// 1016 = 0x3f8
    RPNearFieldDaemon *_nearfieldDaemon;	// 1024 = 0x400
    MISSING_TYPE *_dispatchQueue;	// 1032 = 0x408
    RPCompanionLinkDevice *_localDeviceInfo;	// 1040 = 0x410
    RPHomeKitManager *_rpHomeKitManager;	// 1048 = 0x418
    NSMutableSet *_activeServers;	// 1056 = 0x420
    NSMutableDictionary *_activeSessions;	// 1064 = 0x428
    NSDictionary *_destinationIdentifierModelMap;	// 1072 = 0x430
    NSDictionary *_destinationIdentifierRelMap;	// 1080 = 0x438
    NSMutableSet *_rbsPIDSet;	// 1088 = 0x440
}

+ (id)sharedCompanionLinkDaemon;	// IMP=0x002000000000b2b3
- (void).cxx_destruct;	// IMP=0x0020000000042d99
@property(retain, nonatomic) NSMutableSet *rbsPIDSet; // @synthesize rbsPIDSet=_rbsPIDSet;
@property(readonly, nonatomic) NSDictionary *destinationIdentifierRelMap; // @synthesize destinationIdentifierRelMap=_destinationIdentifierRelMap;
@property(readonly, nonatomic) NSDictionary *destinationIdentifierModelMap; // @synthesize destinationIdentifierModelMap=_destinationIdentifierModelMap;
@property(retain, nonatomic) NSMutableDictionary *activeSessions; // @synthesize activeSessions=_activeSessions;
@property(retain, nonatomic) NSMutableSet *activeServers; // @synthesize activeServers=_activeServers;
@property(readonly, nonatomic) RPHomeKitManager *rpHomeKitManager; // @synthesize rpHomeKitManager=_rpHomeKitManager;
@property(readonly, nonatomic) RPCompanionLinkDevice *localDeviceInfo; // @synthesize localDeviceInfo=_localDeviceInfo;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void)setDispatchQueue:(id)arg1;	// IMP=0x0010000000042ccd
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x0010000000042bf5
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000042645
- (id)_contextCollectorDevice;	// IMP=0x001000000004238b
- (void)_handleContextCollectorRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000420ea
- (void)_handleContextCollectorProxyRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000041e0d
- (long long)_sessionsActiveOnConnection:(id)arg1 xpcConnection:(id)arg2;	// IMP=0x0010000000041b4a
- (void)_sessionHandlePeerDisconnect:(id)arg1;	// IMP=0x001000000004174b
- (void)_sessionHandleStopRequest:(id)arg1 options:(id)arg2 cnx:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000411a2
- (void)_sessionHandleStartRequest:(id)arg1 options:(id)arg2 cnx:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000040405
- (void)sessionStopSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003ff8c
- (void)sessionStartSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 destinationID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000003f7f9
- (id)_checkForProxyOrLocalDestinations:(id)arg1 eventID:(id)arg2 event:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000003f5e2
- (void)_proxyDevice:(id)arg1 loopbackRequestID:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000003eb39
- (void)_createRequestEntryForXid:(id)arg1 requestID:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003e7db
- (void)_existingProxyDeviceUpdated:(id)arg1 event:(id)arg2 isLocal:(_Bool)arg3;	// IMP=0x001000000003e233
- (id)homeHubDeviceForLaunchInstanceID:(id)arg1;	// IMP=0x001000000003e05c
- (void)_proxyLocalDeviceUpdateOnConnection:(id)arg1 launchInstanceID:(id)arg2;	// IMP=0x001000000003deae
- (void)_sendProxyDeviceUpdateToPeer:(id)arg1;	// IMP=0x001000000003db58
- (id)_addProxyIdentifier:(id)arg1 toDictionary:(id)arg2;	// IMP=0x001000000003da9e
- (_Bool)_destinationID:(id)arg1 matchesProxyDeviceOnCnx:(id)arg2;	// IMP=0x001000000003d8ea
- (_Bool)_proxyDevice:(id)arg1 isEqualTo:(id)arg2;	// IMP=0x001000000003d7e0
- (_Bool)_proxyDevice:(id)arg1 receivedRequestID:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5 cnx:(id)arg6;	// IMP=0x001000000003d3fb
- (void)_proxyDeviceRemove:(id)arg1 options:(id)arg2 cnx:(id)arg3;	// IMP=0x001000000003d023
- (void)_proxyDeviceAdd:(id)arg1 options:(id)arg2 eventID:(id)arg3 deviceInfo:(id)arg4 cnx:(id)arg5;	// IMP=0x001000000003cd5a
- (void)_proxyDeviceListUpdated:(id)arg1 content:(id)arg2 options:(id)arg3 cnx:(id)arg4;	// IMP=0x001000000003c6bf
- (_Bool)_allowStreamRequest:(id)arg1 xpcCnx:(id)arg2 rpCnx:(id)arg3;	// IMP=0x001000000003c264
- (_Bool)_allowMessageForRegistrationOptions:(id)arg1 cnx:(id)arg2;	// IMP=0x001000000003c1c3
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 unauth:(_Bool)arg5 cnx:(id)arg6;	// IMP=0x001000000003bce8
- (_Bool)_receivedRequestID:(id)arg1 onXPCCnx:(id)arg2 request:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5 unauth:(_Bool)arg6 rpCnx:(id)arg7;	// IMP=0x001000000003bb50
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 xpcID:(unsigned int)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000003b763
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000003b742
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003b715
- (void)deregisterRequestID:(id)arg1;	// IMP=0x001000000003b68e
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b4bc
- (void)_registerConnectionRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003b2ea
- (void)_deliverEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(_Bool)arg4 cnx:(id)arg5 outError:(id *)arg6;	// IMP=0x001000000003adf4
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(_Bool)arg4 cnx:(id)arg5;	// IMP=0x001000000003ab65
- (void)_receivedEventID:(id)arg1 onXPCCnx:(id)arg2 event:(id)arg3 options:(id)arg4 unauth:(_Bool)arg5 rpCnx:(id)arg6;	// IMP=0x001000000003a9c6
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000039cf4
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000039cc5
- (void)deregisterEventID:(id)arg1;	// IMP=0x0010000000039c3e
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000039a6c
- (void)_updatePersonalRequestsStateForHomeHubDevices;	// IMP=0x0010000000039a66
- (void)_updateRoomInfoForHomeHubDevice:(id)arg1 roomName:(id)arg2;	// IMP=0x0010000000039a60
- (void)_updateHomeHubDevices:(id)arg1;	// IMP=0x0010000000039555
- (void)_homeHubDeviceRemoved:(id)arg1;	// IMP=0x00100000000392f5
- (void)_homeHubDeviceAdded:(id)arg1;	// IMP=0x0010000000038e68
- (id)_eventForHomeHubDevice:(id)arg1;	// IMP=0x0010000000038bc4
- (id)_filterHomeKitUserIdentifiers:(id)arg1;	// IMP=0x0010000000038bab
- (void)_homeKitUpdateUserIdentifiers;	// IMP=0x0010000000038926
- (void)_homeKitUpdateInfo:(_Bool)arg1;	// IMP=0x00100000000383cf
- (void)_homeKitSelfAccessoryUpdated;	// IMP=0x0010000000037e26
- (void)_homeKitSelfAccessoryMediaSystemUpdated:(int)arg1;	// IMP=0x0010000000037294
- (void)_homeKitSelfAccessoryMediaAccessUpdated;	// IMP=0x0010000000036f8c
- (void)_homeKitIdentityUpdated:(id)arg1 error:(id)arg2;	// IMP=0x0010000000036af2
- (void)_homeKitGetUserInfo:(id)arg1;	// IMP=0x0010000000036993
- (id)_homeKitDecryptRotatingIDForBonjourDevice:(id)arg1;	// IMP=0x00100000000367a6
- (_Bool)_homeKitAuthMatchForBonjourDevice:(id)arg1;	// IMP=0x0010000000036654
- (void)_homeKitGetPairingIdentities;	// IMP=0x001000000003654f
- (void)_homeKitPairingUpdated:(id)arg1;	// IMP=0x0010000000036488
- (void)_homeKitEnsureStopped;	// IMP=0x0010000000036321
- (void)_homeKitEnsureStarted;	// IMP=0x0010000000035d5e
- (id)_xpcConnections:(id)arg1 withControlFlags:(unsigned long long)arg2;	// IMP=0x0010000000035b68
- (void)_stereoDeviceUpdate:(int)arg1;	// IMP=0x0010000000034e80
- (void)_siriEnsureStopped;	// IMP=0x0010000000034dec
- (void)_siriEnsureStarted;	// IMP=0x0010000000034cbd
- (void)_reachabilityEnsureStopped;	// IMP=0x0010000000034c30
- (void)_reachabilityEnsureStarted;	// IMP=0x0010000000034b61
- (void)_personalDeviceUpdate;	// IMP=0x00100000000347b6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000003456d
- (unsigned long long)_nearbyActionDeviceActionTypes;	// IMP=0x0010000000034562
- (void)_miscHandleSpeakRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000034385
- (void)_miscHandleLaunchAppRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000033d4d
- (void)_miscEnsureStopped;	// IMP=0x0010000000033c69
- (void)_miscEnsureStarted;	// IMP=0x001000000003399a
- (void)_mediaRouteIDGet;	// IMP=0x0010000000033622
- (void)_mediaRemoteIDGet;	// IMP=0x00100000000332bf
- (void)_mediaControlEnsureStopped;	// IMP=0x001000000003322b
- (void)_mediaControlEnsureStarted;	// IMP=0x001000000003309e
- (int)_localMediaAccessControlSetting;	// IMP=0x0010000000033013
- (void)_localDeviceCleanup;	// IMP=0x0010000000032f34
- (void)_localDeviceUpdate;	// IMP=0x0010000000030cb0
- (void)_interestSendEventID:(id)arg1 event:(id)arg2;	// IMP=0x0010000000030b0c
- (void)_interestRemoveForCnx:(id)arg1;	// IMP=0x001000000003079d
- (void)_interestReceived:(id)arg1 cnx:(id)arg2;	// IMP=0x00100000000300b4
- (void)interestDeregisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x001000000002fe7f
- (void)interestRegisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x001000000002fbee
- (void)_hidEnsureStopped;	// IMP=0x001000000002fb5a
- (void)_hidEnsureStarted;	// IMP=0x001000000002fa2b
- (_Bool)_haveActiveServerConnectionsOnAWDL;	// IMP=0x001000000002f8ec
- (_Bool)_haveActiveClientConnectionsOnAWDL;	// IMP=0x001000000002f723
- (id)_getAppleID;	// IMP=0x001000000002f6e3
- (id)_getAltDSID;	// IMP=0x001000000002f6d9
- (void)_forEachUniqueMatchingDestinationID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f401
- (void)_forEachMatchingDestinationID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f2f2
- (void)_forEachConnectionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002ed7a
- (id)findUnauthDeviceForIdentifier:(id)arg1;	// IMP=0x001000000002eb83
- (id)_findDeviceWithDevice:(id)arg1 deviceMap:(id)arg2 matchedIdentifier:(id *)arg3;	// IMP=0x001000000002ea24
- (id)_findMatchingAWDLBonjourDevice:(id)arg1;	// IMP=0x001000000002e8dd
- (id)_findWiFiConnectionByID:(id)arg1;	// IMP=0x001000000002e6ee
- (id)findConnectedDeviceForIdentifier:(id)arg1 controlFlags:(unsigned long long)arg2 cnx:(id *)arg3;	// IMP=0x001000000002e11b
- (id)findAuthAWDLPairingModeDeviceForIdentifier:(id)arg1;	// IMP=0x001000000002de90
- (void)_duetSyncEnsureStopped;	// IMP=0x001000000002ddfc
- (void)_duetSyncEnsureStarted;	// IMP=0x001000000002dd3c
- (id)_discoveryNonceOrRotate:(_Bool)arg1;	// IMP=0x001000000002dc99
- (void)_disconnectUnpairedDevices;	// IMP=0x001000000002d93c
- (void)_disconnectUnauthConnections;	// IMP=0x001000000002d78f
- (void);	// IMP=0x001000000002d432
- (_Bool)_destinationID:(id)arg1 matchesCnx:(id)arg2;	// IMP=0x001000000002ceb9
- (void)_connectionStateChanged:(int)arg1 cnx:(id)arg2;	// IMP=0x001000000002ca72
- (id)_findExistingActiveDevice:(id)arg1;	// IMP=0x001000000002c8f4
- (unsigned char)_controlFlagsToNearbyActionType:(unsigned long long)arg1;	// IMP=0x001000000002c8df
- (void)_connectionConfigureCommon:(id)arg1;	// IMP=0x001000000002c3d1
- (int)_airPlayLeaderStateUncached;	// IMP=0x001000000002c0c8
- (void)_activeDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x001000000002bf60
- (void)_activeDeviceChangedForConnection:(id)arg1 bonjourDevice:(id)arg2;	// IMP=0x001000000002bcd1
- (void)_activeDeviceRemoved:(id)arg1 cnx:(id)arg2;	// IMP=0x001000000002b891
- (void)_activeDeviceAdded:(id)arg1 cnx:(id)arg2;	// IMP=0x001000000002b4e7
- (void)_btPipeSyncKeysIfNeeded;	// IMP=0x001000000002b2a2
- (void)_btPipeConnectionEnded:(id)arg1;	// IMP=0x001000000002b257
- (void)_btPipeConnectionStart;	// IMP=0x001000000002ac47
- (void)_btPipeHandleStateChanged:(id)arg1;	// IMP=0x001000000002aa76
- (void)_btPipeEnsureStopped;	// IMP=0x001000000002a9f8
- (void)_btPipeTearDown:(id)arg1;	// IMP=0x001000000002a919
- (void)_btPipeEnsureStarted;	// IMP=0x001000000002a479
- (void)_btPipeSetup:(id)arg1 withPriority:(int)arg2;	// IMP=0x001000000002a24e
- (void)_bleServerHandleConnectionEnded:(id)arg1;	// IMP=0x001000000002a1d8
- (void)_bleServerHandleConnectionStarted:(id)arg1;	// IMP=0x0010000000029bd7
- (void)_bleServerEnsureStopped;	// IMP=0x0010000000029a03
- (void)_bleServerEnsureStarted;	// IMP=0x0010000000029775
- (_Bool)_serverTCPHasActiveConnections;	// IMP=0x001000000002973e
- (void)_serverTCPRemoveConnectionsWithIdentifier:(id)arg1 exceptConnection:(id)arg2;	// IMP=0x00100000000293e1
- (void)_serverTCPHandleConnectionEnded:(id)arg1;	// IMP=0x0010000000029141
- (void)_configureConnectionForPairing:(id)arg1;	// IMP=0x0010000000028dfb
- (id)_serverTCPHandleConnectionStarted:(id)arg1;	// IMP=0x001000000002868e
- (void)_serverTCPEnsureStopped;	// IMP=0x00100000000284b6
- (void)_serverTCPEnsureStarted;	// IMP=0x0010000000028244
- (_Bool)_serverShouldAdvertiseIdentifiableInfoWhenUnpairedForAirPlayWithLinkType:(int)arg1;	// IMP=0x0010000000028074
- (void)_serverBTAddressChanged;	// IMP=0x0010000000027ee9
- (void)_serverBTAddressMonitorEnsureStopped;	// IMP=0x0010000000027e55
- (void)_serverBTAddressMonitorEnsureStarted;	// IMP=0x0010000000027cff
- (void)_clientSendActivityLevelOverWiFiIfNecessary;	// IMP=0x0010000000027825
- (_Bool)_shouldReceiveActivityLevelOverWiFi:(long long)arg1;	// IMP=0x0010000000027818
- (_Bool)_shouldSendActivityLevelOverWiFi;	// IMP=0x001000000002777d
- (void)_serverReceivedNeedsAWDLEvent:(id)arg1 event:(id)arg2;	// IMP=0x001000000002735b
- (void)_serverBonjourAWDLAdvertiserUpdateTXT;	// IMP=0x0010000000026f4f
- (void)_serverBonjourAWDLAdvertiserEnsureStopped;	// IMP=0x0010000000026e6f
- (void)_serverBonjourAWDLAdvertiserEnsureStarted;	// IMP=0x0010000000026bae
- (_Bool)_serverBonjourAWDLAdvertiserShouldRun;	// IMP=0x0010000000026174
- (void)_serverBonjourUpdateTXT;	// IMP=0x0010000000025bf7
- (id)_serverBonjourTempAuthTagStringWithData:(id)arg1;	// IMP=0x0010000000025aac
- (id)_serverBonjourAuthTagStringWithData:(id)arg1;	// IMP=0x0010000000025961
- (id)_serverBonjourAuthTagString;	// IMP=0x00100000000258a5
- (void)_serverBonjourEnsureStopped;	// IMP=0x0010000000025811
- (void)_serverBonjourEnsureStarted;	// IMP=0x00100000000255e9
- (_Bool)_serverBonjourAWDLShouldRun;	// IMP=0x0010000000025549
- (_Bool)_serverBonjourShouldRun;	// IMP=0x00100000000254e8
- (void)_processPendingLostNeedsCLinkDevices;	// IMP=0x0010000000025263
- (void)_schedulePendingLostNeedsCLinkDeviceTimer;	// IMP=0x001000000002511b
- (void)_serverBLENeedsCLinkScannerDeviceLost:(id)arg1;	// IMP=0x0010000000024f05
- (void)_serverBLENeedsCLinkScannerDeviceFound:(id)arg1;	// IMP=0x001000000002490e
- (_Bool)_serverBLENeedsCLinkScannerScreenOff;	// IMP=0x0010000000024874
- (void)_serverBLENeedsCLinkScannerEnsureStopped;	// IMP=0x0010000000024794
- (void)_serverBLENeedsCLinkScannerEnsureStarted;	// IMP=0x00100000000243b0
- (void)_serverNearbyInfoV2DiscoveryEnsureStopped;	// IMP=0x0010000000024108
- (void)_serverNearbyInfoV2DiscoveryEnsureStarted;	// IMP=0x0010000000023e87
- (_Bool)_serverNearbyInfoV2DiscoveryShouldRun;	// IMP=0x0010000000023db6
- (void)_serverNearbyActionV2DiscoveryEnsureStopped;	// IMP=0x0010000000023d6f
- (void)_serverNearbyActionV2DiscoveryEnsureStarted;	// IMP=0x0010000000023c03
- (_Bool)_serverNearbyActionV2DiscoveryShouldRun;	// IMP=0x0010000000023b5f
- (void)_serverEnsureStopped;	// IMP=0x0010000000023afd
- (void)_serverEnsureStarted;	// IMP=0x00100000000239e2
- (_Bool)createDeviceToEndpointMappingForDeviceID:(id)arg1 endpointUUID:(id *)arg2 error:(id *)arg3;	// IMP=0x00100000000239da
- (_Bool)triggerEnhancedDiscoveryForReason:(id)arg1 useCase:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0010000000023930
- (void)_clientUINoteAction:(int)arg1 error:(id)arg2 device:(id)arg3;	// IMP=0x0010000000023812
- (void)_clientUINoteStart:(id)arg1;	// IMP=0x00100000000234f5
- (void)_clientUINoteProcessPending;	// IMP=0x0010000000023288
- (void)_clientReportUINoteDevice:(id)arg1;	// IMP=0x0010000000022e88
- (void)_clientReportChangedDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x0010000000022d20
- (void)_clientReportLostDevice:(id)arg1;	// IMP=0x0010000000022bbf
- (void)_clientReportFoundDevice:(id)arg1;	// IMP=0x0010000000022a5c
- (id)logDictionaryOfStringArrays:(id)arg1 withPrefix:(id)arg2;	// IMP=0x0010000000022691
- (void)_clientPurgeUnauthAWDLDevices;	// IMP=0x00100000000223cb
- (void)_clientOnDemandAWDLDiscoveryTimedOutForDevice:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x00100000000221ed
- (void)_clientOnDemandAWDLDiscoveryStartForXPC:(id)arg1;	// IMP=0x0010000000021ed9
- (void)_clientOnDemandDiscoveryStart:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x0010000000021bae
- (void)_clientConnectionEndedUnauth:(id)arg1 publicID:(id)arg2;	// IMP=0x0010000000021aa9
- (_Bool)_clientConnectionStartUnauth:(id)arg1 client:(id)arg2 publicID:(id)arg3 xpcCnx:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000020e3f
- (void)_clientOnDemandConnectionEnded:(id)arg1 uniqueID:(id)arg2;	// IMP=0x0010000000020cc5
- (void)_clientConnectionEnded:(id)arg1 uniqueID:(id)arg2;	// IMP=0x0010000000020b68
- (id)_clientCreateConnection:(id)arg1 xpcCnx:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001f4b4
- (_Bool)_clientConnectionStartOnDemand:(id)arg1 xpcCnx:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001f467
- (void)_clientConnectionStart:(id)arg1 controlFlags:(unsigned long long)arg2 uniqueID:(id)arg3 identity:(id)arg4;	// IMP=0x001000000001eb77
- (void)_clientBonjourAWDLBrowserLostDevice:(id)arg1;	// IMP=0x001000000001e655
- (void)_clientBonjourAWDLBrowserFoundDevice:(id)arg1;	// IMP=0x001000000001d179
- (id)_clientShouldConnectOverBonjour:(id)arg1 device:(id)arg2 identities:(id)arg3;	// IMP=0x001000000001cd80
- (_Bool)_clientBonjourAWDLBrowserShouldRun;	// IMP=0x001000000001cb1c
- (void)_clientBonjourAWDLBrowserEnsureStopped;	// IMP=0x001000000001ca1c
- (void)_clientBonjourAWDLBrowserEnsureStarted;	// IMP=0x001000000001c766
- (void)_clientBonjourReevaluateUnauthDevices;	// IMP=0x001000000001c4f7
- (void)_clientBonjourReevaluateAllDevices;	// IMP=0x001000000001c140
- (_Bool)_clientBonjourCheckLostPairedDevice:(id)arg1 publicID:(id)arg2;	// IMP=0x001000000001bf89
- (void)_clientBonjourLostUnauthDevice:(id)arg1;	// IMP=0x001000000001bca1
- (_Bool)_clientBonjourCheckFoundPairedDevice:(id)arg1 publicID:(id)arg2;	// IMP=0x001000000001b8ca
- (void)_clientBonjourFoundUnauthDevice:(id)arg1 isAWDLDevice:(_Bool)arg2;	// IMP=0x001000000001b366
- (void)_clientBonjourLostDevice:(id)arg1;	// IMP=0x001000000001b04e
- (_Bool)_clientBonjourFoundDevice:(id)arg1 reevaluate:(_Bool)arg2;	// IMP=0x001000000001a29b
- (void)_clientBonjourEnsureStopped;	// IMP=0x001000000001a1c6
- (void)_clientBonjourEnsureStarted;	// IMP=0x0010000000019eef
- (void)_clientSendNeedsAWDLOverWiFi:(_Bool)arg1;	// IMP=0x0010000000019920
- (void)_clientBLENearbyActionV2AdvertiserEnsureStopped;	// IMP=0x001000000001984e
- (void)_clientBLENearbyActionV2AdvertiserRestart;	// IMP=0x00100000000197c1
- (void)_clientBLENearbyActionV2AdvertiserUpdate;	// IMP=0x001000000001963d
- (void)_clientBLENearbyActionV2AdvertiserEnsureStarted;	// IMP=0x00100000000191be
- (_Bool)_clientBLENearbyActionV2AdvertiserShouldRun;	// IMP=0x0010000000018f61
- (id)_clientBLENeedsCLinkTargetDevice;	// IMP=0x0010000000018ce4
- (_Bool)_clientBLENeedsCLinkAdvertiserShouldRun;	// IMP=0x00100000000188ee
- (void)_clientBLENeedsCLinkAdvertiserEnsureStopped;	// IMP=0x001000000001880a
- (void)_clientBLENeedsCLinkAdvertiserRestart;	// IMP=0x001000000001864f
- (void)_clientBLENeedsCLinkAdvertiserUpdate;	// IMP=0x00100000000184cb
- (void)_clientBLENeedsCLinkAdvertiserEnsureStarted;	// IMP=0x0010000000018087
- (void)_clientBLEFamilyDeviceReportChanges;	// IMP=0x0010000000017c9b
- (void)_serverNearbyInfoV2DeviceLost:(id)arg1 idsIdentifier:(id)arg2 force:(_Bool)arg3 deviceFlags:(unsigned char)arg4;	// IMP=0x001000000001783f
- (void)_serverNearbyInfoV2DeviceFound:(id)arg1 deviceFlags:(unsigned char)arg2;	// IMP=0x00100000000170de
- (_Bool)_clientShouldFindNonSameAccountDevices;	// IMP=0x0010000000016fc4
- (void)_processPendingLostBLEDevices;	// IMP=0x0010000000016d41
- (void)_schedulePendingLostBLEDeviceTimer;	// IMP=0x0010000000016bf9
- (void)_clientBLEDiscoveryDeviceLost:(id)arg1 force:(_Bool)arg2 deviceFlags:(unsigned char)arg3;	// IMP=0x0010000000016515
- (void)_clientBLEDiscoveryDeviceFound:(id)arg1 deviceFlags:(unsigned char)arg2;	// IMP=0x0010000000015a29
- (_Bool)_clientBLETriggerEnhancedDiscovery:(id)arg1 useCase:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x001000000001587d
- (void)_clientBLEDiscoveryEnsureStopped;	// IMP=0x0010000000015581
- (void)_clientBLEDiscoveryEnsureStarted;	// IMP=0x0010000000014c62
- (_Bool)_clientBLEActionDiscoveryShouldRun;	// IMP=0x0010000000014c3d
- (void)_clientBLEActionDiscoveryEnsureStopped;	// IMP=0x00100000000149bb
- (void)_clientBLEActionDiscoveryEnsureStarted;	// IMP=0x0010000000014550
- (void)_clientEnsureStopped;	// IMP=0x0010000000014466
- (void)_clientEnsureStarted;	// IMP=0x001000000001432a
- (_Bool)isNearbyActionV2AdvertiserActive;	// IMP=0x0010000000014303
- (void)_updateRBSProcessMonitor;	// IMP=0x0010000000013aac
- (void)_removeApplicationPID:(id)arg1;	// IMP=0x0010000000013985
- (void)_addApplicationPID:(id)arg1;	// IMP=0x00100000000138da
- (void)_updateForXPCServerChange;	// IMP=0x00100000000135a2
- (void)_updateForXPCClientChange;	// IMP=0x00100000000127d6
- (void)_updateAssertions;	// IMP=0x00100000000124ba
- (void)_update;	// IMP=0x0010000000011b61
- (void)_reportXPCMatchingDiscoveryCompanionAuthenticationDevice:(id)arg1;	// IMP=0x001000000001181e
- (void)_reportXPCMatchingDiscoveryUINoteDevice:(id)arg1;	// IMP=0x00100000000114db
- (void)_reportXPCMatchingDiscoveryCLink;	// IMP=0x00100000000110b0
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x0010000000010f45
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010bd0
- (void)prefsChanged;	// IMP=0x001000000000fcb5
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x001000000000f754
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x001000000000f29d
- (void)_invalidated;	// IMP=0x001000000000f101
- (void)_invalidate;	// IMP=0x001000000000ec2a
- (void)invalidate;	// IMP=0x001000000000ebc6
- (void)_activate;	// IMP=0x001000000000e798
- (void)activate;	// IMP=0x001000000000e724
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x001000000000bdba
- (id)findDeviceFromID:(id)arg1;	// IMP=0x001000000000bb99
- (id)findServerClientFromID:(id)arg1 senderIDS:(id)arg2;	// IMP=0x001000000000b6d8
- (void)_createDestinationIdentifierMaps;	// IMP=0x001000000000b3af
- (id)init;	// IMP=0x001000000000b308

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

