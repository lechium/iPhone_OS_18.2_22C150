//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPRecordIdentifier, CKDPRecordRetrieveRequestRetrieveAssetURL, CKDPRequestedFields, NSString;

@interface CKDPRecordRetrieveRequest : PBRequest
{
    CKDPAssetsToDownload *_assetsToDownload;	// 8 = 0x8
    NSString *_clientVersionETag;	// 16 = 0x10
    CKDPRecordRetrieveRequestRetrieveAssetURL *_getAssetURL;	// 24 = 0x18
    CKDPRecordIdentifier *_recordIdentifier;	// 32 = 0x20
    CKDPRequestedFields *_requestedFields;	// 40 = 0x28
    NSString *_versionETag;	// 48 = 0x30
    _Bool _requestEncryptedAssetUserIdentifiers;	// 56 = 0x38
    _Bool _shouldFailBatch;	// 57 = 0x39
    struct {
        unsigned int requestEncryptedAssetUserIdentifiers:1;
        unsigned int shouldFailBatch:1;
    } _has;	// 60 = 0x3c
}

+ (id)options;	// IMP=0x001000000004cf04
- (void).cxx_destruct;	// IMP=0x000000000004e0e4
@property(nonatomic) _Bool requestEncryptedAssetUserIdentifiers; // @synthesize requestEncryptedAssetUserIdentifiers=_requestEncryptedAssetUserIdentifiers;
@property(nonatomic) _Bool shouldFailBatch; // @synthesize shouldFailBatch=_shouldFailBatch;
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) CKDPRecordRetrieveRequestRetrieveAssetURL *getAssetURL; // @synthesize getAssetURL=_getAssetURL;
@property(retain, nonatomic) NSString *clientVersionETag; // @synthesize clientVersionETag=_clientVersionETag;
@property(retain, nonatomic) NSString *versionETag; // @synthesize versionETag=_versionETag;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004de6e
- (unsigned long long)hash;	// IMP=0x000000000004dd60
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004db8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004da0c
- (void)copyTo:(id)arg1;	// IMP=0x000000000004d8ec
- (Class)responseClass;	// IMP=0x000000000004d8db
- (unsigned int)requestTypeCode;	// IMP=0x000000000004d8d0
- (void)writeTo:(id)arg1;	// IMP=0x000000000004d7ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004d7a0
- (id)dictionaryRepresentation;	// IMP=0x000000000004d10f
- (id)description;	// IMP=0x000000000004d060
@property(nonatomic) _Bool hasRequestEncryptedAssetUserIdentifiers;
@property(nonatomic) _Bool hasShouldFailBatch;
@property(readonly, nonatomic) _Bool hasAssetsToDownload;
@property(readonly, nonatomic) _Bool hasGetAssetURL;
@property(readonly, nonatomic) _Bool hasClientVersionETag;
@property(readonly, nonatomic) _Bool hasVersionETag;
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end

