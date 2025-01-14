//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSString, RideBookingAppStoreApplicationsOutlineSection, RideBookingDisabledApplicationsOutlineSection, RideBookingEnabledApplicationsOutlineSection;
@protocol RideBookingRoutePlanningTableViewDataSourceDelegate><CollectionViewDataSourceDelegate><RouteOverviewCellDelegate;

@interface RideBookingOutlineController
{
    id <RideBookingRoutePlanningTableViewDataSourceDelegate><CollectionViewDataSourceDelegate><RouteOverviewCellDelegate> _delegate;	// 24 = 0x18
    RideBookingEnabledApplicationsOutlineSection *_enabledApplicationsSource;	// 32 = 0x20
    NSArray *_rideOptionsStatuses;	// 40 = 0x28
    NSMutableDictionary *_rideOptionsSourcesDictionary;	// 48 = 0x30
    NSMutableDictionary *_applicationSectionIsExpanded;	// 56 = 0x38
    RideBookingDisabledApplicationsOutlineSection *_disabledApplicationsSource;	// 64 = 0x40
    RideBookingAppStoreApplicationsOutlineSection *_appStoreApplicationsSource;	// 72 = 0x48
}

+ (id)headerFooterViewClasses;	// IMP=0x0020000000ea64dc
+ (id)cellClasses;	// IMP=0x0010000000ea6373
- (void).cxx_destruct;	// IMP=0x0020000000ea69a3
@property(retain, nonatomic) RideBookingAppStoreApplicationsOutlineSection *appStoreApplicationsSource; // @synthesize appStoreApplicationsSource=_appStoreApplicationsSource;
@property(retain, nonatomic) RideBookingDisabledApplicationsOutlineSection *disabledApplicationsSource; // @synthesize disabledApplicationsSource=_disabledApplicationsSource;
@property(retain, nonatomic) NSMutableDictionary *applicationSectionIsExpanded; // @synthesize applicationSectionIsExpanded=_applicationSectionIsExpanded;
@property(retain, nonatomic) NSMutableDictionary *rideOptionsSourcesDictionary; // @synthesize rideOptionsSourcesDictionary=_rideOptionsSourcesDictionary;
@property(retain, nonatomic) NSArray *rideOptionsStatuses; // @synthesize rideOptionsStatuses=_rideOptionsStatuses;
@property(retain, nonatomic) RideBookingEnabledApplicationsOutlineSection *enabledApplicationsSource; // @synthesize enabledApplicationsSource=_enabledApplicationsSource;
@property(nonatomic) __weak id <RideBookingRoutePlanningTableViewDataSourceDelegate><CollectionViewDataSourceDelegate><RouteOverviewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didExpandSection:(id)arg1;	// IMP=0x0010000000ea6812
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000ea66b0
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0010000000ea654e
- (void)setupAdvisoryInfoLayout:(id)arg1 tapHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000ea6548
- (void)tableViewDismissed;	// IMP=0x0010000000ea62af
- (void)_configureRideOptionsSources:(id)arg1;	// IMP=0x0010000000ea5a5c
- (void)configureWithRideBookingRideOptionState:(id)arg1;	// IMP=0x0010000000ea593f
- (void)prepareOutlineSections;	// IMP=0x0010000000ea5248
- (void)dealloc;	// IMP=0x0010000000ea5151
- (id)initWithCollectionView:(id)arg1;	// IMP=0x0010000000ea4dcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

