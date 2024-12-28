//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/EDBaseMessage-Protocol.h>

@class EDPersistedMessageID, EMCategory, EMFollowUp, EMGeneratedSummary, EMReadLater, EMSearchableMessageID, NSData, NSDate, NSDictionary, NSString, NSURL;
@protocol EDAccount;

@protocol EDPersistedMessage <EDBaseMessage>
@property(readonly, nonatomic) NSString *notificationID;
@property(readonly, nonatomic) long long authenticationState;
@property(readonly, copy, nonatomic) NSString *businessLogoID;
@property(readonly, nonatomic) long long businessID;
@property(readonly, nonatomic) _Bool isJournaled;
@property(readonly, nonatomic) NSURL *basePath;
@property(readonly, nonatomic) EMCategory *category;
@property(readonly, copy, nonatomic) NSDictionary *dataDetectionAttributes;
@property(readonly, nonatomic) NSData *brandIndicator;
@property(readonly, nonatomic) NSURL *brandIndicatorLocation;
@property(readonly, nonatomic) long long unsubscribeType;
@property(retain, nonatomic) EMFollowUp *followUp;
@property(readonly, nonatomic) id <EDAccount> accountForSender;
@property(retain) NSDate *sendLaterDate;
@property(retain) EMReadLater *readLater;
@property(retain) NSDate *displayDate;
@property(readonly, nonatomic) long long senderBucket;
@property(readonly) unsigned long long conversationFlags;
@property(copy, nonatomic) EMGeneratedSummary *generatedSummary;
@property(readonly, copy, nonatomic) NSString *summary;
@property(readonly, nonatomic) long long globalMessageID;
@property(readonly, copy, nonatomic) EMSearchableMessageID *searchableMessageID;
@property(readonly, copy, nonatomic) EDPersistedMessageID *persistedMessageID;
@property(readonly, copy, nonatomic) NSString *persistentID;
- (void)setBrandIndicatorLocation:(NSURL *)arg1 andData:(NSData *)arg2;
@end
