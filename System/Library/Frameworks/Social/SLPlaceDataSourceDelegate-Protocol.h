//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Social/NSObject-Protocol.h>

@class NSArray, NSError, NSObject;
@protocol SLPlaceDataSource;

@protocol SLPlaceDataSourceDelegate <NSObject>
- (void)placeManager:(NSObject<SLPlaceDataSource> *)arg1 failedWithError:(NSError *)arg2;
- (void)placeManager:(NSObject<SLPlaceDataSource> *)arg1 updatedPlaces:(NSArray *)arg2;
@end

