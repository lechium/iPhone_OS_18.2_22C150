//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSOperationQueue;

@interface STRollupUsageOperation
{
    _Bool _isBackgroundTask;	// 8 = 0x8
    _Bool _recomputingUsage;	// 9 = 0x9
    NSDate *_genesisDate;	// 16 = 0x10
    long long _duration;	// 24 = 0x18
    NSDate *_referenceDate;	// 32 = 0x20
    NSOperationQueue *_usageOperationQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000096c32
@property(retain, nonatomic) NSOperationQueue *usageOperationQueue; // @synthesize usageOperationQueue=_usageOperationQueue;
@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(readonly, getter=isRecomputingUsage) _Bool recomputingUsage; // @synthesize recomputingUsage=_recomputingUsage;
@property(readonly, nonatomic) _Bool isBackgroundTask; // @synthesize isBackgroundTask=_isBackgroundTask;
@property(readonly, nonatomic) long long duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSDate *genesisDate; // @synthesize genesisDate=_genesisDate;
- (id)_lastUsageItemStartDate;	// IMP=0x001000000009693b
- (void)_saveContextAndEndOperation:(id)arg1;	// IMP=0x00100000000967fb
- (_Bool)_purgeEmptyUsageInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000096553
- (_Bool)_purgeUsageBlocksWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;	// IMP=0x001000000009638a
- (void)_persistUsageOperationDidFinish:(id)arg1 inContext:(id)arg2;	// IMP=0x001000000009630d
- (void)_runWithManagedObjectContext:(id)arg1 purgePredicate:(id)arg2;	// IMP=0x0010000000095d77
- (id)_dayDurationPredicate;	// IMP=0x0010000000095d48
- (void)main;	// IMP=0x0010000000095916
- (void)cancel;	// IMP=0x00100000000958ac
- (_Bool)isAsynchronous;	// IMP=0x00100000000958a4
- (id)initWithPersistenceController:(id)arg1 genesisDate:(id)arg2 duration:(long long)arg3 isBackgroundTask:(_Bool)arg4 isRecomputingUsage:(_Bool)arg5;	// IMP=0x0010000000095799

@end

