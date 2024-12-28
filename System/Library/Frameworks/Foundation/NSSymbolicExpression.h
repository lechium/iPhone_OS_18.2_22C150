//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSExpression.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSymbolicExpression : NSExpression
{
    NSString *_token;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000085109b
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000085138d
- (unsigned long long)hash;	// IMP=0x0000000000851370
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000851329
- (id)constantValue;	// IMP=0x0000000000851318
- (id)predicateFormat;	// IMP=0x0000000000851307
- (void)dealloc;	// IMP=0x00000000008512a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000085126b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000851172
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008510ae
- (unsigned long long)expressionType;	// IMP=0x00000000008510a3
- (id)initWithString:(id)arg1;	// IMP=0x0000000000850fe0

@end
