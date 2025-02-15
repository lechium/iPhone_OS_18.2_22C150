//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDNetworkRouterICMPTypeList, HMDNetworkRouterIPAddress, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterWANICMPRule : NSObject
{
    NSString *_hostDNSName;	// 8 = 0x8
    HMDNetworkRouterIPAddress *_hostIPStart;	// 16 = 0x10
    HMDNetworkRouterIPAddress *_hostIPEnd;	// 24 = 0x18
    HMDNetworkRouterICMPTypeList *_icmpTypes;	// 32 = 0x20
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000075cb52
- (void).cxx_destruct;	// IMP=0x000000000075cb14
@property(retain, nonatomic) HMDNetworkRouterICMPTypeList *icmpTypes; // @synthesize icmpTypes=_icmpTypes;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *hostIPEnd; // @synthesize hostIPEnd=_hostIPEnd;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *hostIPStart; // @synthesize hostIPStart=_hostIPStart;
@property(retain, nonatomic) NSString *hostDNSName; // @synthesize hostDNSName=_hostDNSName;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000075c5ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000075c50f
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000075c070
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000075bbbe
- (id)initWithHostDNSName:(id)arg1 hostIPStart:(id)arg2 hostIPEnd:(id)arg3 icmpTypes:(id)arg4;	// IMP=0x000000000075bad6
- (id)init;	// IMP=0x000000000075baa7
- (void)addTo:(id)arg1;	// IMP=0x00000000006c6da5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

