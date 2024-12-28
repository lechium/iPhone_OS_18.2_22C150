//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation;

@protocol _INPBSearchForNotebookItemsIntent <NSObject>
@property(readonly, nonatomic) _Bool hasTitle;
@property(retain, nonatomic) _INPBDataString *title;
@property(readonly, nonatomic) unsigned long long temporalEventTriggerTypesCount;
@property(readonly, nonatomic) int *temporalEventTriggerTypes;
@property(nonatomic) _Bool hasTaskPriority;
@property(nonatomic) int taskPriority;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
@property(readonly, nonatomic) _Bool hasNotebookItemIdentifier;
@property(copy, nonatomic) NSString *notebookItemIdentifier;
@property(nonatomic) _Bool hasLocationSearchType;
@property(nonatomic) int locationSearchType;
@property(readonly, nonatomic) _Bool hasLocation;
@property(retain, nonatomic) _INPBLocation *location;
@property(nonatomic) _Bool hasItemType;
@property(nonatomic) int itemType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasIncludeAllNoteContents;
@property(nonatomic) _Bool includeAllNoteContents;
@property(readonly, nonatomic) _Bool hasGroupName;
@property(retain, nonatomic) _INPBDataString *groupName;
@property(readonly, nonatomic) _Bool hasDateTime;
@property(retain, nonatomic) _INPBDateTimeRange *dateTime;
@property(nonatomic) _Bool hasDateSearchType;
@property(nonatomic) int dateSearchType;
@property(readonly, nonatomic) _Bool hasContent;
@property(copy, nonatomic) NSString *content;
- (int)StringAsTemporalEventTriggerTypes:(NSString *)arg1;
- (NSString *)temporalEventTriggerTypesAsString:(int)arg1;
- (void)setTemporalEventTriggerTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)temporalEventTriggerTypeAtIndex:(unsigned long long)arg1;
- (void)addTemporalEventTriggerType:(int)arg1;
- (void)clearTemporalEventTriggerTypes;
- (int)StringAsTaskPriority:(NSString *)arg1;
- (NSString *)taskPriorityAsString:(int)arg1;
- (int)StringAsStatus:(NSString *)arg1;
- (NSString *)statusAsString:(int)arg1;
- (int)StringAsLocationSearchType:(NSString *)arg1;
- (NSString *)locationSearchTypeAsString:(int)arg1;
- (int)StringAsItemType:(NSString *)arg1;
- (NSString *)itemTypeAsString:(int)arg1;
- (int)StringAsDateSearchType:(NSString *)arg1;
- (NSString *)dateSearchTypeAsString:(int)arg1;
@end
