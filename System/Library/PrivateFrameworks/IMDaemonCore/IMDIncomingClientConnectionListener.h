//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class MISSING_TYPE;

@interface IMDIncomingClientConnectionListener : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *machServiceName;	// 112 = 0x70
    MISSING_TYPE *allowedEntitlements;	// 128 = 0x80
    MISSING_TYPE *listener;	// 136 = 0x88
    MISSING_TYPE *clients;	// 144 = 0x90
    MISSING_TYPE *requestHandlers;	// 152 = 0x98
    MISSING_TYPE *clientConnectionWorkloop;	// 160 = 0xa0
}

- (id)init;	// IMP=0x000000000022fc50
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000230220

@end
