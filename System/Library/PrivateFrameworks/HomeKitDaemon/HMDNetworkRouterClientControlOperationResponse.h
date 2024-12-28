//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDNetworkRouterClientConfiguration, HMDNetworkRouterControlOperationStatus, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterClientControlOperationResponse : NSObject
{
    HMDNetworkRouterControlOperationStatus *_status;	// 8 = 0x8
    HMDNetworkRouterClientConfiguration *_configuration;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000076112b
- (void).cxx_destruct;	// IMP=0x0000000000761103
@property(retain, nonatomic) HMDNetworkRouterClientConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) HMDNetworkRouterControlOperationStatus *status; // @synthesize status=_status;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000760e11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000760d83
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000760aa8
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000760721
- (id)initWithStatus:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000760688
- (id)init;	// IMP=0x0000000000760659

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
