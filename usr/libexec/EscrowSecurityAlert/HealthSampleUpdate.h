//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HealthSample, NSDate, NSDictionary;

@interface HealthSampleUpdate : NSObject
{
    NSDictionary *_storage;	// 8 = 0x8
    HealthSample *_lastHealthSample;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000009853
- (void).cxx_destruct;	// IMP=0x002000000000982b
@property(readonly, nonatomic) HealthSample *lastHealthSample; // @synthesize lastHealthSample=_lastHealthSample;
- (id)metricsDict;	// IMP=0x0010000000009003
- (id)updatedValueWithHealthSample:(id)arg1;	// IMP=0x0010000000008e12
@property(readonly, nonatomic) NSDate *lastHealthSampleTimestamp;
- (id)recordForType:(unsigned long long)arg1;	// IMP=0x0010000000008d92
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000008c68
- (id)init;	// IMP=0x0010000000008c28
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000998f
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000985b

@end
