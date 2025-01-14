//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteEntity : NSObject
{
    AMSSQLiteConnection *_connection;	// 8 = 0x8
    long long _persistentID;	// 16 = 0x10
}

+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 onConnection:(id)arg4;	// IMP=0x00100000004de85d
+ (Class)memoryEntityClass;	// IMP=0x00100000004dd0e5
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00100000004dd0dd
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x00100000004dd0d5
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x00100000004dd0cd
+ (id)foreignDatabaseTableForProperty:(id)arg1;	// IMP=0x00100000004dd0c5
+ (id)foreignDatabaseColumnForProperty:(id)arg1;	// IMP=0x00100000004dd0bd
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x00100000004dcff1
+ (id)databaseTable;	// IMP=0x00100000004dcfbf
+ (id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 onConnection:(id)arg4;	// IMP=0x00100000004e3720
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x00100000004e361d
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x00100000004e3608
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x00100000004e35e9
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x00100000004e35ca
+ (id)countForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3;	// IMP=0x00100000004e35ab
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x00100000004e33d8
- (void).cxx_destruct;	// IMP=0x00000000004df1cc
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) AMSSQLiteConnection *connection; // @synthesize connection=_connection;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2;	// IMP=0x00000000004df0bf
- (id)_copyTableClusteredValuesWithValues:(id)arg1;	// IMP=0x00000000004dee5b
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000004de780
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000004de76e
- (_Bool)setValuesWithDictionary:(id)arg1;	// IMP=0x00000000004dde5a
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000004ddd6e
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000004ddd5c
- (id)getValuesForProperties:(id)arg1;	// IMP=0x00000000004dd5af
@property(readonly, nonatomic) _Bool existsInDatabase;
- (_Bool)deleteFromDatabase;	// IMP=0x00000000004dd0f6
- (id)initWithPropertyValues:(id)arg1 onConnection:(id)arg2;	// IMP=0x00000000004dcce7
- (id)initWithPersistentID:(long long)arg1 onConnection:(id)arg2;	// IMP=0x00000000004dcc70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

