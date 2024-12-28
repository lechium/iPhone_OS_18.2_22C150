//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, MISSING_TYPE;

@interface _TtC19CloudRecommendation22RecommendationsFetcher : NSObject
{
    MISSING_TYPE *dataFetchers;	// 8 = 0x8
}

+ (id)shared;	// IMP=0x0040000000016980
- (void).cxx_destruct;	// IMP=0x000000000001a8f0
- (id)init;	// IMP=0x000000000001a830
- (void)fetchClientRecommendationsAsyncFor:(ACAccount *)arg1 shouldIgnoreCache:(_Bool)arg2 completionHandler:(void (^)(NSArray *))arg3;	// IMP=0x000000000001a2f0
- (void)fetchClientRecommendationsFor:(id)arg1 shouldIgnoreCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019ed0
- (void)fetchCompletedRecommendationsFor:(id)arg1 shouldIgnoreCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000019990
- (void)fetchRulesetsAsyncFor:(ACAccount *)arg1 shouldIgnoreCache:(_Bool)arg2 completionHandler:(void (^)(NSDictionary *))arg3;	// IMP=0x00000000000195a0
- (void)fetchRulesetsFor:(id)arg1 shouldIgnoreCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018ce0
- (void)fetchServerRecommendationsAsyncFor:(ACAccount *)arg1 shouldIgnoreCache:(_Bool)arg2 completionHandler:(void (^)(NSArray *))arg3;	// IMP=0x0000000000018840
- (void)fetchServerRecommendationsFor:(id)arg1 shouldIgnoreCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018460
- (void)refreshCacheFor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000180c0
- (void)refreshCacheFor:(id)arg1;	// IMP=0x00000000000169c0

@end
