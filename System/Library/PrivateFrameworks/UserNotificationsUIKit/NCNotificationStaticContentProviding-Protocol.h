//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class MTVisualStylingProvider, NCBadgedIconView, NCNotificationAction, NSArray, NSAttributedString, NSDate, NSString, NSTimeZone, UIImage, UIImageConfiguration, UIView;
@protocol NCNotificationStaticContentProvidingDelegate;

@protocol NCNotificationStaticContentProviding <NSObject>
@property(readonly, copy, nonatomic) NSArray *currentActions;
@property(readonly, copy, nonatomic) NCNotificationAction *inlineAction;
@property(copy, nonatomic) NSArray *overriddenActions;
@property(readonly, nonatomic) _Bool isThreadSummary;
@property(readonly, nonatomic) unsigned long long stackedNotificationsCount;
@property(readonly, nonatomic) _Bool isHighlighted;
@property(readonly, nonatomic) long long contentHidingEnforcement;
@property(readonly, nonatomic, getter=isHidingContent) _Bool hidingContent;
@property(readonly, nonatomic) unsigned long long coalesceCount;
@property(readonly, nonatomic) _Bool showsTextInputOnAppearance;
@property(readonly, nonatomic, getter=isNumberOfLinesInfinite) _Bool numberOfLinesInfinite;
@property(readonly, copy, nonatomic) NSArray *menuActions;
@property(readonly, copy, nonatomic) CDUnknownBlockType nilAction;
@property(readonly, copy, nonatomic) CDUnknownBlockType defaultAction;
@property(readonly, copy, nonatomic) CDUnknownBlockType closeAction;
@property(readonly, copy, nonatomic) CDUnknownBlockType clearAction;
@property(readonly, copy, nonatomic) CDUnknownBlockType cancelAction;
@property(readonly, nonatomic) NCBadgedIconView *badgedIconView;
@property(readonly, nonatomic) UIImage *thumbnail;
@property(readonly, copy, nonatomic) NSString *footerText;
@property(readonly, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
@property(readonly, copy, nonatomic) NSString *importantText;
@property(readonly, copy, nonatomic) NSAttributedString *contentSummaryText;
@property(readonly, copy, nonatomic) NSAttributedString *secondaryText;
@property(readonly, copy, nonatomic) NSString *primarySubtitleText;
@property(readonly, copy, nonatomic) NSString *primaryText;
@property(readonly, copy, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property(readonly, copy, nonatomic) NSDate *date;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) UIView *communicationAvatar;
@property(readonly, nonatomic) NSArray *icons;
@property(nonatomic) __weak id <NCNotificationStaticContentProvidingDelegate> delegate;
- (id)copyWithContentHidingEnforcement:(long long)arg1;
- (NSAttributedString *)importantAttributedTextWithImageConfiguration:(UIImageConfiguration *)arg1 importantAdornmentEligibleOptions:(unsigned long long)arg2;

@optional
@property(readonly, nonatomic) NSArray *interfaceActions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@end

