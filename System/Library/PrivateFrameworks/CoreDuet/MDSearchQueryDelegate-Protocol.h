//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/NSObject-Protocol.h>

@class MDSearchQuery, NSArray, NSError;

@protocol MDSearchQueryDelegate <NSObject>
- (void)searchQuery:(MDSearchQuery *)arg1 didReturnItems:(NSArray *)arg2;

@optional
- (void)searchQuery:(MDSearchQuery *)arg1 didFailWithError:(NSError *)arg2;
- (void)searchQuery:(MDSearchQuery *)arg1 statusChanged:(unsigned long long)arg2;
@end
