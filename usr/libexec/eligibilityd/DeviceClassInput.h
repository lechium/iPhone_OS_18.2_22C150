//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DeviceClassInput
{
    NSString *_deviceClass;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000010436
+ (id)_mgDeviceClass;	// IMP=0x001000000001041d
- (void).cxx_destruct;	// IMP=0x002000000001040a
@property(retain, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_deviceClass;
- (id)description;	// IMP=0x0010000000010339
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000101a1
- (unsigned long long)hash;	// IMP=0x0010000000010124
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000010086
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001000b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000ffdc
@property(readonly, nonatomic) _Bool isiPhone;
@property(readonly, nonatomic) _Bool isiPad;
- (id)init;	// IMP=0x001000000000fecb

@end

