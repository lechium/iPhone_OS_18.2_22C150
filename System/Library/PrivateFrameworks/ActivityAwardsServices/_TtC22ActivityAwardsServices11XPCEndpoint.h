//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData;

@interface _TtC22ActivityAwardsServices11XPCEndpoint : NSObject
{
    MISSING_TYPE *listener;	// 8 = 0x8
    MISSING_TYPE *requiredEntitlements;	// 16 = 0x10
    MISSING_TYPE *name;	// 24 = 0x18
    MISSING_TYPE *transportDispatchService;	// 40 = 0x28
    MISSING_TYPE *lock;	// 48 = 0x30
    MISSING_TYPE *connection;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000018a40
- (id)init;	// IMP=0x00000000000189e0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000018ca0
- (void)transportEvent:(unsigned long long)arg1 data:(id)arg2;	// IMP=0x0000000000019140
- (void)transportRequest:(unsigned long long)arg1 data:(NSData *)arg2 completion:(void (^)(NSData *, NSError *))arg3;	// IMP=0x0000000000018dd0

@end
