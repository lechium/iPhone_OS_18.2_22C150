//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSDictionary;

@interface _TtC9Calculate26StocksKitCurrencyCacheImpl
{
    MISSING_TYPE *currencyDataLock;	// 8 = 0x8
    MISSING_TYPE *lastRefreshDateLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002f5a0
- (id)init;	// IMP=0x000000000002f520
@property(nonatomic, readonly) NSDictionary *currencyData;
@property(nonatomic, readonly) _Bool needsRefresh;
- (_Bool)refreshSynchronously;	// IMP=0x000000000002d7d0
- (_Bool)refreshSynchronouslyWithTimeout:(double)arg1;	// IMP=0x000000000002d780
- (void)refreshWithTimeout:(double)arg1 completionHandler:(void (^)(_Bool))arg2;	// IMP=0x000000000002cb10
- (void)refreshWithCompletionHandler:(void (^)(_Bool))arg1;	// IMP=0x000000000002c580

@end

