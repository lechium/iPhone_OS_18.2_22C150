//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PEValuesCalculator, PHAsset, PICompositionController;
@protocol PELivePortraitBehaviorDelegate;

@protocol PEAdjustment
@property(readonly, nonatomic) long long category;
- (void)applyToCompositionController:(PICompositionController *)arg1 valuesCalculator:(PEValuesCalculator *)arg2 asset:(PHAsset *)arg3 livePortraitBehaviorDelegate:(id <PELivePortraitBehaviorDelegate>)arg4 completionHandler:(void (^)(_Bool, NSError *))arg5;
@end

