//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;
@protocol CLSEntityChangeNotifiable, OS_dispatch_queue;

@interface PDDataObserver : NSObject
{
    Class _entityClass;	// 8 = 0x8
    NSString *_predicateWhereSql;	// 16 = 0x10
    NSString *_inversePredicateWhereNotSql;	// 24 = 0x18
    NSArray *_bindings;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    _Bool _invalidated;	// 48 = 0x30
    _Bool _prepared;	// 49 = 0x31
    unsigned long long _options;	// 56 = 0x38
    NSObject<CLSEntityChangeNotifiable> *_remoteObserver;	// 64 = 0x40
    long long _changedEntitiesCount;	// 72 = 0x48
    long long _changedMatchingEntitiesCount;	// 80 = 0x50
    NSDate *_lastTriggerDate;	// 88 = 0x58
    long long _lastChangeID;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000f68d2
@property long long lastChangeID; // @synthesize lastChangeID=_lastChangeID;
@property(copy, nonatomic) NSDate *lastTriggerDate; // @synthesize lastTriggerDate=_lastTriggerDate;
@property long long changedMatchingEntitiesCount; // @synthesize changedMatchingEntitiesCount=_changedMatchingEntitiesCount;
@property long long changedEntitiesCount; // @synthesize changedEntitiesCount=_changedEntitiesCount;
@property(getter=isPrepared) _Bool prepared; // @synthesize prepared=_prepared;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property unsigned long long options; // @synthesize options=_options;
- (id)description;	// IMP=0x00100000000f6524
- (_Bool)_entitiesChangedSinceLastTrigger:(id)arg1;	// IMP=0x00100000000f4b85
- (void)_sendClientEntitiesChangedAdded:(id)arg1 updated:(id)arg2 deleted:(id)arg3 updatedMatchingPredicate:(id)arg4 updatedNotMatchingPredicate:(id)arg5;	// IMP=0x00100000000f49f7
- (_Bool)_entityCountsChangedSinceLastTrigger:(id)arg1;	// IMP=0x00100000000f455f
- (id)observedTableName;	// IMP=0x00100000000f414d

@end
