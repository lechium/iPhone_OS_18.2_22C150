//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHTTPDevice, HMDHTTPServerMessageTransport, HMFNetServiceBrowser, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHTTPMessageTransport
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_residentDevices;	// 24 = 0x18
    NSMutableSet *_transientDevices;	// 32 = 0x20
    NSMutableDictionary *_txtRecord;	// 40 = 0x28
    NSMutableArray *_clientTransports;	// 48 = 0x30
    _Bool _serverEnabled;	// 56 = 0x38
    HMDHTTPDevice *_currentDevice;	// 64 = 0x40
    HMDHTTPServerMessageTransport *_serverTransport;	// 72 = 0x48
    HMFNetServiceBrowser *_clientBrowser;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x0010000000227320
+ (id)shortDescription;	// IMP=0x001000000022730e
+ (_Bool)protocolVersionSupportsExtendedMessages:(id)arg1;	// IMP=0x00100000002272a7
+ (_Bool)shouldHostMessageServer;	// IMP=0x001000000022721c
+ (id)protocolVersion;	// IMP=0x00100000002271ec
+ (unsigned long long)restriction;	// IMP=0x00100000002271e1
- (void).cxx_destruct;	// IMP=0x0000000000223e9e
@property(readonly, nonatomic) HMFNetServiceBrowser *clientBrowser; // @synthesize clientBrowser=_clientBrowser;
- (id)dumpState;	// IMP=0x0000000000223b73
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;	// IMP=0x0000000000223ab5
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;	// IMP=0x00000000002237ce
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;	// IMP=0x00000000002236c4
- (void)server:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002235d7
- (void)server:(id)arg1 didRemoveDevice:(id)arg2;	// IMP=0x0000000000223543
- (void)server:(id)arg1 didAddDevice:(id)arg2;	// IMP=0x0000000000223433
- (void)server:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x0000000000223329
- (void)client:(id)arg1 didReceiveMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000022323e
- (void)client:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x0000000000222e9a
- (void)startObservingIsPublishingForService:(id)arg1;	// IMP=0x0000000000222b9b
- (void)_connectToDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000222735
- (void)_stopServer;	// IMP=0x00000000002225e6
- (void)_startServerWithDevice:(id)arg1;	// IMP=0x000000000022240e
- (void)configureWithDevice:(id)arg1;	// IMP=0x000000000022237a
- (id)_serviceForDevice:(id)arg1;	// IMP=0x00000000002220f9
- (void)removeAllClientTransports;	// IMP=0x00000000002220a4
- (void)removeClientTransport:(id)arg1;	// IMP=0x0000000000222029
- (void)addClientTransport:(id)arg1;	// IMP=0x0000000000221fae
- (id)clientTransportForService:(id)arg1;	// IMP=0x0000000000221e25
- (id)clientTransportForDevice:(id)arg1;	// IMP=0x0000000000221c02
@property(readonly, nonatomic) NSArray *clientTransports;
- (id)deviceForHTTPDevice:(id)arg1;	// IMP=0x0000000000221838
- (void)setServerTransport:(id)arg1;	// IMP=0x00000000002217e4
@property(readonly, nonatomic) HMDHTTPServerMessageTransport *serverTransport; // @synthesize serverTransport=_serverTransport;
- (void)setCurrentDevice:(id)arg1;	// IMP=0x000000000022174a
@property(readonly, nonatomic) HMDHTTPDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
- (void)removeTXTRecordValueForKey:(id)arg1;	// IMP=0x0000000000221673
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000002215c1
@property(readonly, copy, nonatomic) NSDictionary *TXTRecord;
- (void)handleServerEnabled:(_Bool)arg1;	// IMP=0x000000000022150c
@property(getter=isServerEnabled) _Bool serverEnabled; // @synthesize serverEnabled=_serverEnabled;
- (void)_handleReceivedRequestMessage:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000220986
- (void)_sendMessage:(id)arg1 destination:(id)arg2 timeout:(double)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000022027c
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002201be
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x0000000000220047
- (_Bool)isDeviceConnected:(id)arg1;	// IMP=0x000000000021fd72
- (long long)qualityOfService;	// IMP=0x000000000021fd67
- (id)logIdentifier;	// IMP=0x000000000021fcdc
- (int)transportType;	// IMP=0x000000000021fcd1
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x000000000021fb52
- (id)shortDescription;	// IMP=0x000000000021fa8b
- (id)initWithAccountRegistry:(id)arg1 clientBrowser:(id)arg2;	// IMP=0x000000000021f908
- (id)initWithAccountRegistry:(id)arg1;	// IMP=0x000000000021f885

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

