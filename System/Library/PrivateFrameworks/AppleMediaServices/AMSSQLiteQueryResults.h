//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteStatement, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteQueryResults : NSObject
{
    AMSSQLiteStatement *_statement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004e43bf
- (int)clearBindings;	// IMP=0x00000000004e43a9
- (void)bindURL:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e4393
- (void)bindStringCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e437d
- (void)bindString:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e4367
- (void)bindNumber:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e4351
- (void)bindNullableString:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e433b
- (void)bindNullAtPosition:(int)arg1;	// IMP=0x00000000004e4325
- (void)bindInt64:(long long)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e430f
- (void)bindInt:(int)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e42f9
- (void)bindFloat:(float)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e42e3
- (void)bindDouble:(double)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e42cd
- (void)bindDictionary:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e42b7
- (void)bindDate:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e42a1
- (void)bindDataCopy:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e428b
- (void)bindData:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e4275
- (void)bindArray:(id)arg1 atPosition:(int)arg2;	// IMP=0x00000000004e425f
@property(readonly, nonatomic) _Bool hasRows;
@property(readonly, copy, nonatomic) NSNumber *firstNumberValue;
@property(readonly, nonatomic) long long firstInt64Value;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004e3dde
- (id)initWithStatement:(id)arg1;	// IMP=0x00000000004e3d73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
