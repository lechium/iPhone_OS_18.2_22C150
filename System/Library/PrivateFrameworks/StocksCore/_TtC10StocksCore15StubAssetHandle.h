//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCAssetHandle.h>

@class MISSING_TYPE, NSString;
@protocol FCAssetDataProvider;

__attribute__((visibility("hidden")))
@interface _TtC10StocksCore15StubAssetHandle : FCAssetHandle
{
    MISSING_TYPE *identifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000024ac70
- (id)init;	// IMP=0x000000000024ab80
@property(nonatomic, readonly) NSString *uniqueKey;
@property(nonatomic, readonly) id <FCAssetDataProvider> dataProvider;

@end
