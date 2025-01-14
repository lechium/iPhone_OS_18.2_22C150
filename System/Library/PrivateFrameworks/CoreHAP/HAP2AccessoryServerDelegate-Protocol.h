//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPAccessoryPairingRequest, HAPPairingIdentity, NSData, NSError, NSString;
@protocol HAP2AccessoryServer;

@protocol HAP2AccessoryServerDelegate <NSObject>
@property(readonly) HAPAccessoryPairingRequest *pairingRequest;
- (_Bool)onDemandConnectionsAreEnabled;
- (HAPPairingIdentity *)currentIdentity;
- (void)associateAccessoryWithControllerKeyUsingAccessoryIdentifier:(NSString *)arg1;
- (void)associateAccessoryWithControllerKeyUsingAccessoryPublicKey:(NSData *)arg1;
- (_Bool)shouldRetryPVDueToAuthenticationError:(NSError *)arg1;
- (void)initializeKeyBagIfNecessary;

@optional
- (void)setSessionInfoWithNumIPsResolved:(unsigned long long)arg1 numIPsTried:(unsigned long long)arg2 numBonjourNames:(unsigned long long)arg3;
- (void)accessoryServerDidUpdateCategory:(id <HAP2AccessoryServer>)arg1;
- (void)accessoryServerDidUpdateName:(id <HAP2AccessoryServer>)arg1;
- (void)accessoryServerDidUpdateHasPairings:(id <HAP2AccessoryServer>)arg1;
- (void)accessoryServerConnectionFailureReportWithError:(NSError *)arg1;
- (void)accessoryServerConnectedWithSecureSession;
- (void)accessoryServerDidUpdateConnectionState:(id <HAP2AccessoryServer>)arg1;
@end

