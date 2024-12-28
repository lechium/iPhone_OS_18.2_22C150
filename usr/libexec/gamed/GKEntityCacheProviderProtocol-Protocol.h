//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol GKEntityCacheProviderProtocol
- (void)getCacheWithPlayerID:(NSString *)arg1 language:(NSString *)arg2 completionHandler:(void (^)(id <GKEntityCacheProtocol>))arg3;
- (void)deleteAllCachesWithCompletionHandler:(void (^)(void))arg1;
- (void)deleteCacheWithPlayerID:(NSString *)arg1 language:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
@end
