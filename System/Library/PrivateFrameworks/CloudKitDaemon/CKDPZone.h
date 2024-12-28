//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPProtectionInfo, CKDPProtectionInfoKeysToRemove, CKDPRecordStableUrl, CKDPRecordZoneIdentifier, CKDPShareIdentifier, CKDPStorageExpiration, CKDPZoneCryptoFeatureSet, CKDPZoneSignedCryptoRequirements, CKDPZoneZoneReference, NSMutableArray, NSString;

@interface CKDPZone : PBCodable
{
    CKDPZoneCryptoFeatureSet *_appliedCryptoFeatures;	// 8 = 0x8
    NSString *_etag;	// 16 = 0x10
    CKDPZoneZoneReference *_parentReference;	// 24 = 0x18
    CKDPProtectionInfo *_protectionInfo;	// 32 = 0x20
    NSMutableArray *_protectionInfoKeysToRemoves;	// 40 = 0x28
    CKDPProtectionInfo *_recordProtectionInfo;	// 48 = 0x30
    CKDPProtectionInfoKeysToRemove *_recordProtectionInfoKeysToRemove;	// 56 = 0x38
    CKDPShareIdentifier *_shareId;	// 64 = 0x40
    CKDPZoneSignedCryptoRequirements *_signedCryptoRequirements;	// 72 = 0x48
    CKDPRecordStableUrl *_stableUrl;	// 80 = 0x50
    CKDPStorageExpiration *_storageExpiration;	// 88 = 0x58
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 96 = 0x60
    CKDPProtectionInfoKeysToRemove *_zoneProtectionInfoKeysToRemove;	// 104 = 0x68
}

+ (Class)protectionInfoKeysToRemoveType;	// IMP=0x00100000001433d6
- (void).cxx_destruct;	// IMP=0x000000000014504a
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPZoneZoneReference *parentReference; // @synthesize parentReference=_parentReference;
@property(retain, nonatomic) CKDPProtectionInfoKeysToRemove *recordProtectionInfoKeysToRemove; // @synthesize recordProtectionInfoKeysToRemove=_recordProtectionInfoKeysToRemove;
@property(retain, nonatomic) CKDPProtectionInfoKeysToRemove *zoneProtectionInfoKeysToRemove; // @synthesize zoneProtectionInfoKeysToRemove=_zoneProtectionInfoKeysToRemove;
@property(retain, nonatomic) CKDPZoneCryptoFeatureSet *appliedCryptoFeatures; // @synthesize appliedCryptoFeatures=_appliedCryptoFeatures;
@property(retain, nonatomic) CKDPZoneSignedCryptoRequirements *signedCryptoRequirements; // @synthesize signedCryptoRequirements=_signedCryptoRequirements;
@property(retain, nonatomic) CKDPStorageExpiration *storageExpiration; // @synthesize storageExpiration=_storageExpiration;
@property(retain, nonatomic) NSMutableArray *protectionInfoKeysToRemoves; // @synthesize protectionInfoKeysToRemoves=_protectionInfoKeysToRemoves;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) CKDPRecordStableUrl *stableUrl; // @synthesize stableUrl=_stableUrl;
@property(retain, nonatomic) CKDPProtectionInfo *recordProtectionInfo; // @synthesize recordProtectionInfo=_recordProtectionInfo;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000144a9f
- (unsigned long long)hash;	// IMP=0x000000000014492e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000144696
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001442df
- (void)copyTo:(id)arg1;	// IMP=0x000000000014409b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000143dfd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000143df0
- (id)dictionaryRepresentation;	// IMP=0x0000000000143529
- (id)description;	// IMP=0x000000000014347a
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasParentReference;
@property(readonly, nonatomic) _Bool hasRecordProtectionInfoKeysToRemove;
@property(readonly, nonatomic) _Bool hasZoneProtectionInfoKeysToRemove;
@property(readonly, nonatomic) _Bool hasAppliedCryptoFeatures;
@property(readonly, nonatomic) _Bool hasSignedCryptoRequirements;
@property(readonly, nonatomic) _Bool hasStorageExpiration;
- (id)protectionInfoKeysToRemoveAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001433b9
- (unsigned long long)protectionInfoKeysToRemovesCount;	// IMP=0x000000000014339c
- (void)addProtectionInfoKeysToRemove:(id)arg1;	// IMP=0x0000000000143332
- (void)clearProtectionInfoKeysToRemoves;	// IMP=0x0000000000143315
@property(readonly, nonatomic) _Bool hasShareId;
@property(readonly, nonatomic) _Bool hasStableUrl;
@property(readonly, nonatomic) _Bool hasRecordProtectionInfo;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end
