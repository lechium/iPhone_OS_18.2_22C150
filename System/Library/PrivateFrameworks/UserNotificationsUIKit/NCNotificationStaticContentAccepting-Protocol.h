//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class MTVisualStylingProvider, NCBadgedIconView, NSArray, NSAttributedString, NSDate, NSString, NSTimeZone, UIAction, UIImage, UIImageConfiguration, UIView;

@protocol NCNotificationStaticContentAccepting <NSObject>
@property(nonatomic) _Bool screenCaptureProhibited;
@property(nonatomic) long long dateFormatStyle;
@property(copy, nonatomic) NSTimeZone *timeZone;
@property(nonatomic, getter=isDateAllDay) _Bool dateAllDay;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSAttributedString *secondaryText;
@property(copy, nonatomic) NSString *primarySubtitleText;
@property(copy, nonatomic) NSString *primaryText;

@optional
@property(nonatomic) _Bool hideDate;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) unsigned long long maximumNumberOfSecondaryTextLines;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) unsigned long long maximumNumberOfPrimaryTextLines;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(retain, nonatomic) UIView *accessoryView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,&,N

@property(copy, nonatomic) NSArray *menuActions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,C,N

@property(retain, nonatomic) NSArray *interfaceActions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,&,N

@property(copy, nonatomic) UIImage *thumbnail;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImage",?,C,N

@property(copy, nonatomic) NSString *footerText;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(copy, nonatomic) UIAction *inlineAction;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIAction",?,C,N

@property(retain, nonatomic) MTVisualStylingProvider *importantTextVisualStylingProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"MTVisualStylingProvider",?,&,N

@property(readonly, copy, nonatomic) UIImageConfiguration *importantTextImageConfiguration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIImageConfiguration",?,R,C,N

@property(copy, nonatomic) NSAttributedString *importantAttributedText;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSAttributedString",?,C,N

@property(copy, nonatomic) NSString *importantText;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(copy, nonatomic) NSString *summaryText;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(copy, nonatomic) NSString *title;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(retain, nonatomic) NCBadgedIconView *badgedIconView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NCBadgedIconView",?,&,N

@property(copy, nonatomic) NSAttributedString *contentSummaryText;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSAttributedString",?,C,N

@end

