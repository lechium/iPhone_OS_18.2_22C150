//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHClusterSQLiteDataStore;
@protocol SHDataFetcher;

__attribute__((visibility("hidden")))
@interface SHClusterLoader : NSObject
{
    SHClusterSQLiteDataStore *_dataStore;	// 8 = 0x8
    id <SHDataFetcher> _dataFetcher;	// 16 = 0x10
}

+ (void)loadDataForRequest:(id)arg1 storefront:(id)arg2 configuration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0060000000001fe5
- (void).cxx_destruct;	// IMP=0x0000000000002c51
@property(readonly, nonatomic) id <SHDataFetcher> dataFetcher; // @synthesize dataFetcher=_dataFetcher;
@property(readonly, nonatomic) SHClusterSQLiteDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void)loadFromURL:(id)arg1 type:(long long)arg2 storefront:(id)arg3 reuseExistingData:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000000243d
- (id)initWithDataFetcher:(id)arg1 dataStore:(id)arg2;	// IMP=0x00000000000023a4

@end
