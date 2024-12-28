//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthExperienceUI/NSObject-Protocol.h>

@class HKDataMetadataDetailSection, HKDisplayTypeController, HKHealthStore, HKSample, HKSampleType, HKUnitPreferenceController, NSArray, NSPredicate, NSString, UIViewController;
@protocol HKDataMetadataSectionProtocol;

@protocol HKDataMetadataViewControllerDelegate <NSObject>
@property(readonly, nonatomic) HKHealthStore *healthStore;

@optional
- (NSArray *)prependedSectionsForSample:(HKSample *)arg1;
- (id <HKDataMetadataSectionProtocol>)deviceSectionForSample:(HKSample *)arg1;
- (HKDataMetadataDetailSection *)detailSectionForSample:(HKSample *)arg1;
- (_Bool)shareDocumentUsingSample:(HKSample *)arg1;
- (UIViewController *)accessViewControllerForSample:(HKSample *)arg1 healthStore:(HKHealthStore *)arg2;
- (UIViewController *)viewControllerForSampleType:(HKSampleType *)arg1 subSamplePredicate:(NSPredicate *)arg2 title:(NSString *)arg3;
- (NSPredicate *)defaultPredicateForSampleType:(HKSampleType *)arg1;
- (HKUnitPreferenceController *)unitController;
- (HKDisplayTypeController *)displayTypeController;
@end
