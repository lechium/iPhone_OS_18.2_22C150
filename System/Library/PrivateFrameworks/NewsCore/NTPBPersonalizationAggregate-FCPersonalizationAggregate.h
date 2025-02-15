//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsTransport/NTPBPersonalizationAggregate.h>

@class NSDate, NSDictionary, NSString;

@interface NTPBPersonalizationAggregate (FCPersonalizationAggregate)
- (double)_personalizationValueWithBaselineClicks:(double)arg1 baselineImpressions:(double)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;	// IMP=0x0020000000343ddd
- (double)relativePersonalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayFactor:(double)arg3 baselineClicksMultiplier:(double)arg4;	// IMP=0x0020000000343d2d
- (double)powerWithDecayFactor:(double)arg1;	// IMP=0x0020000000343cfc
@property(readonly, nonatomic) double confidence;
- (double)personalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;	// IMP=0x0020000000343b39
- (double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3;	// IMP=0x0020000000343a43
- (double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2;	// IMP=0x0020000000343a29
@property(readonly, nonatomic) double ctr;
@property(readonly, nonatomic) NSDate *lastModified;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;

// Remaining properties
@property(readonly, nonatomic) double clicks;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long eventCount;
@property(readonly, nonatomic) NSString *featureKey;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double impressions;
@property(readonly) Class superclass;
@property(nonatomic) double timestamp;
@end

