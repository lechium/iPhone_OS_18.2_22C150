//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC11SessionCore34ProminenceObservationServiceServer : NSObject
{
    MISSING_TYPE *requestProcessingQueue;	// 8 = 0x8
    MISSING_TYPE *listener;	// 16 = 0x10
    MISSING_TYPE *lock;	// 24 = 0x18
    MISSING_TYPE *_lock_clients;	// 32 = 0x20
    MISSING_TYPE *_lock_prominentActivityIdentifiers;	// 40 = 0x28
    MISSING_TYPE *prominenceSubscription;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000002dc90
- (id)init;	// IMP=0x000000000002dc40
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000002dbc0

@end

