//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol DMDEventStreamDispatcherRegistration <NSObject>

@optional
@property(readonly, nonatomic) NSArray *managedSettingsGroups;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) NSArray *notifyMatchingNotifications;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) NSArray *distributedNotificationNames;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) _Bool alarms;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)handleManagedEffectiveSettingsChangeInGroup:(NSString *)arg1;
- (void)handleNotifyMatchingNotificationWithName:(NSString *)arg1;
- (void)handleDistributedNotificationWithName:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)handleAlarmWithIdentifier:(NSString *)arg1;
@end
