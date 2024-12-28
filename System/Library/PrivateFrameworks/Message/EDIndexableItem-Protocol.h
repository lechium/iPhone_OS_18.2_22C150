//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSObject-Protocol.h>

@class CSSearchableItem, EFFuture, NSDate, NSString;

@protocol EDIndexableItem <NSObject>
@property(readonly, nonatomic) _Bool shouldIndexImmediatelyPostPreprocessing;
@property(readonly, nonatomic) _Bool requiresPreprocessing;
@property(readonly, nonatomic) _Bool shouldExcludeFromIndex;
@property(readonly, nonatomic) _Bool alwaysMarkAsIndexed;
@property(readonly, nonatomic) _Bool hasCompleteData;
@property(readonly, nonatomic) unsigned long long estimatedSizeInBytes;
@property(readonly, nonatomic) unsigned long long itemInstantiationTime;
@property(readonly, nonatomic) NSDate *dateReceived;
@property(nonatomic) long long indexingType;
@property(readonly, copy, nonatomic) NSString *domainIdentifier;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)setNeedsAllAttributesIncludingDataDetectionResultsIndexingType;
- (void)setNeedsAllAttributesIndexingType;
- (EFFuture *)fetchIndexableAttachments;
- (void)preprocess;
- (CSSearchableItem *)searchableItem;
@end
