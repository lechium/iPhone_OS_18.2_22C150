//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetricsDatabase, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMetricsDatabaseDataSource : NSObject
{
    AMSMetricsDatabase *_database;	// 8 = 0x8
    NSString *_containerIdentifier;	// 16 = 0x10
    NSString *_currentLockKey;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000043fe44
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *currentLockKey; // @synthesize currentLockKey=_currentLockKey;
@property(readonly, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (_Bool)willStartBatchingWithLogKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000043fba8
- (_Bool)skipEvents:(id)arg1 error:(id *)arg2;	// IMP=0x000000000043f94e
- (_Bool)removeEvents:(id)arg1 error:(id *)arg2;	// IMP=0x000000000043f6cf
- (void)enumerateSortedEventsForTopic:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000043f4a0
- (void)didFinishBatching;	// IMP=0x000000000043f1a2
- (void)removeAllEvents;	// IMP=0x000000000043eef4
- (id)enqueueEvents:(id)arg1;	// IMP=0x000000000043eb6b
- (void)cancel;	// IMP=0x000000000043eb65
@property(readonly, nonatomic) AMSMetricsDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) long long eventCount;
- (void)dealloc;	// IMP=0x000000000043e64c
- (id)initWithContainerIdentifier:(id)arg1;	// IMP=0x000000000043e5c5

@end
