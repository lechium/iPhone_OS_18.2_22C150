//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class BCSCallerIdLocalizedString, NSString;

__attribute__((visibility("hidden")))
@interface BCSCallerIdMessage : PBCodable
{
    long long _phoneHash;	// 8 = 0x8
    NSString *_businessId;	// 16 = 0x10
    NSString *_companyId;	// 24 = 0x18
    NSString *_conflatedMuid;	// 32 = 0x20
    BCSCallerIdLocalizedString *_intent;	// 40 = 0x28
    NSString *_locationId;	// 48 = 0x30
    NSString *_logoUrl;	// 56 = 0x38
    BCSCallerIdLocalizedString *_name;	// 64 = 0x40
    _Bool _isVerified;	// 72 = 0x48
    CDStruct_970aaa1e _has;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x00000000000551fc
@property(retain, nonatomic) NSString *conflatedMuid; // @synthesize conflatedMuid=_conflatedMuid;
@property(retain, nonatomic) BCSCallerIdLocalizedString *intent; // @synthesize intent=_intent;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) BCSCallerIdLocalizedString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *locationId; // @synthesize locationId=_locationId;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *companyId; // @synthesize companyId=_companyId;
@property(nonatomic) long long phoneHash; // @synthesize phoneHash=_phoneHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000054f64
- (unsigned long long)hash;	// IMP=0x0000000000054e31
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000054c31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054a7e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000054936
- (void)writeTo:(id)arg1;	// IMP=0x00000000000547f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000547ec
- (id)dictionaryRepresentation;	// IMP=0x00000000000541dd
- (id)description;	// IMP=0x000000000005412e
@property(readonly, nonatomic) _Bool hasConflatedMuid;
@property(readonly, nonatomic) _Bool hasIntent;
@property(nonatomic) _Bool hasIsVerified;
@property(readonly, nonatomic) _Bool hasLogoUrl;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasLocationId;
@property(readonly, nonatomic) _Bool hasBusinessId;
@property(readonly, nonatomic) _Bool hasCompanyId;
@property(nonatomic) _Bool hasPhoneHash;

@end
