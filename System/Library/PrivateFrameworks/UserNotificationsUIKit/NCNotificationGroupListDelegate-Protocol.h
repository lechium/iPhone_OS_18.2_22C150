//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NCNotificationListComponentDelegate-Protocol.h>

@class NCNotificationGroupList, NCNotificationRequest, NCNotificationRequestCoalescingContentProvider, NSString;
@protocol NCAuxiliaryOptionsProviding;

@protocol NCNotificationGroupListDelegate <NCNotificationListComponentDelegate>
- (unsigned long long)importantAdornmentEligibleOptionsForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (NSString *)collapsedSectionSummaryStringForLeadingNotificationRequestForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (_Bool)shouldShowSummaryTextAsContentForLeadingNotificationRequestForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (_Bool)shouldShowSummaryFooterTextForLeadingNotificationRequestForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (_Bool)shouldAlignContentToBottomForLeadingNotificationRequestForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (_Bool)shouldNotificationGroupListPanHorizontally:(NCNotificationGroupList *)arg1;
- (_Bool)isAttachmentImageFeaturedForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (_Bool)isRichNotificationContentViewForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (_Bool)isNotificationGroupListInCollapsedStack:(NCNotificationGroupList *)arg1;
- (_Bool)notificationGroupListShouldReloadNotificationCells:(NCNotificationGroupList *)arg1;
- (_Bool)isViewVisibleForNotificationGroupList:(NCNotificationGroupList *)arg1;
- (id <NCAuxiliaryOptionsProviding>)notificationGroupList:(NCNotificationGroupList *)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 isLongLook:(_Bool)arg3;

@optional
- (void)groupListDidLayout:(NCNotificationGroupList *)arg1;
- (NCNotificationRequestCoalescingContentProvider *)notificationGroupList:(NCNotificationGroupList *)arg1 requestsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2;
@end
