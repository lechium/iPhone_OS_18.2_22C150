//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, _CPEngagementShareRatio, _CPEngagementTriggerRatio;

@protocol _CPSafariUsagePropensity <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _CPEngagementShareRatio *engagementShareRatio;
@property(nonatomic) int totalTopHitEngagements;
@property(retain, nonatomic) _CPEngagementTriggerRatio *topHitTriggerRatio;
@property(nonatomic) int totalEngagements;
@property(nonatomic) float parsecOther;
@property(nonatomic) float parsecWeather;
@property(nonatomic) float parsecStocks;
@property(nonatomic) float parsecNews;
@property(nonatomic) float parsecWiki;
@property(nonatomic) float parsecMaps;
@property(nonatomic) float parsecAppStore;
@property(nonatomic) float parsecWeb;
@property(nonatomic) float other;
@property(nonatomic) float goToSite;
@property(nonatomic) float thirdPartyCompletionOrRecentSearch;
@property(nonatomic) float thirdPartyTap;
@property(nonatomic) float thirdPartyGoto;
@property(nonatomic) float parsecTap;
@property(nonatomic) float parsecGoto;
@property(nonatomic) float localTap;
@property(nonatomic) float localGoto;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

