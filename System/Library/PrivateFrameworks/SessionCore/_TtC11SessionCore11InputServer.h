//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11SessionCore11InputServer : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *queue;	// 24 = 0x18
    MISSING_TYPE *listener;	// 32 = 0x20
    MISSING_TYPE *lock;	// 40 = 0x28
    MISSING_TYPE *activityAuthorizer;	// 48 = 0x30
    MISSING_TYPE *backoffPolicy;	// 88 = 0x58
    MISSING_TYPE *pushServer;	// 128 = 0x80
    MISSING_TYPE *clients;	// 160 = 0xa0
    MISSING_TYPE *knownClientStore;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000000027c0
- (id)init;	// IMP=0x0000000000002760
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x00000000000026e0

@end

