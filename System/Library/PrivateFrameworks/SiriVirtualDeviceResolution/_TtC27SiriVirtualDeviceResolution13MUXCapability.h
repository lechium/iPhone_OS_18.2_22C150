//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC27SiriVirtualDeviceResolution13MUXCapability : NSObject
{
    MISSING_TYPE *primitivesMap;	// 8 = 0x8
    MISSING_TYPE *key;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000294b1
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;	// IMP=0x001000000002940f
- (void).cxx_destruct;	// IMP=0x00000000000296c0
- (id)init;	// IMP=0x000000000002968d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002962c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000294cb
- (_Bool)matchesWithDescriptions:(id)arg1;	// IMP=0x0000000000029452
@property(nonatomic, readonly) long long supportsMUX;
- (id)initWithStatus:(long long)arg1;	// IMP=0x0000000000029314
@property(nonatomic, copy) NSString *key;

@end
