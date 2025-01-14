//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBAnnouncementRecord;

@protocol _INPBReadAnnouncementIntentResponse <NSObject>
+ (Class)announcementRecordsType;
@property(readonly, nonatomic) unsigned long long announcementRecordsCount;
@property(copy, nonatomic) NSArray *announcementRecords;
- (_INPBAnnouncementRecord *)announcementRecordsAtIndex:(unsigned long long)arg1;
- (void)addAnnouncementRecords:(_INPBAnnouncementRecord *)arg1;
- (void)clearAnnouncementRecords;
@end

