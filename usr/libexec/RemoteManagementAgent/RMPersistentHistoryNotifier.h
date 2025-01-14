//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSManagedObjectContext, NSPersistentHistoryToken, NSSet;
@protocol RMPersistentHistoryNotifierDelegate;

@interface RMPersistentHistoryNotifier : NSObject
{
    NSConditionLock *_queryCondition;	// 8 = 0x8
    _Bool _shouldUsePersistentHistoryToken;	// 16 = 0x10
    _Bool _hasStarted;	// 17 = 0x11
    _Bool _queryNeeded;	// 18 = 0x12
    id <RMPersistentHistoryNotifierDelegate> _delegate;	// 24 = 0x18
    NSManagedObjectContext *_context;	// 32 = 0x20
    NSSet *_ignoredTransactionAuthors;	// 40 = 0x28
    NSSet *_interestingEntities;	// 48 = 0x30
    NSPersistentHistoryToken *_persistentHistoryToken;	// 56 = 0x38
}

+ (id)sharedQueryQueue;	// IMP=0x004000000006ba2e
- (void).cxx_destruct;	// IMP=0x002000000006d3b4
@property(nonatomic) _Bool queryNeeded; // @synthesize queryNeeded=_queryNeeded;
@property(nonatomic) _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(readonly, nonatomic) _Bool shouldUsePersistentHistoryToken; // @synthesize shouldUsePersistentHistoryToken=_shouldUsePersistentHistoryToken;
@property(retain) NSPersistentHistoryToken *persistentHistoryToken; // @synthesize persistentHistoryToken=_persistentHistoryToken;
@property(copy) NSSet *interestingEntities; // @synthesize interestingEntities=_interestingEntities;
@property(copy) NSSet *ignoredTransactionAuthors; // @synthesize ignoredTransactionAuthors=_ignoredTransactionAuthors;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <RMPersistentHistoryNotifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_queryForTransactionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000006c267
- (void)_delayedQuery;	// IMP=0x001000000006bf7c
- (void)_scheduleQueryForTransactions;	// IMP=0x001000000006be57
- (void)_managedObjectContextDidSave:(id)arg1;	// IMP=0x001000000006bd73
- (void)start;	// IMP=0x001000000006bad5
- (void)dealloc;	// IMP=0x001000000006b986
- (id)initWithContext:(id)arg1;	// IMP=0x001000000006b8e4
- (id)initWithPersistentHistoryToken:(id)arg1 context:(id)arg2;	// IMP=0x001000000006b841

@end

