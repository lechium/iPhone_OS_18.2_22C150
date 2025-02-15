//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAP2AccessoryServerDiscoveryAccessoryInfo, HMFActivity, NSMutableArray, NSObject, NSString;
@protocol HAP2AccessoryServerDiscovery, HAP2AccessoryServerTransportCoAPClientFactory, HAP2CoAPClient, OS_nw_connection;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerTransportCoAP
{
    CDUnknownBlockType _stateChangeCompletion;	// 8 = 0x8
    CDUnknownBlockType _sendRequestCompletion;	// 16 = 0x10
    HMFActivity *_resolveActivity;	// 24 = 0x18
    id <HAP2CoAPClient> _coapClient;	// 32 = 0x20
    unsigned long long _maxTransmitAttempts;	// 40 = 0x28
    double _initialACKTimeout;	// 48 = 0x30
    NSObject<OS_nw_connection> *_nwConnection;	// 56 = 0x38
    unsigned long long _numOfAddresses;	// 64 = 0x40
    unsigned long long _numOfAddressesTried;	// 72 = 0x48
    NSString *_serviceName;	// 80 = 0x50
    NSString *_serviceType;	// 88 = 0x58
    NSString *_serviceDomain;	// 96 = 0x60
    id <HAP2AccessoryServerDiscovery> _discovery;	// 104 = 0x68
    HAP2AccessoryServerDiscoveryAccessoryInfo *_accessoryInfo;	// 112 = 0x70
    double _addressResolutionTimeout;	// 120 = 0x78
    id <HAP2AccessoryServerTransportCoAPClientFactory> _coapClientFactory;	// 128 = 0x80
    NSMutableArray *_addressList;	// 136 = 0x88
    unsigned long long _maxAddressesAllowed;	// 144 = 0x90
    NSMutableArray *_bonjourNames;	// 152 = 0x98
    unsigned long long _maxBonjourNamesAllowed;	// 160 = 0xa0
    struct coap_address_t _ipAddress;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000001c43c3
- (void)client:(id)arg1 didReceiveEvent:(id)arg2;	// IMP=0x00000000001c4216
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;	// IMP=0x00000000001c402d
- (void)doUpdateMaxRequestTimeout:(double)arg1;	// IMP=0x00000000001c3ea7
- (void)doCloseWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c3d69
- (void)doSendRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c377f
- (void)doOpenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001c30c1
- (_Bool)mergeWithNewTransport:(id)arg1;	// IMP=0x00000000001c2e46
- (id)mimeTypeForCharacteristicRequests;	// IMP=0x00000000001c2e39
- (id)mimeTypeForWellKnownEndpoint:(unsigned long long)arg1;	// IMP=0x00000000001c2e15
- (id)endpointForCharacteristics:(id)arg1;	// IMP=0x00000000001c2e08
- (id)endpointForCharacteristic:(id)arg1;	// IMP=0x00000000001c2dfb
- (id)wellKnownEndpoint:(unsigned long long)arg1;	// IMP=0x00000000001c2dd7
- (unsigned long long)protocolFeaturesForVersion:(id)arg1;	// IMP=0x00000000001c2d6a
- (id)underlyingTransport;	// IMP=0x00000000001c2d62
- (id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 operationQueue:(id)arg4;	// IMP=0x00000000001c2d38
- (id)initWithAccessoryInfo:(id)arg1 discovery:(id)arg2 operationQueue:(id)arg3;	// IMP=0x00000000001c2c00
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2 serviceName:(id)arg3 serviceType:(id)arg4 serviceDomain:(id)arg5 addressResolutionTimeout:(double)arg6 discovery:(id)arg7 accessoryInfo:(id)arg8 coapClient:(id)arg9 coapClientFactory:(id)arg10;	// IMP=0x00000000001c266e
- (id)initWithOperationQueue:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x00000000001c25aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

