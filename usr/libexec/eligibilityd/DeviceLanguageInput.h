//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface DeviceLanguageInput
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000003e15
- (id)description;	// IMP=0x0020000000003d44
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000003cc7
- (unsigned long long)hash;	// IMP=0x0010000000003c98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000003c69
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000003c3a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000003c0b
- (id)init;	// IMP=0x0010000000003bce
@property(readonly, nonatomic) NSString *primaryLanguage;
@property(readonly, nonatomic) NSArray *deviceLanguages;

@end
