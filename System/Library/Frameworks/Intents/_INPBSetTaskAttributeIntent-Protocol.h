//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBContactEventTrigger, _INPBDataString, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTask, _INPBTemporalEventTrigger;

@protocol _INPBSetTaskAttributeIntent <NSObject>
@property(readonly, nonatomic) _Bool hasTemporalEventTrigger;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property(readonly, nonatomic) _Bool hasTaskTitle;
@property(retain, nonatomic) _INPBDataString *taskTitle;
@property(readonly, nonatomic) _Bool hasTargetTask;
@property(retain, nonatomic) _INPBTask *targetTask;
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status;
@property(readonly, nonatomic) _Bool hasSpatialEventTrigger;
@property(retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property(nonatomic) _Bool hasPriority;
@property(nonatomic) int priority;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) _Bool hasContactEventTrigger;
@property(retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger;
- (int)StringAsStatus:(NSString *)arg1;
- (NSString *)statusAsString:(int)arg1;
- (int)StringAsPriority:(NSString *)arg1;
- (NSString *)priorityAsString:(int)arg1;
@end

