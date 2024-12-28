//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface _NBPhoneNumber : NSObject
{
    _Bool _italianLeadingZero;	// 8 = 0x8
    NSNumber *_countryCode;	// 16 = 0x10
    NSNumber *_nationalNumber;	// 24 = 0x18
    NSString *_extension;	// 32 = 0x20
    NSNumber *_numberOfLeadingZeros;	// 40 = 0x28
    NSString *_rawInput;	// 48 = 0x30
    NSNumber *_countryCodeSource;	// 56 = 0x38
    NSString *_preferredDomesticCarrierCode;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000005cccf
@property(retain, nonatomic) NSString *preferredDomesticCarrierCode; // @synthesize preferredDomesticCarrierCode=_preferredDomesticCarrierCode;
@property(retain, nonatomic) NSNumber *countryCodeSource; // @synthesize countryCodeSource=_countryCodeSource;
@property(retain, nonatomic) NSString *rawInput; // @synthesize rawInput=_rawInput;
@property(retain, nonatomic) NSNumber *numberOfLeadingZeros; // @synthesize numberOfLeadingZeros=_numberOfLeadingZeros;
@property(nonatomic) _Bool italianLeadingZero; // @synthesize italianLeadingZero=_italianLeadingZero;
@property(retain, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSNumber *nationalNumber; // @synthesize nationalNumber=_nationalNumber;
@property(retain, nonatomic) NSNumber *countryCode; // @synthesize countryCode=_countryCode;
- (id)description;	// IMP=0x000000000005ca7e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005c87f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005c653
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c3d1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005c0f9
- (unsigned long long)hash;	// IMP=0x000000000005bfb0
- (long long)getCountryCodeSourceOrDefault;	// IMP=0x000000000005bf31
- (void)clearCountryCodeSource;	// IMP=0x000000000005bf1d
- (id)init;	// IMP=0x000000000005be97

@end
