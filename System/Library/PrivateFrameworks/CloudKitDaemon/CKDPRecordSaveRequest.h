//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecord, CKDPRecordSaveRequestConflictLoserUpdate, CKDPRecordSaveRequestShareIdUpdate, CKDPRequestedFields, NSMutableArray, NSString;

@interface CKDPRecordSaveRequest : PBRequest
{
    CKDPRecordSaveRequestConflictLoserUpdate *_conflictLoserUpdate;	// 8 = 0x8
    NSMutableArray *_conflictLosersToResolves;	// 16 = 0x10
    NSString *_etag;	// 24 = 0x18
    NSMutableArray *_fieldsToDeleteIfExistOnMerges;	// 32 = 0x20
    NSString *_parentChainProtectionInfoTag;	// 40 = 0x28
    CKDPRecord *_record;	// 48 = 0x30
    NSString *_recordProtectionInfoTag;	// 56 = 0x38
    CKDPRequestedFields *_requestedFields;	// 64 = 0x40
    int _saveSemantics;	// 72 = 0x48
    NSString *_shareEtag;	// 80 = 0x50
    CKDPRecordSaveRequestShareIdUpdate *_shareIDUpdate;	// 88 = 0x58
    NSString *_zoneProtectionInfoTag;	// 96 = 0x60
    _Bool _merge;	// 104 = 0x68
    struct {
        unsigned int saveSemantics:1;
        unsigned int merge:1;
    } _has;	// 108 = 0x6c
}

+ (Class)conflictLosersToResolveType;	// IMP=0x001000000017211d
+ (Class)fieldsToDeleteIfExistOnMergeType;	// IMP=0x0010000000171ea7
+ (id)options;	// IMP=0x0010000000171d38
- (void).cxx_destruct;	// IMP=0x00000000001741d5
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) NSString *parentChainProtectionInfoTag; // @synthesize parentChainProtectionInfoTag=_parentChainProtectionInfoTag;
@property(retain, nonatomic) CKDPRecordSaveRequestShareIdUpdate *shareIDUpdate; // @synthesize shareIDUpdate=_shareIDUpdate;
@property(retain, nonatomic) NSString *shareEtag; // @synthesize shareEtag=_shareEtag;
@property(retain, nonatomic) NSMutableArray *conflictLosersToResolves; // @synthesize conflictLosersToResolves=_conflictLosersToResolves;
@property(retain, nonatomic) NSString *recordProtectionInfoTag; // @synthesize recordProtectionInfoTag=_recordProtectionInfoTag;
@property(retain, nonatomic) NSString *zoneProtectionInfoTag; // @synthesize zoneProtectionInfoTag=_zoneProtectionInfoTag;
@property(retain, nonatomic) CKDPRecordSaveRequestConflictLoserUpdate *conflictLoserUpdate; // @synthesize conflictLoserUpdate=_conflictLoserUpdate;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) NSMutableArray *fieldsToDeleteIfExistOnMerges; // @synthesize fieldsToDeleteIfExistOnMerges=_fieldsToDeleteIfExistOnMerges;
@property(nonatomic) _Bool merge; // @synthesize merge=_merge;
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000173c29
- (unsigned long long)hash;	// IMP=0x0000000000173a81
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001737cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001732fb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000173037
- (Class)responseClass;	// IMP=0x0000000000173026
- (unsigned int)requestTypeCode;	// IMP=0x000000000017301b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000172cad
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000172ca0
- (id)dictionaryRepresentation;	// IMP=0x0000000000172231
- (id)description;	// IMP=0x0000000000172182
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasParentChainProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasShareIDUpdate;
@property(readonly, nonatomic) _Bool hasShareEtag;
- (id)conflictLosersToResolveAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000172100
- (unsigned long long)conflictLosersToResolvesCount;	// IMP=0x00000000001720e3
- (void)addConflictLosersToResolve:(id)arg1;	// IMP=0x0000000000172079
- (void)clearConflictLosersToResolves;	// IMP=0x000000000017205c
@property(readonly, nonatomic) _Bool hasRecordProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasZoneProtectionInfoTag;
- (int)StringAsSaveSemantics:(id)arg1;	// IMP=0x0000000000171f94
- (id)saveSemanticsAsString:(int)arg1;	// IMP=0x0000000000171f49
@property(nonatomic) _Bool hasSaveSemantics;
@property(nonatomic) int saveSemantics; // @synthesize saveSemantics=_saveSemantics;
@property(readonly, nonatomic) _Bool hasConflictLoserUpdate;
@property(readonly, nonatomic) _Bool hasEtag;
- (id)fieldsToDeleteIfExistOnMergeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000171e8a
- (unsigned long long)fieldsToDeleteIfExistOnMergesCount;	// IMP=0x0000000000171e6d
- (void)addFieldsToDeleteIfExistOnMerge:(id)arg1;	// IMP=0x0000000000171e03
- (void)clearFieldsToDeleteIfExistOnMerges;	// IMP=0x0000000000171de6
@property(nonatomic) _Bool hasMerge;
@property(readonly, nonatomic) _Bool hasRecord;

@end

