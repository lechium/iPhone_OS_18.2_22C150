//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertController.h>

@class RideBookingRequestRideOptionProxy, RideBookingRequestRideStatus;

@interface RidesharingPaymentSelectionAlertController : UIAlertController
{
    RideBookingRequestRideStatus *_requestRideStatus;	// 8 = 0x8
    RideBookingRequestRideOptionProxy *_requestRideOptionProxy;	// 16 = 0x10
}

+ (id)ridesharingPaymentSelectionAlertControllerWithRequestRideStatus:(id)arg1 requestRideOptionProxy:(id)arg2;	// IMP=0x0040000000a424d3
- (void).cxx_destruct;	// IMP=0x0020000000a43145
@property(nonatomic) __weak RideBookingRequestRideOptionProxy *requestRideOptionProxy; // @synthesize requestRideOptionProxy=_requestRideOptionProxy;
@property(retain, nonatomic) RideBookingRequestRideStatus *requestRideStatus; // @synthesize requestRideStatus=_requestRideStatus;

@end

