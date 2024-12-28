//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLPlacemark, NSArray, NSNumber, NSString, NSUserActivity, RideBookingPaymentMethod, RideBookingRideOption, RidesharingSpecialPricingBadge, UIImage;
@protocol RideBookingApplication;

@interface RideBookingRequestRideStatus : NSObject
{
    _Bool _loadingRequest;	// 8 = 0x8
    _Bool _requiresPassengerSelection;	// 9 = 0x9
    _Bool _requestExpired;	// 10 = 0xa
    CLPlacemark *_origin;	// 16 = 0x10
    CLPlacemark *_destination;	// 24 = 0x18
    id <RideBookingApplication> _application;	// 32 = 0x20
    RideBookingRideOption *_rideOption;	// 40 = 0x28
    RideBookingPaymentMethod *_paymentMethod;	// 48 = 0x30
    unsigned long long _requestRideStatusError;	// 56 = 0x38
    NSNumber *_etaMinutesAtStartWaypoint;	// 64 = 0x40
    NSUserActivity *_userActivity;	// 72 = 0x48
    struct CLLocationCoordinate2D _startWaypointCoordinate;	// 80 = 0x50
}

+ (id)statusWithApplication:(id)arg1 rideOption:(id)arg2 startingWaypointCoordinate:(struct CLLocationCoordinate2D)arg3 origin:(id)arg4 destination:(id)arg5 loadingRequestRideStatus:(_Bool)arg6 etaMinutesAtStartWaypoint:(id)arg7;	// IMP=0x0040000000a12e32
+ (id)statusWithApplication:(id)arg1 error:(unsigned long long)arg2;	// IMP=0x0010000000a12dc6
- (void).cxx_destruct;	// IMP=0x0020000000a1320d
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(retain, nonatomic) NSNumber *etaMinutesAtStartWaypoint; // @synthesize etaMinutesAtStartWaypoint=_etaMinutesAtStartWaypoint;
@property(nonatomic) _Bool requestExpired; // @synthesize requestExpired=_requestExpired;
@property(nonatomic) _Bool requiresPassengerSelection; // @synthesize requiresPassengerSelection=_requiresPassengerSelection;
@property(nonatomic) _Bool loadingRequest; // @synthesize loadingRequest=_loadingRequest;
@property(nonatomic) unsigned long long requestRideStatusError; // @synthesize requestRideStatusError=_requestRideStatusError;
@property(retain, nonatomic) RideBookingPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(retain, nonatomic) RideBookingRideOption *rideOption; // @synthesize rideOption=_rideOption;
@property(nonatomic) __weak id <RideBookingApplication> application; // @synthesize application=_application;
@property(retain, nonatomic) CLPlacemark *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) CLPlacemark *origin; // @synthesize origin=_origin;
@property(nonatomic) struct CLLocationCoordinate2D startWaypointCoordinate; // @synthesize startWaypointCoordinate=_startWaypointCoordinate;
- (id)description;	// IMP=0x0010000000a13098
@property(readonly, nonatomic) NSString *paymentSelectionTitle;
@property(readonly, nonatomic) NSString *expirationAlertMessage;
@property(readonly, nonatomic) NSString *expirationAlertTitle;
@property(readonly, nonatomic) NSString *requestCommandTitle;
@property(readonly, nonatomic) NSString *appleDisclaimer;
@property(readonly, nonatomic) NSString *disclaimerMessage;
@property(readonly, nonatomic) NSArray *cardFareLineItems;
@property(readonly, nonatomic) NSString *openInAppCommandTitle;
@property(readonly, nonatomic) RidesharingSpecialPricingBadge *cardFormattedPriceRangeBadge;
@property(readonly, nonatomic) NSString *cardFormattedPriceRange;
@property(readonly, nonatomic) NSString *cardSubtitle;
@property(readonly, nonatomic) NSString *cardTitle;
@property(readonly, nonatomic) UIImage *cardIcon;

@end
