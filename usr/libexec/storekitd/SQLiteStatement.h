//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SQLiteConnection;

@interface SQLiteStatement : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    SQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000093a69
@property(readonly, nonatomic) struct sqlite3_stmt *sqlite3_stmt; // @synthesize sqlite3_stmt=_statement;
@property(readonly, nonatomic) SQLiteConnection *connection; // @synthesize connection=_connection;
- (int)clearBindings;	// IMP=0x0010000000093a3b
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x00100000000939e9
- (void)bindUUID:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093997
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093925
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000009381c
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000009372f
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x00100000000936f2
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x00100000000936b5
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093678
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093637
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x00100000000935fa
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x001000000009359f
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093561
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00100000000934b0
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x0010000000093403
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x00100000000933a8
- (int)step;	// IMP=0x0010000000093367
@property(readonly, copy, nonatomic) NSString *SQL;
- (int)reset;	// IMP=0x00100000000932e3
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
- (int)finalizeStatement;	// IMP=0x0010000000093267
@property(readonly, copy, nonatomic) NSDictionary *columnIndexByName;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 onConnection:(id)arg2;	// IMP=0x001000000009309b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
