//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ChildItemsViewModel, CollectionHandler, GEOMapItemIdentifier, GEOPlaceCollection, GEOResultRefinement, MKMapItem, NSArray, _TtC4Maps25PlaceSummaryTableViewCell;
@protocol PersonalizedItem;

@protocol _TtP4Maps33PlaceSummaryTableViewCellDelegate_
- (void)didTapOnPhotoCarousel:(_TtC4Maps25PlaceSummaryTableViewCell *)arg1 photoIndex:(long long)arg2;
- (void)didTapOnUserLibrary:(_TtC4Maps25PlaceSummaryTableViewCell *)arg1 mapItem:(MKMapItem *)arg2;
- (void)didTapOnAddStop:(_TtC4Maps25PlaceSummaryTableViewCell *)arg1;
- (id <PersonalizedItem>)personalizedItemForQuickActionMenuWithCell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg1;
- (void)didTapOnTappableEntryWithMapItemIdentifier:(GEOMapItemIdentifier *)arg1 cell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg2;
- (void)didTapOnResultRefinement:(GEOResultRefinement *)arg1 cell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg2;
- (void)didTapOnContainmentParentMapItem:(MKMapItem *)arg1 cell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg2;
- (void)didTapOnAccessoryEntityFlyoverWithCell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg1;
- (void)didTapOnAccessoryEntityQueryAcceleratorWithCell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg1;
- (void)didTapOnAccessoryEntityWebsiteWithCell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg1;
- (void)didTapOnAccessoryEntityCallWithCell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg1;
- (void)didTapOnAccessoryEntityLookAroundWithCell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg1;
- (void)didTapOnAccessoryEntityDirectionsWithCell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg1;
- (void)didTapOnItemInChildItems:(ChildItemsViewModel *)arg1 cell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg2 buttonIndex:(long long)arg3;
- (void)didTapOnCuratedGuides:(NSArray *)arg1 cell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg2;
- (void)didTapOnCuratedGuide:(GEOPlaceCollection *)arg1 cell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg2;
- (void)didTapOnUserGeneratedGuide:(CollectionHandler *)arg1 cell:(_TtC4Maps25PlaceSummaryTableViewCell *)arg2;
@end

