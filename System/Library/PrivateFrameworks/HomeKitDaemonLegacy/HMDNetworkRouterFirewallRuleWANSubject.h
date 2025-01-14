//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNetworkRouterFirewallRuleWANAddressRange, NSArray;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject
{
    NSArray *_hostnames;	// 8 = 0x8
    NSArray *_addresses;	// 16 = 0x10
    HMDNetworkRouterFirewallRuleWANAddressRange *_addressRange;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008e6f3c
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleWANAddressRange *addressRange; // @synthesize addressRange=_addressRange;
@property(readonly, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(readonly, nonatomic) NSArray *hostnames; // @synthesize hostnames=_hostnames;
- (id)prettyJSONDictionary;	// IMP=0x00000000008e6d0f
- (id)attributeDescriptions;	// IMP=0x00000000008e6b91
- (unsigned long long)hash;	// IMP=0x00000000008e6ad0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008e6918
- (id)initWithHostnames:(id)arg1 addresses:(id)arg2 addressRange:(id)arg3;	// IMP=0x00000000008e6842

@end

