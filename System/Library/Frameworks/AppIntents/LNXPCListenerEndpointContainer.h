//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LNAction, MISSING_TYPE, NSData, NSXPCListenerEndpoint;

@interface LNXPCListenerEndpointContainer : NSObject
{
    MISSING_TYPE *listenerEndpoint;	// 8 = 0x8
    MISSING_TYPE *auditTokenData;	// 16 = 0x10
    MISSING_TYPE *resolvedAction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a9de7
- (id)init;	// IMP=0x00000000001a9db1
@property(nonatomic, retain) LNAction *resolvedAction; // @synthesize resolvedAction;
@property(nonatomic, copy) NSData *auditTokenData;
@property(nonatomic, retain) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint;

@end

