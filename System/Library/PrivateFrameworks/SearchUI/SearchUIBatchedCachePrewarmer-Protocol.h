//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NSObject-Protocol.h>

@class NSArray, SearchUIRowModel, TLKAsyncCache;

@protocol SearchUIBatchedCachePrewarmer <NSObject>
@property(readonly) TLKAsyncCache *cacheToPrewarm;
- (NSArray *)itemsToBatchPreFetchForRowModel:(SearchUIRowModel *)arg1;
@end
