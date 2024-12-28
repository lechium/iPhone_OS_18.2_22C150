//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CKKSSQLDatabaseObject : NSObject
{
    NSDictionary *_originalSelfWhereClause;	// 8 = 0x8
}

+ (id)sqlColumns;	// IMP=0x0020000000035448
+ (id)sqlTable;	// IMP=0x00100000000353a0
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00100000000352ec
+ (id)fetch:(unsigned long long)arg1 where:(id)arg2 orderBy:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000035131
+ (id)fetch:(unsigned long long)arg1 where:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000035119
+ (id)fetch:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000350ff
+ (id)allWhere:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000034f64
+ (id)all:(id *)arg1;	// IMP=0x0010000000034f4d
+ (id)tryFromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000034dce
+ (id)fromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000034c65
+ (_Bool)_deleteAll:(id *)arg1;	// IMP=0x0010000000034c06
+ (_Bool)deleteAll:(id *)arg1;	// IMP=0x0010000000034b8b
+ (_Bool)performCKKSTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000034a4c
+ (_Bool)queryMaxValueForField:(id)arg1 inTable:(id)arg2 where:(id)arg3 columns:(id)arg4 processRow:(CDUnknownBlockType)arg5;	// IMP=0x001000000003487e
+ (id)quotedString:(id)arg1;	// IMP=0x00100000000347ed
+ (_Bool)queryDatabaseTable:(id)arg1 where:(id)arg2 columns:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 processRow:(CDUnknownBlockType)arg7 error:(id *)arg8;	// IMP=0x00100000000345f6
+ (_Bool)deleteFromTable:(id)arg1 where:(id)arg2 connection:(struct __OpaqueSecDbConnection *)arg3 error:(id *)arg4;	// IMP=0x001000000003447a
+ (void)bindWhereClause:(struct sqlite3_stmt *)arg1 whereDict:(id)arg2 cferror:(struct __CFError **)arg3;	// IMP=0x0010000000034366
+ (id)orderByClause:(id)arg1;	// IMP=0x0010000000034257
+ (id)groupByClause:(id)arg1;	// IMP=0x001000000003415f
+ (id)makeWhereClause:(id)arg1;	// IMP=0x0010000000034067
+ (_Bool)saveToDatabaseTable:(id)arg1 row:(id)arg2 connection:(struct __OpaqueSecDbConnection *)arg3 error:(id *)arg4;	// IMP=0x0010000000033ef0
+ (_Bool)deleteAllWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000657b7
+ (id)allWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006561a
+ (id)allParentKeyUUIDsInContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006532e
+ (id)allUUIDsWithContextID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000065052
+ (id)allUUIDsWithContextID:(id)arg1 inZones:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000064c02
- (void).cxx_destruct;	// IMP=0x0020000000033ee0
@property(copy) NSDictionary *originalSelfWhereClause; // @synthesize originalSelfWhereClause=_originalSelfWhereClause;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000033e66
- (id)whereClauseToFindSelf;	// IMP=0x0010000000033dbe
- (id)sqlValues;	// IMP=0x0010000000033d16
- (id)memoizeOriginalSelfWhereClause;	// IMP=0x0010000000033ce0
- (_Bool)_deleteFromDatabase:(id *)arg1;	// IMP=0x0010000000033c4a
- (_Bool)deleteFromDatabase:(id *)arg1;	// IMP=0x0010000000033bcf
- (_Bool)_saveToDatabaseWithConnection:(struct __OpaqueSecDbConnection *)arg1 error:(id *)arg2;	// IMP=0x0010000000033a24
- (_Bool)saveToDatabaseWithConnection:(struct __OpaqueSecDbConnection *)arg1 error:(id *)arg2;	// IMP=0x00100000000339a0
- (_Bool)saveToDatabase:(id *)arg1;	// IMP=0x0010000000033989

@end
