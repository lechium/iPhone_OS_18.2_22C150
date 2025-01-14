//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsKit/NCNotificationSectionSettings.h>

@interface NCNotificationSectionSettings (Bulletin)
+ (id)notificationSectionSettingsForBBSectionInfo:(id)arg1;	// IMP=0x0020000000061f3c
- (unsigned long long)_groupingSettingFromBBGroupingSetting:(long long)arg1;	// IMP=0x0010000000063408
- (unsigned long long)_contentPreviewSettingFromBBContentPreviewSetting:(long long)arg1;	// IMP=0x00100000000633b6
@property(readonly, nonatomic, getter=isSummarizationEnabled) _Bool summarizationEnabled;
@property(readonly, nonatomic, getter=hasUserConfiguredDirectMessagesSetting) _Bool userConfiguredDirectMessagesSetting;
@property(readonly, nonatomic, getter=isDirectMessagesEnabled) _Bool directMessagesEnabled;
@property(readonly, nonatomic, getter=isScheduledDeliveryEnabled) _Bool scheduledDeliveryEnabled;
@property(readonly, nonatomic, getter=hasUserConfiguredTimeSensitiveSetting) _Bool userConfiguredTimeSensitiveSetting;
@property(readonly, nonatomic, getter=isTimeSensitiveEnabled) _Bool timeSensitiveEnabled;
- (unsigned long long)contentPreviewSettingForRequestWithSubSectionIdentifiers:(id)arg1;	// IMP=0x0010000000062e93
- (id)_notificationSectionSettingsForSubSectionWithIdentifier:(id)arg1;	// IMP=0x0010000000062ca1
@property(readonly, nonatomic) unsigned long long groupingSetting;
@property(readonly, nonatomic) unsigned long long contentPreviewSetting;
@property(readonly, nonatomic) long long subSectionPriority;
@property(readonly, nonatomic) _Bool showsInLockScreen;
@property(readonly, nonatomic) _Bool showsInNotificationCenter;
@property(readonly, nonatomic) _Bool criticalAlertsEnabled;
@property(readonly, nonatomic) _Bool notificationsEnabled;
@end

