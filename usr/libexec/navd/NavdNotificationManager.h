//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/MNNotificationManager.h>

@interface NavdNotificationManager : MNNotificationManager
{
}

- (void)clearVenueBulletin;	// IMP=0x0040000000037b80
- (void)showVenueBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000037a3e
- (void)clearAirportArrivalBulletin;	// IMP=0x00100000000379f9
- (void)showAirportArrivalBulletinWithTitle:(id)arg1 message:(id)arg2 mapRegion:(id)arg3 regionName:(id)arg4;	// IMP=0x0010000000037898
- (void)clearMapsSuggestionsBulletin;	// IMP=0x0010000000037853
- (void)showMapsSuggestionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x0010000000037711
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1;	// IMP=0x0010000000037506

@end

