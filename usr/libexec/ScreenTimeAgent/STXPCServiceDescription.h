//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCInterface;

@interface STXPCServiceDescription : NSObject
{
    NSString *_serviceName;	// 8 = 0x8
    NSString *_serviceEntitlement;	// 16 = 0x10
    NSXPCInterface *_exportedInterface;	// 24 = 0x18
    long long _type;	// 32 = 0x20
}

+ (id)anonymousDescriptionWithServiceName:(id)arg1 serviceEntitlement:(id)arg2 exportedProtocol:(id)arg3;	// IMP=0x00400000000c2602
+ (id)machDescriptionWithServiceName:(id)arg1 serviceEntitlement:(id)arg2 exportedInterface:(id)arg3;	// IMP=0x00100000000c256f
+ (id)machDescriptionWithServiceName:(id)arg1 serviceEntitlement:(id)arg2 exportedProtocol:(id)arg3;	// IMP=0x00100000000c24ad
- (void).cxx_destruct;	// IMP=0x00200000000c270d
@property(readonly) long long type; // @synthesize type=_type;
@property(readonly) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(readonly, copy) NSString *serviceEntitlement; // @synthesize serviceEntitlement=_serviceEntitlement;
@property(readonly, copy) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)description;	// IMP=0x00100000000c23d5
- (id)_initWithServiceName:(id)arg1 serviceEntitlement:(id)arg2 exportedInterface:(id)arg3 type:(long long)arg4;	// IMP=0x00100000000c22f1

@end

