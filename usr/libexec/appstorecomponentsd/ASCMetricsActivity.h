//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ASCMetricsActivity : NSObject
{
    NSDictionary *_fields;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001e3bc
+ (id)defaultFields;	// IMP=0x001000000001e185
- (void).cxx_destruct;	// IMP=0x002000000001e9d5
@property(readonly, copy, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
- (id)metricsActivityByRemovingValueForKey:(id)arg1;	// IMP=0x001000000001e910
- (id)metricsActivityByMergingFields:(id)arg1 uniquingFieldsWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e843
- (id)metricsActivityWithValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000001e76d
- (id)description;	// IMP=0x001000000001e6cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001e5c4
- (unsigned long long)hash;	// IMP=0x001000000001e549
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001e53e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001e4ce
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001e3c4
- (id)init;	// IMP=0x001000000001e3a3
- (id)initWithFields:(id)arg1;	// IMP=0x001000000001e2d6

@end

