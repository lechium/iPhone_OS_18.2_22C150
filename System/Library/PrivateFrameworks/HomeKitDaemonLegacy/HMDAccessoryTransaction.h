//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDUserManagementOperationTimestamp, NSArray, NSData, NSDate, NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface HMDAccessoryTransaction
{
    NSString *_configuredNetworkProtectionGroupUUIDString;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_configurationTracker;	// 16 = 0x10
}

+ (id)properties;	// IMP=0x0060000000030f17
- (void).cxx_destruct;	// IMP=0x0000000000031ccf
@property(retain, nonatomic) NSObject<OS_dispatch_group> *configurationTracker; // @synthesize configurationTracker=_configurationTracker;
@property(retain, nonatomic) NSString *configuredNetworkProtectionGroupUUIDString; // @synthesize configuredNetworkProtectionGroupUUIDString=_configuredNetworkProtectionGroupUUIDString;
- (id)dependentUUIDs;	// IMP=0x0000000000031acb

// Remaining properties
@property(retain, nonatomic) NSNumber *accessoryCategory; // @dynamic accessoryCategory;
@property(retain, nonatomic) NSArray *appliedFirewallWANRules; // @dynamic appliedFirewallWANRules;
@property(retain, nonatomic) NSString *configuredName; // @dynamic configuredName;
@property(retain, nonatomic) NSNumber *currentNetworkProtectionMode; // @dynamic currentNetworkProtectionMode;
@property(retain, nonatomic) NSString *displayableFirmwareVersion; // @dynamic displayableFirmwareVersion;
@property(retain, nonatomic) NSString *firmwareVersion; // @dynamic firmwareVersion;
@property(retain, nonatomic) NSString *hostAccessoryUUID; // @dynamic hostAccessoryUUID;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSNumber *initialCategoryIdentifier; // @dynamic initialCategoryIdentifier;
@property(retain, nonatomic) NSString *initialManufacturer; // @dynamic initialManufacturer;
@property(retain, nonatomic) NSString *initialModel; // @dynamic initialModel;
@property(retain, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970; // @dynamic lastNetworkAccessViolationOccurrenceSince1970;
@property(retain, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970; // @dynamic lastNetworkAccessViolationResetSince1970;
@property(retain, nonatomic) NSDate *lastSeenDate; // @dynamic lastSeenDate;
@property(retain, nonatomic) NSNumber *lowBattery; // @dynamic lowBattery;
@property(retain, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(retain, nonatomic) NSString *model; // @dynamic model;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *networkClientIdentifier; // @dynamic networkClientIdentifier;
@property(retain, nonatomic) NSNumber *networkClientLAN; // @dynamic networkClientLAN;
@property(retain, nonatomic) NSString *networkClientProfileFingerprint; // @dynamic networkClientProfileFingerprint;
@property(retain, nonatomic) NSString *networkRouterUUID; // @dynamic networkRouterUUID;
@property(retain, nonatomic) HMDUserManagementOperationTimestamp *pairingsAuditedTimestamp; // @dynamic pairingsAuditedTimestamp;
@property(retain, nonatomic) NSString *pendingConfigurationIdentifier; // @dynamic pendingConfigurationIdentifier;
@property(copy) NSUUID *preferredMediaUserUUID; // @dynamic preferredMediaUserUUID;
@property(copy, nonatomic) NSNumber *preferredUserSelectionType; // @dynamic preferredUserSelectionType;
@property(retain, nonatomic) NSString *primaryProfileVersion; // @dynamic primaryProfileVersion;
@property(retain, nonatomic) NSString *productData; // @dynamic productData;
@property(retain, nonatomic) NSString *productDataV2; // @dynamic productDataV2;
@property(retain, nonatomic) NSString *providedName; // @dynamic providedName;
@property(retain, nonatomic) NSString *roomUUID; // @dynamic roomUUID;
@property(retain, nonatomic) NSString *serialNumber; // @dynamic serialNumber;
@property(retain, nonatomic) HMDUserManagementOperationTimestamp *sharedAdminAddedTimestamp; // @dynamic sharedAdminAddedTimestamp;
@property(retain, nonatomic) NSNumber *suspendCapable; // @dynamic suspendCapable;
@property(retain, nonatomic) NSNumber *wiFiCredentialType; // @dynamic wiFiCredentialType;
@property(retain, nonatomic) NSData *wiFiUniquePreSharedKey; // @dynamic wiFiUniquePreSharedKey;

@end
