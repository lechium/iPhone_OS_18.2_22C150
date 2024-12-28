//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MapsAnalyticStateProvider : NSObject
{
}

+ (void)setUserProfileAvailableActions:(id)arg1;	// IMP=0x0020000000a52459
+ (void)setUserProfileUserIsLoggedIntoICloud:(_Bool)arg1;	// IMP=0x0010000000a52408
+ (void)updatePreciseLocationInformation;	// IMP=0x0010000000a522fa
+ (void)updateiCloudStateInformation;	// IMP=0x0010000000a52296
+ (void)updateCycleOptionsInformation:(id)arg1;	// IMP=0x0010000000a52163
+ (void)updateWalkOptionsInformation:(id)arg1;	// IMP=0x0010000000a52030
+ (void)updateDriveOptionsInformation:(id)arg1;	// IMP=0x0010000000a51f3f
+ (void)updateButtonsInformationLookAround:(_Bool)arg1;	// IMP=0x0010000000a51eee
+ (void)updateButtonsInformationAQI:(_Bool)arg1 weather:(_Bool)arg2;	// IMP=0x0010000000a51e5a
+ (void)updateNotificationsStateInformation;	// IMP=0x0010000000a51d94
+ (void)updateSettingsInformation;	// IMP=0x0010000000a5189a
+ (void)updateMapSettingsInformationLabels:(_Bool)arg1 traffic:(_Bool)arg2;	// IMP=0x0010000000a51806
+ (void)updateLayoutInformation:(id)arg1;	// IMP=0x0010000000a51418
+ (void)updateSuggestionSearchInformation:(id)arg1 searchText:(id)arg2 searchIndex:(int)arg3 searchfieldType:(int)arg4 suggestionsAcSequenceNumber:(int)arg5;	// IMP=0x0010000000a51238
+ (void)updateTouristInformation;	// IMP=0x0010000000a51140
+ (void)updateMapViewViewMode:(long long)arg1;	// IMP=0x0010000000a50ffb
+ (void)updateMapViewInformation:(id)arg1;	// IMP=0x0010000000a50bc2
+ (void)updateLocaleInformation:(id)arg1;	// IMP=0x0010000000a50a12
+ (void)clearSharedState;	// IMP=0x0010000000a508da
+ (id)serialQueue;	// IMP=0x0010000000a50830

@end
