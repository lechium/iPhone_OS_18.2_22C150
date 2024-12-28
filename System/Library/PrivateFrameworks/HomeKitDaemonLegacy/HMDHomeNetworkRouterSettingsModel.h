//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeNetworkRouterSettingsModel
{
}

+ (id)properties;	// IMP=0x00600000005e9c74
+ (id)defaultModelForHomeUUID:(id)arg1;	// IMP=0x00600000005e9be8
+ (id)modelIDForHomeUUID:(id)arg1;	// IMP=0x00600000005e9b04
+ (id)modelNamespace;	// IMP=0x00600000005e9ad4
- (id)dependentUUIDs;	// IMP=0x00000000005e998e

// Remaining properties
@property(copy, nonatomic) NSString *activeNetworkRouterAccessoryUUID; // @dynamic activeNetworkRouterAccessoryUUID;
@property(copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID; // @dynamic activeNetworkRouterInitialSetupNeededUUID;
@property(copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange; // @dynamic minHomeKitVersionForAccessoryNetworkProtectionChange;
@property(copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion; // @dynamic minimumNetworkRouterSupportHomeKitVersion;

@end
