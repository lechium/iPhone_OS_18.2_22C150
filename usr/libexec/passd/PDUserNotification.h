//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, PKApplicationMessageContent;

@interface PDUserNotification : NSObject
{
    _Bool _allowPresentationOverPass;	// 8 = 0x8
    _Bool _reissueBannerOnUpdate;	// 9 = 0x9
    _Bool _active;	// 10 = 0xa
    _Bool _suppressed;	// 11 = 0xb
    _Bool _needsNotificationSettings;	// 12 = 0xc
    _Bool _playsSound;	// 13 = 0xd
    _Bool _preventAutomaticDismissal;	// 14 = 0xe
    _Bool _isServiceNotification;	// 15 = 0xf
    _Bool _applicationMessageBadge;	// 16 = 0x10
    unsigned long long _insertionRequirements;	// 24 = 0x18
    unsigned long long _suppressionBehavior;	// 32 = 0x20
    NSString *_passUniqueIdentifier;	// 40 = 0x28
    NSString *_notificationIdentifier;	// 48 = 0x30
    NSDate *_date;	// 56 = 0x38
    NSString *_customActionRoute;	// 64 = 0x40
    NSString *_customActionVerb;	// 72 = 0x48
    NSString *_customActionURLString;	// 80 = 0x50
    NSDictionary *_customActionQueryParameters;	// 88 = 0x58
    NSString *_customActionTitle;	// 96 = 0x60
    PKApplicationMessageContent *_applicationMessageContent;	// 104 = 0x68
    NSString *_accountIdentifier;	// 112 = 0x70
    long long _assetType;	// 120 = 0x78
    unsigned long long _familyNotificationType;	// 128 = 0x80
}

+ (id)applicationMessageIconForFeature:(unsigned long long)arg1;	// IMP=0x00200000002c2508
+ (_Bool)supportsCoalescing;	// IMP=0x00100000002c1c53
+ (_Bool)allowReinsertionAfterDismissal;	// IMP=0x00100000002c1c4b
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002c15cb
- (void).cxx_destruct;	// IMP=0x00200000002c2ac7
@property(nonatomic) unsigned long long familyNotificationType; // @synthesize familyNotificationType=_familyNotificationType;
@property(nonatomic) long long assetType; // @synthesize assetType=_assetType;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) _Bool applicationMessageBadge; // @synthesize applicationMessageBadge=_applicationMessageBadge;
@property(retain, nonatomic) PKApplicationMessageContent *applicationMessageContent; // @synthesize applicationMessageContent=_applicationMessageContent;
@property(copy, nonatomic) NSString *customActionTitle; // @synthesize customActionTitle=_customActionTitle;
@property(copy, nonatomic) NSDictionary *customActionQueryParameters; // @synthesize customActionQueryParameters=_customActionQueryParameters;
@property(copy, nonatomic) NSString *customActionURLString; // @synthesize customActionURLString=_customActionURLString;
@property(copy, nonatomic) NSString *customActionVerb; // @synthesize customActionVerb=_customActionVerb;
@property(copy, nonatomic) NSString *customActionRoute; // @synthesize customActionRoute=_customActionRoute;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *notificationIdentifier; // @synthesize notificationIdentifier=_notificationIdentifier;
@property(readonly, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;
@property(nonatomic) _Bool isServiceNotification; // @synthesize isServiceNotification=_isServiceNotification;
@property(nonatomic) _Bool preventAutomaticDismissal; // @synthesize preventAutomaticDismissal=_preventAutomaticDismissal;
@property(nonatomic) _Bool playsSound; // @synthesize playsSound=_playsSound;
@property(readonly, nonatomic) _Bool needsNotificationSettings; // @synthesize needsNotificationSettings=_needsNotificationSettings;
@property(nonatomic, getter=isSuppressed) _Bool suppressed; // @synthesize suppressed=_suppressed;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool reissueBannerOnUpdate; // @synthesize reissueBannerOnUpdate=_reissueBannerOnUpdate;
@property(nonatomic) _Bool allowPresentationOverPass; // @synthesize allowPresentationOverPass=_allowPresentationOverPass;
@property(nonatomic) unsigned long long suppressionBehavior; // @synthesize suppressionBehavior=_suppressionBehavior;
@property(nonatomic) unsigned long long insertionRequirements; // @synthesize insertionRequirements=_insertionRequirements;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x00100000002c26f8
- (id)actionURL;	// IMP=0x00100000002c1c73
- (unsigned long long)coalesceWithExistingUserNotification:(id)arg1;	// IMP=0x00100000002c1c6b
@property(readonly, nonatomic) unsigned long long notificationType;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (_Bool)isCashFamilyNotification;	// IMP=0x00100000002c1c29
- (id)description;	// IMP=0x00100000002c1ab6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002c1902
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002c15d3
- (id)initWithNotificationIdentifier:(id)arg1 forAccountIdentifier:(id)arg2;	// IMP=0x00100000002c14ef
- (id)initWithNotificationIdentifier:(id)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x00100000002c1413
- (id)_payLaterApplicationMessageContentWithTitleText:(id)arg1 messageText:(id)arg2;	// IMP=0x0010000000375afe
- (id)_payLaterApplicationMessageGroupDescriptor;	// IMP=0x0010000000375aa7
- (void)updatePassNameForNotificationContent:(id)arg1 dataSource:(id)arg2;	// IMP=0x00100000003759a0

@end

