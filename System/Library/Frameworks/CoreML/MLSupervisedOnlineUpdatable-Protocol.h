//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLSupervisedOnlineUpdateOptions;
@protocol MLFeatureProvider;

@protocol MLSupervisedOnlineUpdatable
- (_Bool)updateModelFromFeatures:(id <MLFeatureProvider>)arg1 toTarget:(id <MLFeatureProvider>)arg2 options:(MLSupervisedOnlineUpdateOptions *)arg3 error:(id *)arg4;
@end

