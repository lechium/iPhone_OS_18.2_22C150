//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationSystemSettings, NSString;
@protocol NCNotificationListSupplementaryViewsContaining;

@protocol NCNotificationListViewModelingTopLevel <NSObject>
@property(readonly, nonatomic) double scrollViewVisibleContentLayoutOffsetY;
@property(readonly, copy, nonatomic) NSString *incomingTitle;
@property(readonly, nonatomic) unsigned long long historyCount;
@property(readonly, nonatomic) unsigned long long incomingCount;
@property(readonly, nonatomic) struct CGRect aggregatedVisibleContentExtent;
- (void)updateNotificationSystemSettings:(NCNotificationSystemSettings *)arg1 previousSystemSettings:(NCNotificationSystemSettings *)arg2;
- (void)removeOverrideNotificationListDisplayStyleSettingForReason:(NSString *)arg1;
- (void)setOverrideNotificationListDisplayStyleSetting:(long long)arg1 forReason:(NSString *)arg2 hideNotificationCount:(_Bool)arg3;
- (id <NCNotificationListSupplementaryViewsContaining>)insertSupplementaryViewsContainerAtListPosition:(unsigned long long)arg1 identifier:(NSString *)arg2 withDescription:(NSString *)arg3;
- (void)updateListViewVisibleRectForSize:(struct CGSize)arg1;
@end
