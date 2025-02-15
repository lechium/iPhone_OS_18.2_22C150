//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MKCollectionsCarouselView, MUPagingScrollContainerView;
@protocol MKPlaceCollectionsDelegate;

__attribute__((visibility("hidden")))
@interface MUCuratedGuidesSectionView : UIView
{
    MUPagingScrollContainerView *_pagingContainerView;	// 8 = 0x8
    _Bool _isSingleCollection;	// 16 = 0x10
    id <MKPlaceCollectionsDelegate> _collectionsDelegate;	// 24 = 0x18
    MKCollectionsCarouselView *_carouselView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000011d757
@property(retain, nonatomic) MKCollectionsCarouselView *carouselView; // @synthesize carouselView=_carouselView;
@property(nonatomic) __weak id <MKPlaceCollectionsDelegate> collectionsDelegate; // @synthesize collectionsDelegate=_collectionsDelegate;
@property(readonly, nonatomic, getter=isShowingExploreGuides) _Bool showingExploreGuides;
- (void)refreshCollections;	// IMP=0x000000000011d6cb
- (void)displayCollectionsIfNeeded;	// IMP=0x000000000011d636
@property(readonly, nonatomic) long long carouselContext;
- (void)_setupSubviews;	// IMP=0x000000000011d450
- (id)initCollectionsCarouselViewWithPlaceCollections:(id)arg1 usingSyncCoordinator:(id)arg2 withRoutingDelegate:(id)arg3 withScrollViewDelegate:(id)arg4 withAnalyticsDelegate:(id)arg5 exploreGuides:(id)arg6;	// IMP=0x000000000011d2eb

@end

