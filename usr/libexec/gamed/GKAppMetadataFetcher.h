//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface GKAppMetadataFetcher : NSObject
{
    MISSING_TYPE *cache;	// 8 = 0x8
    MISSING_TYPE *network;	// 24 = 0x18
}

+ (id)createFor:(id)arg1 language:(id)arg2 bag:(id)arg3 error:(id *)arg4;	// IMP=0x002000000019cf3b
- (void).cxx_destruct;	// IMP=0x004000000019f51c
- (id)init;	// IMP=0x001000000019f4e9
- (void)fetchWithBundleIDs:(NSArray *)arg1 adamIDs:(NSArray *)arg2 batchSize:(long long)arg3 ttl:(double)arg4 refreshExpiredCompletion:(void (^)(NSDictionary *))arg5 completionHandler:(void (^)(NSDictionary *, NSError *))arg6;	// IMP=0x001000000019e256

@end
