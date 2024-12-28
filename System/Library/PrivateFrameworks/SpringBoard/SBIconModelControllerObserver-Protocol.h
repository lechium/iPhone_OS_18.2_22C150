//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, NSSet, NSString, SBIconModel;
@protocol SBHFeatureIntroductionProviding;

@protocol SBIconModelControllerObserver <NSObject>

@optional
- (id <SBHFeatureIntroductionProviding>)featureIntroductionItemForWidgetSetupAtLocation:(unsigned long long)arg1;
- (void)updateDefaultFirstPageWidgetDescriptors:(NSArray *)arg1 withSizeClass:(NSString *)arg2 andGridCellInfoOptions:(unsigned long long)arg3;
- (void)obtainProactiveSecondPageWidgetSuggestion;
- (void)iconModel:(SBIconModel *)arg1 wantsToRevealAnyApplicationFromIdentifiers:(NSSet *)arg2;
- (void)iconModel:(SBIconModel *)arg1 backupRestoringStatusDidChange:(_Bool)arg2;
- (void)iconModelInstalledAppsDidChange:(SBIconModel *)arg1;
- (void)iconModelDidImportIconState:(SBIconModel *)arg1;
@end
