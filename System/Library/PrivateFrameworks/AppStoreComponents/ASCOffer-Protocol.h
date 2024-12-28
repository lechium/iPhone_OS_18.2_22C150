//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSObject-Protocol.h>

@class ASCAdamID, NSArray, NSDictionary, NSNumber;

@protocol ASCOffer <NSObject, NSCopying>
@property(readonly, nonatomic) NSArray *metrics;
@property(readonly, nonatomic) NSNumber *ageRating;
@property(readonly, nonatomic) long long flags;
@property(readonly, copy, nonatomic) NSDictionary *subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles;
@property(readonly, copy, nonatomic) ASCAdamID *id;
- (id)offerWithMetrics:(NSArray *)arg1;
@end
