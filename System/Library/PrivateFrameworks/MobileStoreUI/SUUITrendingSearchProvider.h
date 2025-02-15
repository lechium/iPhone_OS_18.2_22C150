//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperation, NSOperationQueue, SUUIClientContext, SUUITrendingSearchPage;

__attribute__((visibility("hidden")))
@interface SUUITrendingSearchProvider : NSObject
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    SUUITrendingSearchPage *_cachedSearchPage;	// 24 = 0x18
    NSMutableArray *_pendingCompletionBlocks;	// 32 = 0x20
    NSOperation *_runningRequestOperation;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007f344
@property(retain, nonatomic) NSOperation *runningRequestOperation; // @synthesize runningRequestOperation=_runningRequestOperation;
@property(readonly, nonatomic) NSMutableArray *pendingCompletionBlocks; // @synthesize pendingCompletionBlocks=_pendingCompletionBlocks;
@property(retain, nonatomic) SUUITrendingSearchPage *cachedSearchPage; // @synthesize cachedSearchPage=_cachedSearchPage;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) __weak SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)clearCache;	// IMP=0x000000000007f2d0
- (void)trendingSearchPageWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f17f
- (void)requestTrendingSearchPageWithURL:(id)arg1;	// IMP=0x000000000007eded
@property(readonly, nonatomic) NSOperationQueue *callbackQueue;
- (id)requestOperationWithPageURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000007ed2e
- (void)dealloc;	// IMP=0x000000000007ecb9
- (id)initWithClientContext:(id)arg1;	// IMP=0x000000000007eb2d

@end

