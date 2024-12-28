//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CNContact, CNContactViewController, CNLabeledValue, GEOAppleMediaServicesResult, GEOGuideLocation, GEOMapServiceTraits, GEOPlaceCollection, GEOSearchCategory, MKLookAroundView, MKMapItem, MKPlaceActionEnvironment, MKPlaceCardActionItem, MUActivityViewController, MUHikingTipModel, MUPlacePhotoGalleryViewController, MUPlaceViewController, MUPresentationOptions, NSArray, NSDictionary, NSNumber, NSString, NSURL, UIImage, UIMenu, UIMenuElement, UINavigationController, UIView, UIViewController, _MKPlaceActionButtonController, _MXExtension;
@protocol GEOMapItemPhoto, GEOTransitConnectionInfo, GEOTransitDepartureSequence, MKCuratedCollectionsSyncCoordinator, MKTransitLineMarker, MULibraryAccessProviding, _MKInfoCardAnalyticsDelegate, _MKPlaceItem;

@protocol MUPlaceViewControllerMapsAppDelegate <MUPlaceViewControllerDelegate, UIScrollViewDelegate>

@optional
- (_MKPlaceActionButtonController *)alternatePrimaryButtonControllerForPlaceViewController:(MUPlaceViewController *)arg1;
- (_MKPlaceActionButtonController *)secondaryButtonControllerForPlaceViewController:(MUPlaceViewController *)arg1;
- (void)placeViewController:(MUPlaceViewController *)arg1 didRequestAddOrRemovePlaceFromLibrary:(_Bool)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didRequestEditingNoteWithInitialText:(NSString *)arg2 libraryAccessProvider:(id <MULibraryAccessProviding>)arg3 completion:(void (^)(NSString *))arg4;
- (UIMenu *)menuForActionItem:(MKPlaceCardActionItem *)arg1;
- (UIMenuElement *)menuElementForActionItem:(MKPlaceCardActionItem *)arg1;
- (void)placeViewControllerContactsDidComplete:(CNContactViewController *)arg1;
- (void)placeViewControllerPresentContactsController:(UINavigationController *)arg1;
- (void)placeViewControllerDidSelectAddToContacts:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectViewContact:(MUPlaceViewController *)arg1;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectMapsExtension:(_MXExtension *)arg2 usingAppStoreApp:(GEOAppleMediaServicesResult *)arg3;
- (void)placeViewControllerDidUpdateContactActionsAvailability:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidUpdateCallProvider:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectInlineMap:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedAddress:(MUPlaceViewController *)arg1;
- (_Bool)placeViewControllerShouldOpenHomePage:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidRequestCopy:(MUPlaceViewController *)arg1;
- (int)mapTypeForPlaceViewController:(MUPlaceViewController *)arg1;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectAddRatingsWithPresentationOptions:(MUPresentationOptions *)arg2 overallState:(long long)arg3 originTarget:(NSString *)arg4;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectAddPhotosWithPresentationOptions:(MUPresentationOptions *)arg2 entryPoint:(long long)arg3 originTarget:(NSString *)arg4;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectEditSubmissionWithPresentationOptions:(MUPresentationOptions *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didRequestSceneActivationForPhotoGalleryViewController:(MUPlacePhotoGalleryViewController *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectPhotoCategoryAtIndex:(unsigned long long)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didFinishDismissingViewController:(UIViewController *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 requestsDismissingPresentingViewControllerWithCompletion:(void (^)(UIViewController *))arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 photoGalleryDidScroll:(MUPlacePhotoGalleryViewController *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectPhotoToReport:(id <GEOMapItemPhoto>)arg2 withPhotoGalleryViewController:(MUPlacePhotoGalleryViewController *)arg3;
- (void)placeViewControllerDidSelectSeeMorePhotos:(MUPlaceViewController *)arg1 withStartingIndex:(unsigned long long)arg2;
- (void)placeViewControllerDidCloseFullscreenPhotos:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidOpenFullscreenPhotos:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidTapHikingTip:(MUPlaceViewController *)arg1;
- (UIView *)placeViewController:(MUPlaceViewController *)arg1 hikingTipViewForTipModel:(MUHikingTipModel *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didRequestHikingToolTipRegionIDForLocation:(struct CLLocationCoordinate2D)arg2;
- (UIViewController *)inlineRatingViewControllerForPlaceViewController:(MUPlaceViewController *)arg1;
- (UIImage *)placeViewControllerUserIcon:(MUPlaceViewController *)arg1;
- (_Bool)shouldMoveLookAroundStorefrontViewForPlaceViewController:(MUPlaceViewController *)arg1;
- (void)placeViewController:(MUPlaceViewController *)arg1 enterLookAroundForMapItem:(MKMapItem *)arg2 lookAroundView:(MKLookAroundView *)arg3;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectParent:(MKMapItem *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectSearchCategory:(GEOSearchCategory *)arg2;
- (void)placeViewControllerDidSelectRemoveMarker:(MUPlaceViewController *)arg1;
- (void)placeViewController:(MUPlaceViewController *)arg1 getRemainingQuickLinksBlock:(void (^)(NSArray *))arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 showRelatedMapItems:(NSArray *)arg2 withTitle:(NSString *)arg3 originalMapItem:(MKMapItem *)arg4 analyticsDelegate:(id <_MKInfoCardAnalyticsDelegate>)arg5;
- (id <MKCuratedCollectionsSyncCoordinator>)curatedCollectionSyncCoordinator;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectAddToCollectionWithPlaceActionEnvironment:(MKPlaceActionEnvironment *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 seeAllCollections:(NSArray *)arg2 usingTitle:(NSString *)arg3 usingCollectionIds:(NSArray *)arg4;
- (void)placeViewController:(MUPlaceViewController *)arg1 selectExploreGuidesWithGuideLocation:(GEOGuideLocation *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 selectCuratedCollection:(GEOPlaceCollection *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 selectCollectionIdentifier:(NSString *)arg2;
- (void)placeViewControllerDidSelectRefineLocation:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectChangeAddress:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectRemoveShortcut:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectAddShortcut:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidTapMiniBrowseCategory:(MUPlaceViewController *)arg1;
- (NSArray *)placeViewController:(MUPlaceViewController *)arg1 webPlacecardGuidesForPlaceItem:(id <_MKPlaceItem>)arg2;
- (NSDictionary *)placeViewController:(MUPlaceViewController *)arg1 collectionViewsForPlaceItem:(id <_MKPlaceItem>)arg2;
- (UIView *)suggestionViewForPlaceViewController:(MUPlaceViewController *)arg1;
- (double)placeViewControllerPlaceCardHeaderTitleTrailingConstant:(MUPlaceViewController *)arg1;
- (void)placeViewController:(MUPlaceViewController *)arg1 openURL:(NSURL *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2;
- (_Bool)placeViewController:(MUPlaceViewController *)arg1 canSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 mapItem:(MKMapItem *)arg3;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 mapItem:(MKMapItem *)arg3;
- (void)placeViewController:(MUPlaceViewController *)arg1 showTransitIncidents:(NSArray *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectTransitConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (void)placeViewControllerDidSelectOfflineManagement:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectPauseOfflineDownload:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDownloadOffline:(MUPlaceViewController *)arg1 isQuickAction:(_Bool)arg2;
- (void)placeViewControllerDidSelectPlaceEnrichmentRAP:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectRAPViewReport:(MUPlaceViewController *)arg1;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectEditPlaceDetailsOfType:(long long)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectAddMissingDataOfType:(long long)arg2;
- (void)placeViewControllerDidSelectAddAPlace:(MUPlaceViewController *)arg1 isQuickAction:(_Bool)arg2;
- (void)placeViewControllerDidSelectReportAProblem:(MUPlaceViewController *)arg1 fromView:(UIView *)arg2 isQuickAction:(_Bool)arg3;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectShareCurrentLocationWithCompletion:(void (^)(_Bool))arg2;
- (void)placeViewControllerDidSelectShareLocation:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectFlyover:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDropPin:(MUPlaceViewController *)arg1;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned long long)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectRouteToCurrentSearchResultWithTransportTypePreference:(NSNumber *)arg2;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectDirectionsForDestinationAddress:(CNLabeledValue *)arg2 contact:(CNContact *)arg3 transportType:(NSNumber *)arg4;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectDirectionsForDestinationMapItem:(MKMapItem *)arg2 transportType:(NSNumber *)arg3;
- (GEOMapServiceTraits *)traitsForPlaceViewController:(MUPlaceViewController *)arg1;
- (void)placeViewController:(MUPlaceViewController *)arg1 didSelectActivityOfType:(NSString *)arg2 completed:(_Bool)arg3;
- (MUActivityViewController *)activityViewControllerForPlaceViewController:(MUPlaceViewController *)arg1;
@end
