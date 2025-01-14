//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinBoard/BBSectionInfo.h>

@interface BBSectionInfo (UserNotificationsServer)
- (id)_uns_muteAssertion;	// IMP=0x009000000000ba0f
- (id)uns_topicSettings;	// IMP=0x009000000000b709
- (id)uns_bundlePath;	// IMP=0x009000000000b5fb
- (id)uns_settingsIcon;	// IMP=0x009000000000b396
- (id)uns_notificationSource;	// IMP=0x009000000000b1ac
- (void)uns_setPropertiesFromTopicRecord:(id)arg1;	// IMP=0x009000000000aef4
- (void)uns_setPropertiesFromSourceSettingsDescription:(id)arg1;	// IMP=0x009000000000acf6
- (long long)uns_notificationSettingForBBSectionAnnounceSetting:(long long)arg1;	// IMP=0x009000000000acd7
- (long long)uns_BBSectionAnnounceSettingForUNNotificationSetting:(long long)arg1;	// IMP=0x009000000000ac9f
- (long long)uns_BBSectionInfoSettingForUNNotificationSetting:(long long)arg1;	// IMP=0x009000000000ac88
- (long long)uns_notificationSettingForBBSectionInfoSetting:(long long)arg1;	// IMP=0x009000000000ac71
- (id)uns_notificationSettings;	// IMP=0x009000000000a96a
- (void)uns_setPropertiesFromNotificationSettings:(id)arg1 systemSettings:(id)arg2;	// IMP=0x009000000000a60d
- (void)uns_setPropertiesFromAuthorizationOptions:(unsigned long long)arg1 supportsProvisionalAlerts:(_Bool)arg2;	// IMP=0x009000000000a3e7
@end

