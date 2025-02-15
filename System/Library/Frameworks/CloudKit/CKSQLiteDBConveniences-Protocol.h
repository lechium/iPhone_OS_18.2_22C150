//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber, NSSet, NSString;

@protocol CKSQLiteDBConveniences
- (NSArray *)selectAllObjectsOfClass:(Class)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3 limit:(NSNumber *)arg4;
- (NSArray *)selectAllObjectsOfClass:(Class)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3;
- (NSArray *)selectAllObjectsOfClass:(Class)arg1;
- (int)deleteAllObjectsOfClass:(Class)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3;
- (long long)selectCountFrom:(NSString *)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3;
- (NSArray *)selectAllFrom:(NSString *)arg1 where:(NSString *)arg2 bindings:(NSArray *)arg3;
- (NSArray *)select:(NSArray *)arg1 from:(NSString *)arg2 where:(NSString *)arg3 bindings:(NSArray *)arg4 orderBy:(NSArray *)arg5 limit:(NSNumber *)arg6;
- (NSArray *)select:(NSArray *)arg1 from:(NSString *)arg2 where:(NSString *)arg3 bindings:(NSArray *)arg4 orderBy:(NSArray *)arg5;
- (NSArray *)select:(NSArray *)arg1 from:(NSString *)arg2 where:(NSString *)arg3 bindings:(NSArray *)arg4;
- (NSArray *)select:(NSArray *)arg1 from:(NSString *)arg2;
- (NSSet *)columnNamesForTable:(NSString *)arg1;
- (void)removePropertyForKey:(NSString *)arg1;
- (void)setDateProperty:(NSDate *)arg1 forKey:(NSString *)arg2;
- (NSDate *)datePropertyForKey:(NSString *)arg1;
- (void)setProperty:(NSString *)arg1 forKey:(NSString *)arg2;
- (NSString *)propertyForKey:(NSString *)arg1;
- (NSArray *)allTableNames;
@end

