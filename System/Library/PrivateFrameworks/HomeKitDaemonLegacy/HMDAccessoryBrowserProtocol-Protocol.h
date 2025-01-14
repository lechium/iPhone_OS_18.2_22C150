//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HAPAccessoryServer, HAPSocketInfo, HMDMatterAccessoryPairingEndContext, HMDMediaBrowser, HMDUnassociatedAccessory, HMDUnpairedHAPAccessory, HMDUnpairedHAPAccessoryConfiguration, HMMTRAccessoryServerBrowser, HMSetupAccessoryDescription, NSArray, NSData, NSDictionary, NSError, NSSet, NSString, NSUUID;
@protocol HMDAccessoryBrowserDelegate, HMDAccessoryBrowserHapProtocol, NSObject;

@protocol HMDAccessoryBrowserProtocol <NSObject>
@property(readonly, nonatomic) HMDMediaBrowser *mediaBrowser;
@property(readonly, nonatomic) _Bool hasActiveWACPairing;
@property(readonly) HMMTRAccessoryServerBrowser *chipAccessoryServerBrowser;
@property(readonly, nonatomic) _Bool active;
@property(readonly, copy) NSArray *unassociatedAccessories;
- (void)handleConnectionUpdateWithBonjourDeviceInfo:(NSDictionary *)arg1 socketInfo:(HAPSocketInfo *)arg2;
- (void)updatePairingWithProgress:(long long)arg1 accessoryServer:(HAPAccessoryServer *)arg2;
- (void)setBrowseableLinkTypes:(NSArray *)arg1;
- (void)removePairingInformationForAccessoryServer:(HAPAccessoryServer *)arg1;
- (HMDUnpairedHAPAccessory *)unpairedHAPAccessoryWithAccessoryDescription:(HMSetupAccessoryDescription *)arg1;
- (void)removeUnassociatedAccessoryWithIdentifier:(NSString *)arg1;
- (void)removeUnassociatedAccessory:(HMDUnassociatedAccessory *)arg1;
- (void)addUnassociatedAccessory:(HMDUnassociatedAccessory *)arg1 forDeviceSetup:(_Bool)arg2;
- (id <HMDAccessoryBrowserHapProtocol>)accessoryBrowserHapProtocol;
- (void)currentlyFoundHAPAccessoryServerWithIdentifier:(NSString *)arg1 linkType:(long long)arg2 completion:(void (^)(HAPAccessoryServer *))arg3;
- (void)handleNewlyPairedAccessory:(NSString *)arg1 linkType:(long long)arg2;
- (_Bool)isBrowsingAllowed;
- (void)discoverAccessoryServer:(NSString *)arg1 linkType:(long long)arg2 errorHandler:(void (^)(NSError *))arg3;
- (void)discoverAccessories:(HAPAccessoryServer *)arg1;
- (NSString *)dumpBrowsingConnections;
- (NSString *)dumpRegisteredPairedAccessories;
- (NSDictionary *)dumpUnassociatedAccessories;
- (NSSet *)discoveredAccessoryServers;
- (void)reprovisionAccessoryWithIdentifier:(NSString *)arg1 wiFiPSK:(NSData *)arg2 countryCode:(NSString *)arg3 withCompletion:(void (^)(NSError *))arg4;
- (void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(NSArray *)arg1 forceScan:(_Bool)arg2 withCompletion:(void (^)(NSString *, _Bool))arg3;
- (void)addUnpairedAccessoryServer:(HAPAccessoryServer *)arg1 identifier:(NSString *)arg2;
- (void)resurrectAccessoryServer:(HAPAccessoryServer *)arg1;
- (void)tombstoneAccessoryServer:(HAPAccessoryServer *)arg1;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(NSArray *)arg1;
- (void)btleAccessoryReachabilityProbeTimer:(_Bool)arg1;
- (void)deregisterPairedAccessory:(NSString *)arg1;
- (void)registerPairedAccessory:(NSString *)arg1 transports:(unsigned long long)arg2 setupHash:(NSData *)arg3 delegate:(id <HMDAccessoryBrowserDelegate>)arg4;
- (void)resetConfiguration;
- (void)cancelPairingWithAccessoryDescription:(HMSetupAccessoryDescription *)arg1 error:(NSError *)arg2 context:(HMDMatterAccessoryPairingEndContext *)arg3;
- (void)cancelPairingWithAccessoryDescription:(HMSetupAccessoryDescription *)arg1 error:(NSError *)arg2;
- (void)cancelPairingWithAccessory:(HMDUnpairedHAPAccessory *)arg1 error:(NSError *)arg2 context:(HMDMatterAccessoryPairingEndContext *)arg3;
- (void)handleSetupCodeAvailable:(HMDUnpairedHAPAccessory *)arg1;
- (void)didReceiveUserConsentResponseForSetupAccessoryDetail:(HMSetupAccessoryDescription *)arg1 consent:(_Bool)arg2;
- (void)pairAccessoryWithDescription:(HMSetupAccessoryDescription *)arg1 configuration:(HMDUnpairedHAPAccessoryConfiguration *)arg2 progressHandler:(void (^)(long long, HMDAddAccessoryProgressState *))arg3 completionHandler:(void (^)(HAPAccessoryServer *, NSUUID *, long long, _Bool, _Bool, NSError *, HMDMatterAccessoryPairingEndContext *))arg4;
- (void)pairAccessory:(HMDUnpairedHAPAccessory *)arg1 configuration:(HMDUnpairedHAPAccessoryConfiguration *)arg2 completionHandler:(void (^)(HAPAccessoryServer *, NSUUID *, long long, _Bool, _Bool, NSError *, HMDMatterAccessoryPairingEndContext *))arg3;
- (void)registerProgressHandler:(void (^)(long long, HMDAddAccessoryProgressState *))arg1 unpairedAccessoryUUID:(NSUUID *)arg2;
- (void)restartBrowsers;
- (void)evaluateAccessoryDiscoveryState;
- (void)startDiscoveringAccessoriesNeedingReprovisioning;
- (void)startDiscoveringPairedAccessoriesWithLinkType:(long long)arg1;
- (void)startDiscoveringPairedAccessories;
- (void)stopDiscoveringForUnpairedAccessoriesWithLinkType:(long long)arg1;
- (void)stopDiscoveringAccessoriesWithLinkType:(long long)arg1;
- (void)stopDiscoveringAccessories;
- (void)startDiscoveringAccessoriesWithLinkType:(long long)arg1;
- (void)startDiscoveringAccessories;
- (_Bool)isDiscoveringAccessoriesWithLinkType:(long long)arg1;
- (void)endActiveAssertion:(id <NSObject>)arg1;
- (id <NSObject>)beginActiveAssertionWithReason:(NSString *)arg1;
- (HMDUnpairedHAPAccessory *)unpairedAccessoryWithUUID:(NSUUID *)arg1;
- (void)activate:(_Bool)arg1;
- (void)setQOS:(long long)arg1;
@end

