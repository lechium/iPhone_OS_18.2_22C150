//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSUserProperties : NSObject
{
    _Bool _disableRegistration;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b329
@property(readonly, nonatomic) _Bool disableRegistration; // @synthesize disableRegistration=_disableRegistration;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000b354
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000b331
- (id)description;	// IMP=0x001000000000b2bd
- (unsigned long long)hash;	// IMP=0x001000000000b285
- (_Bool)isEqualToUserProperties:(id)arg1;	// IMP=0x001000000000b23e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000b1e5
- (id)propsByupdatingDisableRegistration:(_Bool)arg1;	// IMP=0x001000000000b1bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000b19c

@end

