//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC14GameDaemonCoreP33_1FC4D10440B9DF42E57D244557C7E23B19EntityCacheProvider : _TtCs12_SwiftObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *inMemory;	// 112 = 0x70
    MISSING_TYPE *caches;	// 120 = 0x78
}

- (void)deleteAllCachesWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x00200000001c88fb
- (void)deleteCacheWithPlayerID:(NSString *)arg1 language:(NSString *)arg2 completionHandler:(void (^)(void))arg3;	// IMP=0x00100000001c85b5
- (void)getCacheWithPlayerID:(NSString *)arg1 language:(NSString *)arg2 completionHandler:(void (^)(id <GKEntityCacheProtocol>))arg3;	// IMP=0x00100000001c80fb

@end
