//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC22ActivityAwardsServices19XPCEndpointProvider : NSObject
{
    MISSING_TYPE *listener;	// 8 = 0x8
    MISSING_TYPE *requiredEntitlements;	// 16 = 0x10
    MISSING_TYPE *lock;	// 24 = 0x18
    MISSING_TYPE *endpointsByEndpointName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000a9f0
- (id)init;	// IMP=0x000000000000a290
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000ac60
- (void)createEndpointNamed:(NSString *)arg1 completion:(void (^)(NSXPCListenerEndpoint *, NSError *))arg2;	// IMP=0x000000000000ad90

@end

