//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class ContactRequirements, INRestaurantGuest, INRestaurantGuestDisplayPreferences, INRestaurantOffer, INRestaurantReservationBooking, INTermsAndConditions, NSArray, NSDate, NSDateFormatter, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimeZone, ReservationAnalyticsCaptor, ReservationButtonView, RestaurantReservationAnalyticsBookingSession, RestaurantReservationRequestController, RestaurantReservationTableViewCell, UITableView;
@protocol RestaurantReservationTableViewControllerDelegate;

@interface RestaurantReservationTableViewController : UIViewController
{
    _Bool _useTruncatedAdvisement;	// 8 = 0x8
    _Bool _guestLoading;	// 9 = 0x9
    _Bool _bookingsLoading;	// 10 = 0xa
    _Bool _bookingPending;	// 11 = 0xb
    _Bool _emailPreferenceAllowEmails;	// 12 = 0xc
    _Bool _viewHasAppeared;	// 13 = 0xd
    INRestaurantReservationBooking *_selectedBooking;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    unsigned long long _partySize;	// 32 = 0x20
    id <RestaurantReservationTableViewControllerDelegate> _delegate;	// 40 = 0x28
    NSArray *_availableBookings;	// 48 = 0x30
    NSString *_restaurantName;	// 56 = 0x38
    NSTimeZone *_restaurantTimeZone;	// 64 = 0x40
    NSString *_restaurantDescriptionText;	// 72 = 0x48
    NSString *_restaurantAdvisementText;	// 80 = 0x50
    NSString *_appName;	// 88 = 0x58
    INRestaurantGuest *_guest;	// 96 = 0x60
    INRestaurantGuestDisplayPreferences *_guestDisplayPreferences;	// 104 = 0x68
    INTermsAndConditions *_termsAndConditions;	// 112 = 0x70
    NSString *_specialRequestText;	// 120 = 0x78
    UITableView *_tableView;	// 128 = 0x80
    RestaurantReservationTableViewCell *_reservationDetailCell;	// 136 = 0x88
    NSDictionary *_availableBookingsBySection;	// 144 = 0x90
    NSArray *_sectionTitles;	// 152 = 0x98
    NSDateFormatter *_timeSuffixDateFormatter;	// 160 = 0xa0
    NSDateFormatter *_timeSelectionDateFormatter;	// 168 = 0xa8
    RestaurantReservationRequestController *_restaurantReservationRequestController;	// 176 = 0xb0
    NSMutableArray *_offers;	// 184 = 0xb8
    NSMutableSet *_offersSet;	// 192 = 0xc0
    INRestaurantOffer *_selectedOffer;	// 200 = 0xc8
    NSString *_formerSelection;	// 208 = 0xd0
    ReservationButtonView *_footerButtonView;	// 216 = 0xd8
    NSMutableDictionary *_heightCache;	// 224 = 0xe0
    NSNumber *_offersRowHeight;	// 232 = 0xe8
    ReservationAnalyticsCaptor *_analyticsCaptor;	// 240 = 0xf0
    RestaurantReservationAnalyticsBookingSession *_analyticsBookingSession;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0020000000db93ba
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(retain, nonatomic) RestaurantReservationAnalyticsBookingSession *analyticsBookingSession; // @synthesize analyticsBookingSession=_analyticsBookingSession;
@property(retain, nonatomic) ReservationAnalyticsCaptor *analyticsCaptor; // @synthesize analyticsCaptor=_analyticsCaptor;
@property(retain, nonatomic) NSNumber *offersRowHeight; // @synthesize offersRowHeight=_offersRowHeight;
@property(retain, nonatomic) NSMutableDictionary *heightCache; // @synthesize heightCache=_heightCache;
@property(retain, nonatomic) ReservationButtonView *footerButtonView; // @synthesize footerButtonView=_footerButtonView;
@property(nonatomic) _Bool emailPreferenceAllowEmails; // @synthesize emailPreferenceAllowEmails=_emailPreferenceAllowEmails;
@property(retain, nonatomic) NSString *formerSelection; // @synthesize formerSelection=_formerSelection;
- (void)setSelectedOffer:(id)arg1;	// IMP=0x0010000000db9288
- (id)selectedOffer;	// IMP=0x0010000000db9277
@property(retain, nonatomic) NSMutableSet *offersSet; // @synthesize offersSet=_offersSet;
@property(retain, nonatomic) NSMutableArray *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) RestaurantReservationRequestController *restaurantReservationRequestController; // @synthesize restaurantReservationRequestController=_restaurantReservationRequestController;
@property(retain, nonatomic) NSDateFormatter *timeSelectionDateFormatter; // @synthesize timeSelectionDateFormatter=_timeSelectionDateFormatter;
@property(retain, nonatomic) NSDateFormatter *timeSuffixDateFormatter; // @synthesize timeSuffixDateFormatter=_timeSuffixDateFormatter;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSDictionary *availableBookingsBySection; // @synthesize availableBookingsBySection=_availableBookingsBySection;
@property(retain, nonatomic) RestaurantReservationTableViewCell *reservationDetailCell; // @synthesize reservationDetailCell=_reservationDetailCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool bookingPending; // @synthesize bookingPending=_bookingPending;
@property(nonatomic) _Bool bookingsLoading; // @synthesize bookingsLoading=_bookingsLoading;
@property(nonatomic) _Bool guestLoading; // @synthesize guestLoading=_guestLoading;
@property(nonatomic) _Bool useTruncatedAdvisement; // @synthesize useTruncatedAdvisement=_useTruncatedAdvisement;
@property(copy, nonatomic) NSString *specialRequestText; // @synthesize specialRequestText=_specialRequestText;
@property(copy, nonatomic) INTermsAndConditions *termsAndConditions; // @synthesize termsAndConditions=_termsAndConditions;
@property(copy, nonatomic) INRestaurantGuestDisplayPreferences *guestDisplayPreferences; // @synthesize guestDisplayPreferences=_guestDisplayPreferences;
@property(copy, nonatomic) INRestaurantGuest *guest; // @synthesize guest=_guest;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *restaurantAdvisementText; // @synthesize restaurantAdvisementText=_restaurantAdvisementText;
@property(copy, nonatomic) NSString *restaurantDescriptionText; // @synthesize restaurantDescriptionText=_restaurantDescriptionText;
@property(retain, nonatomic) NSTimeZone *restaurantTimeZone; // @synthesize restaurantTimeZone=_restaurantTimeZone;
@property(copy, nonatomic) NSString *restaurantName; // @synthesize restaurantName=_restaurantName;
@property(retain, nonatomic) NSArray *availableBookings; // @synthesize availableBookings=_availableBookings;
@property(nonatomic) __weak id <RestaurantReservationTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long partySize; // @synthesize partySize=_partySize;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) INRestaurantReservationBooking *selectedBooking; // @synthesize selectedBooking=_selectedBooking;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0010000000db8e8f
@property(readonly, nonatomic) _Bool useExtensionFlowHeader;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (id)contactDisplayColorSatisfied:(_Bool)arg1;	// IMP=0x0010000000db8e4e
- (id)contactDisplayStringSatisfied:(_Bool *)arg1;	// IMP=0x0010000000db8783
@property(readonly, nonatomic) _Bool contactRequirementsSatisfiable;
- (_Bool)requirements:(id)arg1 satisfiableWithDisplayPreferences:(id)arg2 guest:(id)arg3;	// IMP=0x0010000000db84c2
- (_Bool)shouldDisplayContactCellForGuestDisplayPreferences:(id)arg1 bookingsLoading:(_Bool)arg2;	// IMP=0x0010000000db844e
- (_Bool)shouldDisplayContactCell;	// IMP=0x0010000000db83ed
- (_Bool)shouldDisplayTermsAndConditions;	// IMP=0x0010000000db837b
- (_Bool)shouldDisplayOffersSection;	// IMP=0x0010000000db8333
- (_Bool)shouldDisplayAdvisementSection;	// IMP=0x0010000000db82eb
- (long long)numberOfNonOptionalSections;	// IMP=0x0010000000db82e0
- (long long)numberOfOptionalSections;	// IMP=0x0010000000db828a
- (long long)openAppRow;	// IMP=0x0010000000db8271
- (long long)reservationSpecialRequestRow;	// IMP=0x0010000000db825b
- (long long)reservationContactInfoRow;	// IMP=0x0010000000db8253
- (long long)numberOfRowsInDetailsSection;	// IMP=0x0010000000db823a
- (long long)numberOfRowsInOffersSection;	// IMP=0x0010000000db81cf
- (long long)openAppSection;	// IMP=0x0010000000db818f
- (long long)termsAndConditionsSection;	// IMP=0x0010000000db8179
- (long long)reservationDetailsSection;	// IMP=0x0010000000db811c
- (long long)offersSection;	// IMP=0x0010000000db80e1
- (long long)advisementSection;	// IMP=0x0010000000db80cb
- (long long)headerSection;	// IMP=0x0010000000db80c3
- (void)rebuildCollectionViewSections;	// IMP=0x0010000000db7d14
- (void)changeDateButtonTapped:(id)arg1;	// IMP=0x0010000000db7c99
- (id)noOfferOffer;	// IMP=0x0010000000db7b82
- (void)updateHeightCacheForOffersSectionDeletion;	// IMP=0x0010000000db75e1
- (void)updateHeightCacheForOffersSectionInsertion;	// IMP=0x0010000000db717a
- (void)rebuildOffersNewOffers:(id)arg1 oldOffers:(id)arg2;	// IMP=0x0010000000db66cf
- (void)rebuildOffers;	// IMP=0x0010000000db61d2
- (void)handleSectionAppearanceForSection:(long long)arg1 willDisplay:(_Bool)arg2 didDisplay:(_Bool)arg3;	// IMP=0x0010000000db602c
- (void)handleCellAppearanceForIndexPath:(id)arg1 willDisplay:(_Bool)arg2 didDisplay:(_Bool)arg3;	// IMP=0x0010000000db5dba
- (id)reservationDetailsIndexPath;	// IMP=0x0010000000db5c0c
- (void)setRestaurantDescriptionText:(id)arg1 keepExisting:(_Bool)arg2;	// IMP=0x0010000000db5886
- (_Bool)shouldDisplaySuffix;	// IMP=0x0010000000db4ebb
- (id)timeSuffixForDate:(id)arg1;	// IMP=0x0010000000db4e28
@property(readonly, nonatomic) ContactRequirements *inferredContactRequirements;
- (_Bool)showRemoteView;	// IMP=0x0010000000db4b5a
- (_Bool)useAvailableHeight;	// IMP=0x0010000000db4b52
- (id)noTablesAvailableTextForDate:(id)arg1;	// IMP=0x0010000000db4a2b
- (id)descriptionTextForDate:(id)arg1 partySize:(unsigned long long)arg2;	// IMP=0x0010000000db48f7
- (void);	// IMP=0x0010000000db4805
- (id)dimmableIndexPaths;	// IMP=0x0010000000db447b
- (void)_configureReservationDetailsTimeSelction;	// IMP=0x0010000000db4288
- (void)_configureReservationDetailsError;	// IMP=0x0010000000db40a8
- (void)_configureReservationDetailsLoadingIndicator;	// IMP=0x0010000000db3f66
- (void)_configureReservationDetailsDateAndPartySize;	// IMP=0x0010000000db3d78
- (void)_configureReservationDetails;	// IMP=0x0010000000db3d30
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000db3b3a
- (void)configureCell:(id)arg1 withBooking:(id)arg2 row:(long long)arg3;	// IMP=0x0010000000db389d
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000db35fc
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000db3329
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0010000000db32e5
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000db31df
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0010000000db3142
- (void)footerButtonTapped:(id)arg1;	// IMP=0x0010000000db2ff0
- (void)ridesharingAppActionTableViewCellDidPerformAction:(id)arg1;	// IMP=0x0010000000db2f74
- (void)reservationTableViewCellDidSelectSecondaryButton:(id)arg1;	// IMP=0x0010000000db2e4c
- (void)reservationTableViewCellDidSelectPrimaryButton:(id)arg1;	// IMP=0x0010000000db2ca2
- (long long)transformedIndexForIndexPath:(id)arg1 collectionView:(id)arg2;	// IMP=0x0010000000db2bee
- (void)updateSelectedOffer;	// IMP=0x0010000000db268d
- (void)resetForChangedTimeSelection;	// IMP=0x0010000000db24ea
- (void)deselectBooking;	// IMP=0x0010000000db2457
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000db2220
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0010000000db21ef
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000db21be
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0010000000db2139
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000db2022
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000db19c8
- (void)configureSpecialRequestTextCell:(id)arg1;	// IMP=0x0010000000db17d0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000db0337
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000dafec4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000dafdb9
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000dafd7d
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000dafc8b
- (void)configureButton;	// IMP=0x0010000000daf74a
- (void)didReceiveMemoryWarning;	// IMP=0x0010000000daf71b
- (void)setupConstraints;	// IMP=0x0010000000daf0e9
- (void)setupFooterButtonView;	// IMP=0x0010000000daefaf
- (void)setupTableView;	// IMP=0x0010000000daeddc
- (void)registerCells;	// IMP=0x0010000000daeb34
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000daeaee
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000daea84
- (void)viewDidLoad;	// IMP=0x0010000000daea14
- (id)initWithAnalyticsCaptor:(id)arg1 analyticsBookingSession:(id)arg2;	// IMP=0x0010000000dae96e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

