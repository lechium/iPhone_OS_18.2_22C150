//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString, SKUIReviewConfiguration;

__attribute__((visibility("hidden")))
@interface SKUIPostRatingOperation : ISOperation
{
    NSDictionary *_responseDictionary;	// 96 = 0x60
    NSString *_itemID;	// 104 = 0x68
    long long _rating;	// 112 = 0x70
    SKUIReviewConfiguration *_reviewConfiguration;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000edd47
- (void)run;	// IMP=0x00000000000eda08
@property(readonly) NSDictionary *responseDictionary;
- (id)initWithRating:(long long)arg1 forItemID:(id)arg2 reviewConfiguration:(id)arg3;	// IMP=0x00000000000ed911

@end

