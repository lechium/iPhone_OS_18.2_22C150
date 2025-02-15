//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteStatement : NSObject
{
    AMSSQLiteConnection *_connection;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    AMSSQLiteStatement *_strongSelf;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004e5805
@property(readonly, nonatomic) struct sqlite3_stmt *sqlite3_stmt; // @synthesize sqlite3_stmt=_statement;
@property(readonly, nonatomic) AMSSQLiteConnection *connection; // @synthesize connection=_connection;
- (int)clearBindings;	// IMP=0x00000000004e57b0
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e575e
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e56ec
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e55e3
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e54f6
- (void)bindNullableString:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e54cf
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x00000000004e5492
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e5455
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e5418
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e53d7
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e539a
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e533f
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e5301
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e5250
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e51a3
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e5148
- (int)step;	// IMP=0x00000000004e5107
@property(readonly, copy, nonatomic) NSString *SQL;
- (int)reset;	// IMP=0x00000000004e505c
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly;
- (int)finalizeStatement;	// IMP=0x00000000004e4fe0
@property(readonly, copy, nonatomic) NSDictionary *columnIndexByName;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1 onConnection:(id)arg2;	// IMP=0x00000000004e4e14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

