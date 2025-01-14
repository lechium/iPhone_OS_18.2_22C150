//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MUCuratedCollectionsPlacecardAnalyticsManager, MUCuratedGuidesSectionView, MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, NSArray, NSString, UIView, UIViewController;
@protocol MKPlaceCollectionsDelegate, MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUCuratedGuidesSectionController : MUPlaceSectionController
{
    MUPlaceSectionView *_sectionView;	// 8 = 0x8
    MUCuratedGuidesSectionView *_carouselView;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;	// 32 = 0x20
    MUCuratedCollectionsPlacecardAnalyticsManager *_analyticsManager;	// 40 = 0x28
    id <MKPlaceCollectionsDelegate> _collectionsDelegate;	// 48 = 0x30
    NSArray *_collectionIds;	// 56 = 0x38
    NSArray *_placeCollections;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000cfe3b
@property(retain, nonatomic) NSArray *placeCollections; // @synthesize placeCollections=_placeCollections;
@property(retain, nonatomic) NSArray *collectionIds; // @synthesize collectionIds=_collectionIds;
@property(nonatomic) __weak id <MKPlaceCollectionsDelegate> collectionsDelegate; // @synthesize collectionsDelegate=_collectionsDelegate;
@property(retain, nonatomic) MUCuratedCollectionsPlacecardAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) MUCuratedGuidesSectionView *carouselView; // @synthesize carouselView=_carouselView;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (_Bool)isImpressionable;	// IMP=0x00000000000cfd62
- (int)analyticsModuleType;	// IMP=0x00000000000cfd57
- (_Bool)shouldShowMoreButton;	// IMP=0x00000000000cfc12
- (id)_sectionHeaderTitle;	// IMP=0x00000000000cfb75
- (void)_seeAllTapped;	// IMP=0x00000000000cfab3
- (void)refreshCollections;	// IMP=0x00000000000cfa96
- (id)draggableContent;	// IMP=0x00000000000cfa8e
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;
- (void)exploreGuidesButtonTapped;	// IMP=0x00000000000cf982
- (void)collectionsCarouselDidRouteToCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(_Bool)arg3;	// IMP=0x00000000000cf908
- (void)collectionsCarouselDidScrollBackward;	// IMP=0x00000000000cf8cb
- (void)collectionsCarouselDidScrollForward;	// IMP=0x00000000000cf88e
@property(readonly, nonatomic) UIView *sectionView;
- (void)_setupCollectionView;	// IMP=0x00000000000cf82a
- (void)_setupViews;	// IMP=0x00000000000cf65b
- (id)initWithDelegate:(id)arg1 withPlaceCollections:(id)arg2 usingSyncCoordinator:(id)arg3 usingMapItem:(id)arg4 usingCollectionIds:(id)arg5 exploreGuides:(id)arg6;	// IMP=0x00000000000cf414

// Remaining properties
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,R,N

@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

