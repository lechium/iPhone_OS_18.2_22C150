//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPAccessory, HMFConnectivityInfo, NSArray, NSData, NSDate, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDHAPAccessoryTransaction
{
    HAPAccessory *_hapAccessoryLocal;	// 8 = 0x8
}

+ (id)properties;	// IMP=0x006000000041ed83
- (void).cxx_destruct;	// IMP=0x00000000004200f2
@property(retain, nonatomic) HAPAccessory *hapAccessoryLocal; // @synthesize hapAccessoryLocal=_hapAccessoryLocal;
@property(copy, nonatomic) NSSet *chipPairings;
- (id)dependentUUIDs;	// IMP=0x000000000041f8e2

// Remaining properties
@property(retain, nonatomic) NSNumber *accessoryFlags; // @dynamic accessoryFlags;
@property(retain, nonatomic) NSData *accessorySetupHash; // @dynamic accessorySetupHash;
@property(retain, nonatomic) NSString *bridgeUUID; // @dynamic bridgeUUID;
@property(retain, nonatomic) NSData *broadcastKey; // @dynamic broadcastKey;
@property(retain, nonatomic) NSNumber *certificationStatus; // @dynamic certificationStatus;
@property(retain, nonatomic) NSData *chipAttributeDatabase; // @dynamic chipAttributeDatabase;
@property(retain, nonatomic) NSString *chipExtendedMACAddress; // @dynamic chipExtendedMACAddress;
@property(retain, nonatomic) NSNumber *chipNodeID; // @dynamic chipNodeID;
@property(retain, nonatomic) NSData *chipPairingsData; // @dynamic chipPairingsData;
@property(retain, nonatomic) NSNumber *chipProductID; // @dynamic chipProductID;
@property(retain, nonatomic) NSNumber *chipVendorID; // @dynamic chipVendorID;
@property(retain, nonatomic) NSNumber *chipWEDSupport; // @dynamic chipWEDSupport;
@property(retain, nonatomic) NSNumber *communicationProtocol; // @dynamic communicationProtocol;
@property(retain, nonatomic) HMFConnectivityInfo *connectivityInfo; // @dynamic connectivityInfo;
@property(retain, nonatomic) NSNumber *hardwareSupport; // @dynamic hardwareSupport;
@property(retain, nonatomic) NSNumber *hasOnboardedForNaturalLighting; // @dynamic hasOnboardedForNaturalLighting;
@property(copy, nonatomic) NSSet *initialServiceTypeUUIDs; // @dynamic initialServiceTypeUUIDs;
@property(retain, nonatomic) NSNumber *keyUpdatedStateNumber; // @dynamic keyUpdatedStateNumber;
@property(retain, nonatomic) NSDate *keyUpdatedTime; // @dynamic keyUpdatedTime;
@property(retain, nonatomic) NSNumber *matterSoftwareVersionNumber; // @dynamic matterSoftwareVersionNumber;
@property(retain, nonatomic) NSNumber *needsOnboarding; // @dynamic needsOnboarding;
@property(retain, nonatomic) NSString *pairingUsername; // @dynamic pairingUsername;
@property(retain, nonatomic) NSData *publicKey; // @dynamic publicKey;
@property(retain, nonatomic) NSNumber *sleepInterval; // @dynamic sleepInterval;
@property(retain, nonatomic) NSNumber *supportedLinkLayerTypes; // @dynamic supportedLinkLayerTypes;
@property(retain, nonatomic) NSNumber *suspendedState; // @dynamic suspendedState;
@property(retain, nonatomic) NSArray *targetUUIDs; // @dynamic targetUUIDs;
@property(retain, nonatomic) NSArray *transportInformation; // @dynamic transportInformation;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(retain, nonatomic) NSNumber *wiFiTransportCapabilities; // @dynamic wiFiTransportCapabilities;

@end
