//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/PLExpandedPlatter-Protocol.h>
#import <UserNotificationsUIKit/PLPlatter-Protocol.h>
#import <UserNotificationsUIKit/PLTitled-Protocol.h>

@class UITapGestureRecognizer;

@protocol NCCustomContentContainingLookView <PLPlatter, PLTitled, PLExpandedPlatter>
@property(readonly, nonatomic) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property(nonatomic) _Bool hidesNotificationContent;
@property(nonatomic) unsigned long long customContentLocation;
@end

