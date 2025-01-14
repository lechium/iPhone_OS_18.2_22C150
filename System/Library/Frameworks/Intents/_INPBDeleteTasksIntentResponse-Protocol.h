//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBTask;

@protocol _INPBDeleteTasksIntentResponse <NSObject>
+ (Class)deletedTasksType;
@property(readonly, nonatomic) unsigned long long deletedTasksCount;
@property(copy, nonatomic) NSArray *deletedTasks;
- (_INPBTask *)deletedTasksAtIndex:(unsigned long long)arg1;
- (void)addDeletedTasks:(_INPBTask *)arg1;
- (void)clearDeletedTasks;
@end

