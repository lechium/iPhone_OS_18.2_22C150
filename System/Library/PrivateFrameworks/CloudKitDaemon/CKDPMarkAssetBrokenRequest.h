//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

@interface CKDPMarkAssetBrokenRequest : PBRequest
{
    NSString *_affectedRecordType;	// 8 = 0x8
    CKDPRecordIdentifier *_brokenAssetRecordID;	// 16 = 0x10
    NSString *_fieldName;	// 24 = 0x18
    NSMutableArray *_fileSignatures;	// 32 = 0x20
    int _listIndex;	// 40 = 0x28
    NSMutableArray *_referenceSignatures;	// 48 = 0x30
    _Bool _isPackage;	// 56 = 0x38
    _Bool _skipWriteMissingAssetStatusRecord;	// 57 = 0x39
    struct {
        unsigned int listIndex:1;
        unsigned int isPackage:1;
        unsigned int skipWriteMissingAssetStatusRecord:1;
    } _has;	// 60 = 0x3c
}

+ (Class)referenceSignatureType;	// IMP=0x00100000002b45a2
+ (Class)fileSignatureType;	// IMP=0x00100000002b44d0
+ (id)options;	// IMP=0x00100000002b4350
- (void).cxx_destruct;	// IMP=0x00000000002b5d99
@property(nonatomic) _Bool skipWriteMissingAssetStatusRecord; // @synthesize skipWriteMissingAssetStatusRecord=_skipWriteMissingAssetStatusRecord;
@property(retain, nonatomic) NSString *affectedRecordType; // @synthesize affectedRecordType=_affectedRecordType;
@property(nonatomic) _Bool isPackage; // @synthesize isPackage=_isPackage;
@property(retain, nonatomic) NSMutableArray *referenceSignatures; // @synthesize referenceSignatures=_referenceSignatures;
@property(retain, nonatomic) NSMutableArray *fileSignatures; // @synthesize fileSignatures=_fileSignatures;
@property(nonatomic) int listIndex; // @synthesize listIndex=_listIndex;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(retain, nonatomic) CKDPRecordIdentifier *brokenAssetRecordID; // @synthesize brokenAssetRecordID=_brokenAssetRecordID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002b598f
- (unsigned long long)hash;	// IMP=0x00000000002b585d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b567e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b5293
- (void)copyTo:(id)arg1;	// IMP=0x00000000002b5081
- (Class)responseClass;	// IMP=0x00000000002b5070
- (unsigned int)requestTypeCode;	// IMP=0x00000000002b5065
- (void)writeTo:(id)arg1;	// IMP=0x00000000002b4d85
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002b4d78
- (id)dictionaryRepresentation;	// IMP=0x00000000002b470b
- (id)description;	// IMP=0x00000000002b465c
@property(nonatomic) _Bool hasSkipWriteMissingAssetStatusRecord;
@property(readonly, nonatomic) _Bool hasAffectedRecordType;
@property(nonatomic) _Bool hasIsPackage;
- (id)referenceSignatureAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002b4585
- (unsigned long long)referenceSignaturesCount;	// IMP=0x00000000002b4568
- (void)addReferenceSignature:(id)arg1;	// IMP=0x00000000002b44fe
- (void)clearReferenceSignatures;	// IMP=0x00000000002b44e1
- (id)fileSignatureAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002b44b3
- (unsigned long long)fileSignaturesCount;	// IMP=0x00000000002b4496
- (void)addFileSignature:(id)arg1;	// IMP=0x00000000002b442c
- (void)clearFileSignatures;	// IMP=0x00000000002b440f
@property(nonatomic) _Bool hasListIndex;
@property(readonly, nonatomic) _Bool hasFieldName;
@property(readonly, nonatomic) _Bool hasBrokenAssetRecordID;

@end

