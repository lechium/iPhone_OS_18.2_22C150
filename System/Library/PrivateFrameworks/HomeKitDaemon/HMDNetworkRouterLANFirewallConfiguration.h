//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDNetworkRouterLANFirewall, HMDNetworkRouterLANFirewallRuleList, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterLANFirewallConfiguration : NSObject
{
    HMDNetworkRouterLANFirewall *_type;	// 8 = 0x8
    HMDNetworkRouterLANFirewallRuleList *_ruleList;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000075a1a0
+ (id)configurationFromFirewallRuleConfiguration:(id)arg1;	// IMP=0x00100000006c8ccb
+ (id)configurationWithFullAccess;	// IMP=0x00100000006c8c3a
- (void).cxx_destruct;	// IMP=0x0000000000750646
@property(retain, nonatomic) HMDNetworkRouterLANFirewallRuleList *ruleList; // @synthesize ruleList=_ruleList;
@property(retain, nonatomic) HMDNetworkRouterLANFirewall *type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000750354
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007502c6
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000074ffeb
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000074fc64
- (id)initWithType:(id)arg1 ruleList:(id)arg2;	// IMP=0x000000000074fbcb
- (id)init;	// IMP=0x000000000074fb9c
- (void)addRulesFromFirewallConfiguration:(id)arg1;	// IMP=0x00000000006c7051

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

