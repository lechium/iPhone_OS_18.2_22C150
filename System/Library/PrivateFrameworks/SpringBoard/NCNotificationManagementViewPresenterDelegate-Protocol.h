//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NCNotificationManagementViewPresenter, NCNotificationRequest, NCNotificationSectionSettings, NCNotificationSystemSettings, NSDate, NSString;

@protocol NCNotificationManagementViewPresenterDelegate <NSObject>
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsTimeSensitive:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (NCNotificationSectionSettings *)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;

@optional
- (void)notificationManagementViewPresenterDidDismissManagementView:(NCNotificationManagementViewPresenter *)arg1;
- (void)notificationManagementViewPresenterWillPresentManagementView:(NCNotificationManagementViewPresenter *)arg1;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setScheduledDelivery:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setMuted:(_Bool)arg2 untilDate:(NSDate *)arg3 forNotificationRequest:(NCNotificationRequest *)arg4 withSectionIdentifier:(NSString *)arg5 threadIdentifier:(NSString *)arg6;
- (NCNotificationSystemSettings *)notificationManagementViewPresenterRequestsSystemSettings:(NCNotificationManagementViewPresenter *)arg1;
@end

