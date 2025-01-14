//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADDeviceSyncCommandPullDeltaRequest : NSObject
{
    NSString *_dataType;	// 8 = 0x8
    unsigned long long _generation;	// 16 = 0x10
    unsigned long long _limit;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000371657
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000037160a
- (void).cxx_destruct;	// IMP=0x0020000000371430
@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000371339
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000371218
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000037120d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000371117
- (unsigned long long)hash;	// IMP=0x0010000000371066
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0010000000370fd4
- (id)description;	// IMP=0x0010000000370fc0
- (id)initWithDataType:(id)arg1 generation:(unsigned long long)arg2 limit:(unsigned long long)arg3;	// IMP=0x0010000000370f10
- (id)init;	// IMP=0x0010000000370efc
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000370de8
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000037165f

@end

