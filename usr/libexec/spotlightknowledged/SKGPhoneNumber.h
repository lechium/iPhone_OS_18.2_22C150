//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SKGPhoneNumber
{
    NSString *_phoneNumberValue;	// 16 = 0x10
    NSArray *_synonyms;	// 24 = 0x18
    long long _countryCodeValue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000a1eb1
@property(nonatomic) long long countryCodeValue; // @synthesize countryCodeValue=_countryCodeValue;
@property(copy, nonatomic) NSArray *synonyms; // @synthesize synonyms=_synonyms;
@property(copy, nonatomic) NSString *phoneNumberValue; // @synthesize phoneNumberValue=_phoneNumberValue;
- (id)description;	// IMP=0x00100000000a1da5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a1caf

@end
