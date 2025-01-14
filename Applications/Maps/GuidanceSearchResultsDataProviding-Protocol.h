//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOFeatureStyleAttributes, NSError, NSString;
@protocol NavigationRouteHistoryInfoProviding;

@protocol GuidanceSearchResultsDataProviding <NSObject>
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (void)loadSearchResultsWithRouteInfo:(id <NavigationRouteHistoryInfoProviding>)arg1 completion:(void (^)(NSArray *, NSError *))arg2;

@optional
- (NSError *)error;
- (_Bool)hasValidSearchResults;
@end

