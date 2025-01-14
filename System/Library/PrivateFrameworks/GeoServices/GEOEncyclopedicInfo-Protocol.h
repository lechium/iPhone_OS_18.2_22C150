//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapItemAttribution, NSArray, NSString;
@protocol GEOFactoid;

@protocol GEOEncyclopedicInfo <NSObject>
@property(readonly, nonatomic) GEOMapItemAttribution *encyclopedicAttribution;
@property(readonly, nonatomic) _Bool hasStandAloneFactoids;
@property(readonly, nonatomic) NSArray *placeSummaryFactoids;
@property(readonly, nonatomic) NSArray *factoids;
@property(readonly, nonatomic) _Bool hasPairOfFactoids;
@property(readonly, nonatomic) NSString *textBlockText;
@property(readonly, nonatomic) NSString *textBlockTitle;
@property(readonly, nonatomic) _Bool hasTextBlock;
- (id <GEOFactoid>)firstFactoidForSemantic:(int)arg1;
- (id <GEOFactoid>)factoidAtIndex:(int)arg1;
@end

