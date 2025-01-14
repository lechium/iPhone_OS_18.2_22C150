//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REExportedInterface-Protocol.h>

@class NSArray, NSString, REDataSourceManager, REFeatureSet, RELiveElementCoordinator, REMLModelManager, RERelevanceEngineConfiguration;

@protocol RERelevanceEngineProperties <REExportedInterface>
@property(readonly, nonatomic) REMLModelManager *modelManager;
@property(readonly, nonatomic) REDataSourceManager *dataSourceManager;
@property(readonly, nonatomic) RELiveElementCoordinator *coordinator;
@property(readonly, nonatomic) NSArray *subsystems;
@property(readonly, nonatomic) REFeatureSet *mlFeatures;
@property(readonly, nonatomic) REFeatureSet *rootFeatures;
@property(readonly, nonatomic) RERelevanceEngineConfiguration *configuration;
@property(readonly, nonatomic) NSString *name;
@end

