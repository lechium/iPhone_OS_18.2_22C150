//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewController.h>

@class MISSING_TYPE;

@interface _TtC10FitnessApp37AddToYourRingCollectionViewController : UICollectionViewController
{
    MISSING_TYPE *appRecommendationDataProvider;	// 8 = 0x8
    MISSING_TYPE *fitnessAppContext;	// 48 = 0x30
    MISSING_TYPE *seymourWorkoutRecommendationDataProvider;	// 56 = 0x38
    MISSING_TYPE *walkSuggestionDataProvider;	// 96 = 0x60
    MISSING_TYPE *impressionsTracker;	// 136 = 0x88
    MISSING_TYPE *artworkImageLoader;	// 144 = 0x90
    MISSING_TYPE *subscriptionToken;	// 184 = 0xb8
    MISSING_TYPE *networkEvaluator;	// 192 = 0xc0
    MISSING_TYPE *eventHub;	// 232 = 0xe8
    MISSING_TYPE *lastCollectionViewContentHeight;	// 248 = 0xf8
    MISSING_TYPE *delegate;	// 256 = 0x100
    MISSING_TYPE *protectedAppsSubscription;	// 272 = 0x110
    MISSING_TYPE *suggestedMinutesToWalk;	// 280 = 0x118
    MISSING_TYPE *walkSuggestionCell;	// 296 = 0x128
    MISSING_TYPE *seymourWorkoutRecommendations;	// 304 = 0x130
    MISSING_TYPE *appStoreRecommendations;	// 312 = 0x138
    MISSING_TYPE *recentWorkoutAppRecommendations;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x002000000061a270
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000061dbd0
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x001000000061dba0
- (void)viewDidLoad;	// IMP=0x001000000061a460
- (void)dealloc;	// IMP=0x001000000061a250
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000061a170
@property(nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00100000003e0840
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00100000003e0790
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00100000003e0290
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00100000003e0280
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000003e1040
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00100000003e0f80
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000003e0ee0
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x001000000061e4a0
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x001000000061e040
- (void)appProtectionSubjectsChanged:(id)arg1 forSubscription:(id)arg2;	// IMP=0x001000000061e8d0

@end

