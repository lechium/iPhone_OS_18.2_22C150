//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SEMSQLCommandCriterion : NSObject
{
    NSString *_columnName;	// 8 = 0x8
    NSString *_tableName;	// 16 = 0x10
    NSString *_comparingColumnName;	// 24 = 0x18
    NSArray *_columnValues;	// 32 = 0x20
    long long _sqlOperator;	// 40 = 0x28
    NSArray *_subCriteria;	// 48 = 0x30
}

+ (id)criterionWithORSubCriteria:(id)arg1;	// IMP=0x0010000000058521
+ (id)criterionWithANDSubCriteria:(id)arg1;	// IMP=0x00100000000584cf
+ (id)criterionWithColumnName:(id)arg1 BETWEENLowerColumnValue:(id)arg2 ANDUpperColumnValue:(id)arg3;	// IMP=0x00100000000583d8
+ (id)criterionWithColumnName:(id)arg1 INColumnValues:(id)arg2;	// IMP=0x0010000000058360
+ (id)criterionWithColumnName:(id)arg1 LIKEWildcardPattern:(id)arg2;	// IMP=0x00100000000582e8
+ (id)criterionWithColumnName:(id)arg1 MATCHSearchPhrase:(id)arg2;	// IMP=0x0010000000058270
+ (id)criterionWithColumnName:(id)arg1 GREATERTHANOrEqualColumnValue:(id)arg2;	// IMP=0x00100000000581f8
+ (id)criterionWithColumnName:(id)arg1 LESSTHANOrEqualColumnValue:(id)arg2;	// IMP=0x0010000000058180
+ (id)criterionWithColumnName:(id)arg1 LESSTHANColumnValue:(id)arg2;	// IMP=0x0010000000058108
+ (id)criterionWithColumnName:(id)arg1 NOTEQUALSColumnValue:(id)arg2;	// IMP=0x0010000000058090
+ (id)criterionWithColumnName:(id)arg1 onTable:(id)arg2 EQUALSColumnValue:(id)arg3;	// IMP=0x0010000000057ffa
+ (id)criterionWithColumnName:(id)arg1 ISNOTColumnValue:(id)arg2;	// IMP=0x0010000000057f82
+ (id)criterionWithColumnName:(id)arg1 ISColumnValue:(id)arg2;	// IMP=0x0010000000057f0a
+ (id)criterionWithColumnName:(id)arg1 EQUALSColumnValue:(id)arg2;	// IMP=0x0010000000057e92
- (void).cxx_destruct;	// IMP=0x000000000005876a
@property(readonly, nonatomic) NSArray *subCriteria; // @synthesize subCriteria=_subCriteria;
@property(readonly, nonatomic) long long sqlOperator; // @synthesize sqlOperator=_sqlOperator;
@property(readonly, nonatomic) NSArray *columnValues; // @synthesize columnValues=_columnValues;
@property(readonly, nonatomic) NSString *comparingColumnName; // @synthesize comparingColumnName=_comparingColumnName;
@property(readonly, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(readonly, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000058685
- (id)init;	// IMP=0x000000000005863d
- (id)description;	// IMP=0x0000000000058573
- (id)initWithSubCriteria:(id)arg1 sqlOperator:(long long)arg2;	// IMP=0x0000000000057def
- (id)initWithColumnName:(id)arg1 tableName:(id)arg2 columnValue:(id)arg3 sqlOperator:(long long)arg4;	// IMP=0x0000000000057ce6
- (id)initWithColumnName:(id)arg1 columnValue:(id)arg2 sqlOperator:(long long)arg3;	// IMP=0x0000000000057ccc
- (id)initWithColumnName:(id)arg1 columnValues:(id)arg2 sqlOperator:(long long)arg3;	// IMP=0x0000000000057bf7

@end
