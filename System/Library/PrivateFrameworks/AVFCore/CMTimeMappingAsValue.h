//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

__attribute__((visibility("hidden")))
@interface CMTimeMappingAsValue : NSValue
{
    CDStruct_82206317 _timeMapping;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000011d20
+ (id)valueWithCMTimeMapping:(CDStruct_82206317)arg1;	// IMP=0x0060000000011877
- (Class)classForCoder;	// IMP=0x0000000000011f7f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011e61
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011d28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011c67
- (unsigned long long)hash;	// IMP=0x0000000000011b8c
- (_Bool)isEqualToValue:(id)arg1;	// IMP=0x0000000000011a3f
- (id)description;	// IMP=0x0000000000011967
- (const char *)objCType;	// IMP=0x000000000001195a
- (void)getValue:(void *)arg1;	// IMP=0x0000000000011919
- (CDStruct_82206317)CMTimeMappingValue;	// IMP=0x00000000000118d5

@end
