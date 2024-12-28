//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSUUID;

@interface IDSPairedDevice : NSObject
{
    NSDictionary *_properties;	// 8 = 0x8
    NSNumber *_pairingProtocolVersion;	// 16 = 0x10
    NSNumber *_minCompatibilityVersion;	// 24 = 0x18
    NSNumber *_maxCompatibilityVersion;	// 32 = 0x20
    NSNumber *_serviceMinCompatibilityVersion;	// 40 = 0x28
}

+ (id)localIdentitiesFromIdentities:(id)arg1;	// IMP=0x0040000000270b3f
+ (id)iCloudIdentitiesFromIdentities:(id)arg1;	// IMP=0x001000000027092a
- (void).cxx_destruct;	// IMP=0x00200000002714c4
- (id)description;	// IMP=0x0010000000271393
@property(readonly, nonatomic) _Bool isPairing;
@property(readonly, nonatomic) _Bool hasAllPublicKeys;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) unsigned int serviceMinCompatibilityVersion;
@property(readonly, nonatomic) unsigned int maxCompatibilityVersion;
@property(readonly, nonatomic) unsigned int minCompatibilityVersion;
@property(readonly, nonatomic) unsigned int pairingProtocolVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *buildVersion;
@property(readonly, nonatomic) NSDictionary *privateData;
@property(readonly, nonatomic) NSArray *iCloudURIs;
@property(readonly, nonatomic) NSArray *localIdentities;
@property(readonly, nonatomic) NSArray *iCloudIdentities;
- (id)identities;	// IMP=0x000000000027090a
@property(readonly, nonatomic) NSData *pushToken;
@property(readonly, nonatomic) NSData *publicClassDKey;
@property(readonly, nonatomic) NSData *publicClassCKey;
@property(readonly, nonatomic) NSData *publicClassAKey;
@property(readonly, nonatomic) long long pairingType;
@property(readonly, nonatomic) _Bool supportIPsec;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) NSUUID *cbuuidUUID;
@property(readonly, nonatomic) NSString *cbuuid;
- (id)persistedProperties;	// IMP=0x00100000002706cd
- (id)initWithProperties:(id)arg1;	// IMP=0x00100000002706a2
- (id)pairedDeviceWithoutSecuredEncryptionKeys;	// IMP=0x00100000002705a3
- (id)initWithPairedDevice:(id)arg1 iCloudURIs:(id)arg2 pushToken:(id)arg3;	// IMP=0x00100000002701f0
- (id)initWithPairedDevice:(id)arg1 pairingType:(long long)arg2;	// IMP=0x00100000002700c0
- (id)initWithPairedDevice:(id)arg1 supportIPsec:(_Bool)arg2;	// IMP=0x001000000026ff8f
- (id)initWithPairedDevice:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x001000000026fe5e
- (id)initWithPairedDevice:(id)arg1 deviceInfoPayload:(id)arg2;	// IMP=0x001000000026f816
- (id)initWithPairedDevice:(id)arg1 capabilityFlags:(unsigned long long)arg2;	// IMP=0x001000000026f76c
- (id)initWithPairedDevice:(id)arg1 deviceUniqueID:(id)arg2 pairingProtocolVersion:(unsigned int)arg3 minCompatibilityVersion:(unsigned int)arg4 maxCompatibilityVersion:(unsigned int)arg5 serviceMinCompatibilityVersion:(unsigned short)arg6 privateData:(id)arg7;	// IMP=0x001000000026f559
- (id)initWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x001000000026f291
- (id)initWithProperties:(id)arg1 pairingProtocolVersion:(id)arg2 minCompatibilityVersion:(id)arg3 maxCompatibilityVersion:(id)arg4 serviceMinCompatibilityVersion:(id)arg5;	// IMP=0x001000000026f042

@end
