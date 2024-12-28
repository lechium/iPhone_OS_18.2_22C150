//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarNotification/NSObject-Protocol.h>

@class CALNTriggeredEventNotificationTriggerData, NSString;
@protocol CALNTriggeredEventNotificationDataSource;

@protocol CALNTriggeredEventNotificationDataSourceDelegate <NSObject>
- (void)dataSource:(id <CALNTriggeredEventNotificationDataSource>)arg1 travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(NSString *)arg2;
- (void)dataSource:(id <CALNTriggeredEventNotificationDataSource>)arg1 travelAdvisoryAuthorizationChanged:(_Bool)arg2;
- (void)dataSource:(id <CALNTriggeredEventNotificationDataSource>)arg1 triggeredWithSourceClientIdentifier:(NSString *)arg2 triggerData:(CALNTriggeredEventNotificationTriggerData *)arg3;
@end
