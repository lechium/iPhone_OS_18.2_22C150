//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SuggestionsItemSource
{
    NSArray *_suggestions;	// 8 = 0x8
    NSArray *_items;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_lockQueue;	// 24 = 0x18
}

+ (long long)itemSourceSubtypeForSuggestionsEntryType:(long long)arg1;	// IMP=0x00400000002f28ea
- (void).cxx_destruct;	// IMP=0x00200000002f2906
@property(copy, nonatomic) NSArray *suggestions;
- (id)allItems;	// IMP=0x00100000002f2342
- (id)init;	// IMP=0x00100000002f2299

@end

