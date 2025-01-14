//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface Result : NSObject
{
    _Bool _isSuccess;	// 8 = 0x8
    id _value;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (id)resultWithError:(id)arg1;	// IMP=0x0040000000579318
+ (id)resultWithValue:(id)arg1;	// IMP=0x00100000005792cf
- (void).cxx_destruct;	// IMP=0x0020000000579cbe
@property(readonly, nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)flatMap:(CDUnknownBlockType)arg1;	// IMP=0x0010000000579c4f
- (id)map:(CDUnknownBlockType)arg1;	// IMP=0x0010000000579be5
- (unsigned long long)hash;	// IMP=0x0010000000579bae
- (_Bool)isEqualToResult:(id)arg1;	// IMP=0x0010000000579a0c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000005799a1
- (id)_errorMessageForValue:(_Bool)arg1 error:(_Bool)arg2;	// IMP=0x0010000000579954
- (id)description;	// IMP=0x00100000005796de
- (void)withValue:(CDUnknownBlockType)arg1 orError:(CDUnknownBlockType)arg2;	// IMP=0x0010000000579499
- (id)initWithError:(id)arg1;	// IMP=0x00100000005793fd
- (id)initWithSuccess:(id)arg1;	// IMP=0x0000000000579361

@end

