//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ASReachabilityStatusCache : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableDictionary *_cache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003fcee
- (void)addStatusesByDestination:(id)arg1;	// IMP=0x000000000003fc43
- (void)setStatus:(id)arg1 forDestination:(id)arg2;	// IMP=0x000000000003fb67
- (id)statusesForDestinations:(id)arg1;	// IMP=0x000000000003f869
- (id)statusForDestination:(id)arg1;	// IMP=0x000000000003f660
- (id)init;	// IMP=0x000000000003f5d5

@end

