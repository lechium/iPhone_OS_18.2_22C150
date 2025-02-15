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

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000523f96
+ (id)typeFromICMPType:(id)arg1;	// IMP=0x00100000004ad159
- (void).cxx_destruct;	// IMP=0x0000000000523f6e
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *typeValue; // @synthesize typeValue=_typeValue;
@property(retain, nonatomic) HMDNetworkRouterIPProtocolVersion *protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000523c7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000523bee
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000523913
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000052358c
- (id)initWithProtocol:(id)arg1 typeValue:(id)arg2;	// IMP=0x00000000005234f3
- (id)init;	// IMP=0x00000000005234c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

