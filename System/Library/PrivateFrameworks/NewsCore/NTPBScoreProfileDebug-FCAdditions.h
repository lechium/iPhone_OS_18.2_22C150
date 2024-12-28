//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsTransport/NTPBScoreProfileDebug.h>

@class NSDictionary, NSString;

@interface NTPBScoreProfileDebug (FCAdditions)
@property(retain, nonatomic) NSString *scoringAssetsIdentifier;
@property(retain, nonatomic) NSDictionary *featureWeightsByID;
@property(retain, nonatomic) NSDictionary *tagWeightsByID;
@property(retain, nonatomic) NSDictionary *contentTriggerScores;
@property(retain, nonatomic) NSDictionary *nicheContentScores;

// Remaining properties
@property(nonatomic) long long scoringContext;
@property(nonatomic) unsigned long long scoringType;
@end
