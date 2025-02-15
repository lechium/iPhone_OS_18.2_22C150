//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REExportedInterface-Protocol.h>

@class NSString;

@protocol REMLModelProperties <REExportedInterface>
@property(readonly, nonatomic) unsigned long long totalPositiveCount;
@property(readonly, nonatomic) unsigned long long totalExampleCount;
@property(readonly, nonatomic) float normalizedEntropy;
@property(readonly, nonatomic) float averagePrediction;
@property(readonly, nonatomic) long long getNumberOfCoordinates;
@property(readonly, nonatomic) unsigned long long maxFeatureCount;
@property(readonly, nonatomic) unsigned long long featureBitWidth;
@property(readonly, nonatomic) float simulationExploreExploitModulator;
@property(readonly, nonatomic) float priorMean;
@property(readonly, nonatomic) float exploreExploitModulator;
@property(readonly, nonatomic) _Bool allowsExploreExploit;
@property(readonly, nonatomic) NSString *name;
@end

