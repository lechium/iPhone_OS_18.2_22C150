//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCloudPairedMetadata : HMFObject
{
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_baseAccessoryIdentifier;	// 8 = 0x8
    NSArray *_versionConfigurations;	// 16 = 0x10
}

+ (id)_decodeVersionConfigurationsFromJSONDictionary:(id)arg1 baseAccessoryIdentifier:(id)arg2 allowUnzippedData:(_Bool)arg3;	// IMP=0x0010000000adfc01
+ (id)__decodeVersionConfigurationWithVersionString:(id)arg1 versionConfigurationValue:(id)arg2 baseAccessoryIdentifier:(id)arg3;	// IMP=0x0010000000adf8c5
+ (id)logCategory;	// IMP=0x0010000000adf895
- (void).cxx_destruct;	// IMP=0x0000000000adf864
@property(readonly, nonatomic) NSArray *versionConfigurations; // @synthesize versionConfigurations=_versionConfigurations;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *baseAccessoryIdentifier; // @synthesize baseAccessoryIdentifier=_baseAccessoryIdentifier;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;	// IMP=0x0000000000adf4a5
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2 allowUnzippedData:(_Bool)arg3;	// IMP=0x0000000000adf18f
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2;	// IMP=0x0000000000adf17a
- (id)initWithBaseAccessoryIdentifier:(id)arg1 versionConfigurations:(id)arg2;	// IMP=0x0000000000adf0c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

