//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsTransport/NTPBIssueReadingHistoryItem.h>

@class NSDate, NSString;

@interface NTPBIssueReadingHistoryItem (FCIssueReadingHistory)
+ (id)readValueFromKeyValuePair:(id)arg1;	// IMP=0x00100000002f3b16
+ (int)keyValuePairType;	// IMP=0x00100000002f3b0b
+ (id)issueReadingHistoryItemWithCKRecord:(id)arg1;	// IMP=0x00100000002f3147
- (void)writeToKeyValuePair:(id)arg1;	// IMP=0x00100000002f3b2b
- (id)asCKRecord;	// IMP=0x00100000002f3829
@property(copy, nonatomic) NSDate *lastRemovedFromMyMagazinesDate;
@property(copy, nonatomic) NSDate *lastSeenDate;
@property(copy, nonatomic) NSDate *lastEngagedDate;
@property(copy, nonatomic) NSDate *lastBadgedDate;
@property(copy, nonatomic) NSDate *lastVisitedDate;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002f349d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *issueID;
@property(copy, nonatomic) NSString *lastVisitedArticleID;
@property(copy, nonatomic) NSString *lastVisitedPageID;
@property(readonly) Class superclass;
@end

