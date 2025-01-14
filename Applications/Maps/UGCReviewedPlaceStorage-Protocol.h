//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UGCReviewedPlace;

@protocol UGCReviewedPlaceStorage <NSObject>
- (void)removeReviewedPlaceWithMUID:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchReviewedPlaceForMUID:(unsigned long long)arg1 completion:(void (^)(_Bool, UGCReviewedPlace *))arg2;
- (void)addOrEditReviewedPlace:(UGCReviewedPlace *)arg1 completion:(void (^)(NSError *))arg2;
- (void)clearAllUserData;
@end

