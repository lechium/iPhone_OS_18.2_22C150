//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SQLiteDatabase;

@interface SQLiteDatabaseStore : NSObject
{
    SQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x002000000002e9e2
+ (id)storeDescriptor;	// IMP=0x001000000002e9c9
- (void).cxx_destruct;	// IMP=0x002000000002ea55
@property(readonly) SQLiteDatabase *database; // @synthesize database=_database;
- (void)readUsingSession:(CDUnknownBlockType)arg1;	// IMP=0x001000000002ea25
- (void)modifyUsingTransactionClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ea06
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e9ea
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000002e95e

@end
