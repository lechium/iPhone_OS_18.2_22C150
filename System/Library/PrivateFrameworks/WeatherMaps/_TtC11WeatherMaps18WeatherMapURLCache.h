//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLCache.h>

@class NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface _TtC11WeatherMaps18WeatherMapURLCache : NSURLCache
{
}

- (id)init;	// IMP=0x0000000000122e68
- (id)initWithMemoryCapacity:(long long)arg1 diskCapacity:(long long)arg2 directoryURL:(id)arg3;	// IMP=0x0000000000122dae
- (id)initWithMemoryCapacity:(long long)arg1 diskCapacity:(long long)arg2 diskPath:(id)arg3;	// IMP=0x0000000000122c89
- (void)getCachedResponseForDataTask:(NSURLSessionDataTask *)arg1 completionHandler:(void (^)(NSCachedURLResponse *))arg2;	// IMP=0x00000000001229af
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;	// IMP=0x0000000000122585
- (id)cachedResponseForRequest:(id)arg1;	// IMP=0x0000000000122390
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;	// IMP=0x000000000012223e

@end
