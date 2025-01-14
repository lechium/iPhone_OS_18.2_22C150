//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaMiningKit/CLSMeaningClue.h>

@class NSString;

@interface CLSMeaningClue (Ingest)
@property(readonly, nonatomic) unsigned long long sceneIdentifier;
@property(readonly, nonatomic) NSString *placeInterestType;
@property(readonly, nonatomic) _Bool isReliable;
@property(readonly, nonatomic) unsigned long long numberOfDominantSceneAssets;
@property(readonly, nonatomic) unsigned long long numberOfSearchConfidenceAssets;
@property(readonly, nonatomic) unsigned long long numberOfHighConfidenceAssets;
@property(readonly, nonatomic) unsigned long long numberOfAssets;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, nonatomic) double confidence;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double relevance;
@property(readonly) Class superclass;
@end

