//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPAssetsToDownload, CKDPRecordIdentifier, CKDPRequestedFields, NSString;

@interface CKDPRecordRetrieveVersionsRequest : PBRequest
{
    CKDPAssetsToDownload *_assetsToDownload;	// 8 = 0x8
    NSString *_minimumVersionEtag;	// 16 = 0x10
    CKDPRecordIdentifier *_recordIdentifier;	// 24 = 0x18
    CKDPRequestedFields *_requestedFields;	// 32 = 0x20
}

+ (id)options;	// IMP=0x0010000000197410
- (void).cxx_destruct;	// IMP=0x0000000000197e82
@property(retain, nonatomic) CKDPAssetsToDownload *assetsToDownload; // @synthesize assetsToDownload=_assetsToDownload;
@property(retain, nonatomic) NSString *minimumVersionEtag; // @synthesize minimumVersionEtag=_minimumVersionEtag;
@property(retain, nonatomic) CKDPRequestedFields *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000197d09
- (unsigned long long)hash;	// IMP=0x0000000000197c85
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000197b79
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000197a8f
- (void)copyTo:(id)arg1;	// IMP=0x00000000001979ec
- (Class)responseClass;	// IMP=0x00000000001979db
- (unsigned int)requestTypeCode;	// IMP=0x00000000001979d0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000197939
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019792c
- (id)dictionaryRepresentation;	// IMP=0x0000000000197563
- (id)description;	// IMP=0x00000000001974b4
@property(readonly, nonatomic) _Bool hasAssetsToDownload;
@property(readonly, nonatomic) _Bool hasMinimumVersionEtag;
@property(readonly, nonatomic) _Bool hasRequestedFields;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end

