//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CNContactFormatterSmartFetcher
{
    _Bool _ignoresNickname;	// 8 = 0x8
    _Bool _ignoresOrganization;	// 9 = 0x9
    NSSet *_mandatoryNameProperties;	// 16 = 0x10
    NSDictionary *_fallBackNamePropertyByNameKey;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001064ca
- (void).cxx_destruct;	// IMP=0x0000000000107848
@property(nonatomic) _Bool ignoresOrganization; // @synthesize ignoresOrganization=_ignoresOrganization;
@property(nonatomic) _Bool ignoresNickname; // @synthesize ignoresNickname=_ignoresNickname;
- (id)_cn_ignorableKeys;	// IMP=0x00000000001077ef
- (id)_cn_optionalKeys;	// IMP=0x00000000001074a9
- (id)_cn_requiredKeys;	// IMP=0x0000000000107371
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x0000000000106ebd
- (unsigned long long)hash;	// IMP=0x0000000000106a65
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001068cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001067ff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000106723
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001064d2
- (id)init;	// IMP=0x0000000000106219

@end

