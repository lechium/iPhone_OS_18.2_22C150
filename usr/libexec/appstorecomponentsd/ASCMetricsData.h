//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface ASCMetricsData : NSObject
{
    _Bool _shouldFlush;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
    NSDictionary *_fields;	// 24 = 0x18
    NSSet *_includingFields;	// 32 = 0x20
    NSSet *_excludingFields;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001ecf9
- (void).cxx_destruct;	// IMP=0x002000000001f77d
@property(readonly, copy, nonatomic) NSSet *excludingFields; // @synthesize excludingFields=_excludingFields;
@property(readonly, copy, nonatomic) NSSet *includingFields; // @synthesize includingFields=_includingFields;
@property(readonly, copy, nonatomic) NSDictionary *fields; // @synthesize fields=_fields;
@property(readonly, nonatomic) _Bool shouldFlush; // @synthesize shouldFlush=_shouldFlush;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (id)metricsDataByMergingFields:(id)arg1 uniquingFieldsWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001f5fd
- (id)description;	// IMP=0x001000000001f490
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001f198
- (unsigned long long)hash;	// IMP=0x001000000001f070
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001f065
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001ef29
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001ed01
- (id)initWithTopic:(id)arg1 shouldFlush:(_Bool)arg2 fields:(id)arg3 includingFields:(id)arg4 excludingFields:(id)arg5;	// IMP=0x001000000001ebd9

@end
