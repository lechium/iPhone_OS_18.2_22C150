//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BCSEmailMetadataParquetMessage : PBCodable
{
    long long _keyHash;	// 8 = 0x8
    NSString *_businessId;	// 16 = 0x10
    NSString *_companyId;	// 24 = 0x18
    NSMutableArray *_displayNames;	// 32 = 0x20
    NSString *_key;	// 40 = 0x28
    NSMutableArray *_names;	// 48 = 0x30
    _Bool _isVerified;	// 56 = 0x38
    struct {
        unsigned int keyHash:1;
        unsigned int isVerified:1;
    } _has;	// 60 = 0x3c
}

+ (Class)displayNameType;	// IMP=0x0010000000038ebe
+ (Class)nameType;	// IMP=0x0010000000038dec
- (void).cxx_destruct;	// IMP=0x000000000003a795
@property(retain, nonatomic) NSString *companyId; // @synthesize companyId=_companyId;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(retain, nonatomic) NSMutableArray *displayNames; // @synthesize displayNames=_displayNames;
@property(retain, nonatomic) NSMutableArray *names; // @synthesize names=_names;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) long long keyHash; // @synthesize keyHash=_keyHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003a3d2
- (unsigned long long)hash;	// IMP=0x000000000003a2d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003a12b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039d5c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000039b60
- (void)writeTo:(id)arg1;	// IMP=0x00000000000398a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000039515
- (id)dictionaryRepresentation;	// IMP=0x0000000000038ff1
- (id)description;	// IMP=0x0000000000038f42
@property(readonly, nonatomic) _Bool hasCompanyId;
@property(readonly, nonatomic) _Bool hasBusinessId;
@property(nonatomic) _Bool hasIsVerified;
- (id)displayNameAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000038ea1
- (unsigned long long)displayNamesCount;	// IMP=0x0000000000038e84
- (void)addDisplayName:(id)arg1;	// IMP=0x0000000000038e1a
- (void)clearDisplayNames;	// IMP=0x0000000000038dfd
- (id)nameAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000038dcf
- (unsigned long long)namesCount;	// IMP=0x0000000000038db2
- (void)addName:(id)arg1;	// IMP=0x0000000000038d48
- (void)clearNames;	// IMP=0x0000000000038d2b
@property(readonly, nonatomic) _Bool hasKey;
@property(nonatomic) _Bool hasKeyHash;

@end

