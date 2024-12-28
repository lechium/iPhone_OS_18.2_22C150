//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SQLiteTable : NSObject
{
    NSMutableArray *_columns;	// 8 = 0x8
    NSMutableArray *_tableConstraints;	// 16 = 0x10
    NSString *_tableName;	// 24 = 0x18
}

+ (id)SQLToRenameTable:(id)arg1 to:(id)arg2;	// IMP=0x004000000041bf05
+ (id)SQLToDropTableNamed:(id)arg1;	// IMP=0x001000000041be8c
+ (id)SQLToAddColumnWithSQL:(id)arg1 toTableNamed:(id)arg2;	// IMP=0x001000000041bdee
+ (id)SQLToInsertColumnNames:(id)arg1 fromTableNamed:(id)arg2 intoTableNamed:(id)arg3;	// IMP=0x001000000041baf4
+ (id)tableWithSQL:(id)arg1;	// IMP=0x001000000041b59a
- (void).cxx_destruct;	// IMP=0x002000000041c432
@property(copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (id)_columnNamed:(id)arg1;	// IMP=0x001000000041c254
- (unsigned long long)_indexOfColumnNamed:(id)arg1;	// IMP=0x001000000041c15c
- (id)_initWithTableSQL:(id)arg1;	// IMP=0x001000000041bfd8
- (id)creationSQL;	// IMP=0x001000000041b86d
- (id)columnNames;	// IMP=0x001000000041b6af
- (_Bool)renameColumn:(id)arg1 to:(id)arg2;	// IMP=0x001000000041b636
- (_Bool)removeColumn:(id)arg1;	// IMP=0x001000000041b5e3

@end
