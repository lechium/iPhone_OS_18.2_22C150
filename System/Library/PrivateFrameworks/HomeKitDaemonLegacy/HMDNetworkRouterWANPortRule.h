//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPAddress, HMDNetworkRouterProtocol, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterWANPortRule : NSObject
{
    HMDNetworkRouterProtocol *_protocol;	// 8 = 0x8
    NSString *_hostDNSName;	// 16 = 0x10
    HMDNetworkRouterIPAddress *_hostIPStart;	// 24 = 0x18
    HMDNetworkRouterIPAddress *_hostIPEnd;	// 32 = 0x20
    HAPTLVUnsignedNumberValue *_hostPortStart;	// 40 = 0x28
    HAPTLVUnsignedNumberValue *_hostPortEnd;	// 48 = 0x30
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000052e188
- (void).cxx_destruct;	// IMP=0x000000000052e134
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *hostPortEnd; // @synthesize hostPortEnd=_hostPortEnd;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *hostPortStart; // @synthesize hostPortStart=_hostPortStart;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *hostIPEnd; // @synthesize hostIPEnd=_hostIPEnd;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *hostIPStart; // @synthesize hostIPStart=_hostIPStart;
@property(retain, nonatomic) NSString *hostDNSName; // @synthesize hostDNSName=_hostDNSName;
@property(retain, nonatomic) HMDNetworkRouterProtocol *protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052d9a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000052d873
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000052d20c
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000052cbf5
- (id)initWithProtocol:(id)arg1 hostDNSName:(id)arg2 hostIPStart:(id)arg3 hostIPEnd:(id)arg4 hostPortStart:(id)arg5 hostPortEnd:(id)arg6;	// IMP=0x000000000052cace
- (id)init;	// IMP=0x000000000052ca9f
- (void)addTo:(id)arg1;	// IMP=0x00000000004aaa82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
