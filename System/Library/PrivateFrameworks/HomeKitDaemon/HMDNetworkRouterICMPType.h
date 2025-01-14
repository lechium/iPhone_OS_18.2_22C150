//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPProtocolVersion, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterICMPType : NSObject
{
    HMDNetworkRouterIPProtocolVersion *_protocol;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_typeValue;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000007540f6
+ (id)typeFromICMPType:(id)arg1;	// IMP=0x00100000006c93d1
- (void).cxx_destruct;	// IMP=0x00000000007540ce
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *typeValue; // @synthesize typeValue=_typeValue;
@property(retain, nonatomic) HMDNetworkRouterIPProtocolVersion *protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000753ddc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000753d4e
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000753a73
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007536ec
- (id)initWithProtocol:(id)arg1 typeValue:(id)arg2;	// IMP=0x0000000000753653
- (id)init;	// IMP=0x0000000000753624

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

