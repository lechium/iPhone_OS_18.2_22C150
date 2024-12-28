//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class NSBundle, NSString;

@protocol CALNCoreLocationProvider <NSObject>
- (void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(NSString *)arg1;
- (_Bool)preciseLocationAuthorizedForBundle:(NSBundle *)arg1;
- (_Bool)preciseLocationAuthorizedForBundleIdentifier:(NSString *)arg1;
- (int)authorizationStatusForBundle:(NSBundle *)arg1;
- (int)authorizationStatusForBundleIdentifier:(NSString *)arg1;
@end
