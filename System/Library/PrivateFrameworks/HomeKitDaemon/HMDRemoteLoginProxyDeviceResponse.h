//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMRemoteLoginMessage.h>

@class AKDevice, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginProxyDeviceResponse : HMRemoteLoginMessage
{
    AKDevice *_proxyDevice;	// 8 = 0x8
}

+ (id)messageName;	// IMP=0x00100000005baa9e
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000005baa96
+ (id)objWithMessage:(id)arg1;	// IMP=0x00100000005ba8d5
+ (id)objWithDict:(id)arg1;	// IMP=0x00100000005ba72e
- (void).cxx_destruct;	// IMP=0x00000000005ba71b
@property(retain, nonatomic) AKDevice *proxyDevice; // @synthesize proxyDevice=_proxyDevice;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005ba65b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005ba5c0
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
