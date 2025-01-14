//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface PK_ipp_attribute_t : NSObject
{
    NSString *x_name;	// 8 = 0x8
    NSMutableArray *_values;	// 16 = 0x10
    int _group_tag;	// 24 = 0x18
    int _value_tag;	// 28 = 0x1c
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000011c06
- (void).cxx_destruct;	// IMP=0x00000000000123af
@property(readonly) int value_tag; // @synthesize value_tag=_value_tag;
@property(readonly) int group_tag; // @synthesize group_tag=_group_tag;
@property(readonly) NSMutableArray *values; // @synthesize values=_values;
- (id)_copySettingGroup:(int)arg1;	// IMP=0x0000000000012368
- (void)enumerateValues:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012295
- (id)debugDescription;	// IMP=0x00000000000121c5
- (id)loggingDict;	// IMP=0x0000000000011e87
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) unsigned long long num_values; // @dynamic num_values;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011db4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011c0e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011a1f
- (id)initWithName:(id)arg1 group:(int)arg2 value:(int)arg3;	// IMP=0x0000000000011948
- (void)setValueTag:(int)arg1;	// IMP=0x000000000001252b
- (void)setNSName:(id)arg1;	// IMP=0x00000000000124c0
- (void)toss_last_value;	// IMP=0x00000000000124aa
- (id)addNewEmptyValue;	// IMP=0x000000000001245d
- (void)withNewEmptyValue:(CDUnknownBlockType)arg1;	// IMP=0x00000000000123d7

@end

