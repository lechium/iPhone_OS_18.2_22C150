//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC27SiriVirtualDeviceResolution26ProfileSwitchingCapability : NSObject
{
    MISSING_TYPE *primitivesMap;	// 8 = 0x8
    MISSING_TYPE *key;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000006a89
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)arg1;	// IMP=0x00100000000069e7
- (void).cxx_destruct;	// IMP=0x0000000000006c98
- (id)init;	// IMP=0x0000000000006c65
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006c04
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006aa3
- (_Bool)matchesWithDescriptions:(id)arg1;	// IMP=0x0000000000006a2a
@property(nonatomic, readonly) long long supportsProfileSwitching;
- (id)initWithStatus:(long long)arg1;	// IMP=0x00000000000068ec
@property(nonatomic, copy) NSString *key;

@end

