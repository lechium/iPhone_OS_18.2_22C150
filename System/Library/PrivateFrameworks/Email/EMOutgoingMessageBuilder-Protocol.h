//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EMMessageObjectID, NSData;

@protocol EMOutgoingMessageBuilder
@property(nonatomic) long long conversationNotificationLevel;
@property(nonatomic) _Bool shouldEncrypt;
@property(nonatomic) _Bool shouldSign;
@property(retain, nonatomic) EMMessageObjectID *originalMessageID;
@property(nonatomic) long long action;
@property(copy, nonatomic) NSData *messageData;
@end

