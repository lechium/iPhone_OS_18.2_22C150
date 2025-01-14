//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, NSUserActivity;
@protocol RideBookingApplication;

@interface RideBookingRideOptionStatus : NSObject
{
    _Bool _loadingRideOptions;	// 8 = 0x8
    id <RideBookingApplication> _application;	// 16 = 0x10
    NSArray *_rideOptions;	// 24 = 0x18
    unsigned long long _rideOptionStatusError;	// 32 = 0x20
    NSDate *_expirationDate;	// 40 = 0x28
    NSUserActivity *_userActivity;	// 48 = 0x30
}

+ (id)statusWithApplication:(id)arg1 rideOptions:(id)arg2 expirationDate:(id)arg3 userActivity:(id)arg4 rideOptionStatusError:(unsigned long long)arg5;	// IMP=0x0040000000e85e47
+ (id)statusWithApplication:(id)arg1 error:(unsigned long long)arg2;	// IMP=0x0010000000e85df5
+ (id)statusWithApplication:(id)arg1 loadingRideOptions:(_Bool)arg2;	// IMP=0x0010000000e85da5
+ (id)statusWithApplication:(id)arg1;	// IMP=0x0010000000e85d3e
- (void).cxx_destruct;	// IMP=0x0020000000e8602b
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) unsigned long long rideOptionStatusError; // @synthesize rideOptionStatusError=_rideOptionStatusError;
@property(retain, nonatomic) NSArray *rideOptions; // @synthesize rideOptions=_rideOptions;
@property(nonatomic) _Bool loadingRideOptions; // @synthesize loadingRideOptions=_loadingRideOptions;
@property(nonatomic) __weak id <RideBookingApplication> application; // @synthesize application=_application;
- (id)description;	// IMP=0x0010000000e85f23
- (id)_init;	// IMP=0x0010000000e85ce5
@property(readonly, nonatomic) NSString *errorMessage;

@end

