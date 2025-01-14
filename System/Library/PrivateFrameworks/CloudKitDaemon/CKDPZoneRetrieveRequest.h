//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordZoneIdentifier, NSData;

@interface CKDPZoneRetrieveRequest : PBRequest
{
    NSData *_continuationMarker;	// 8 = 0x8
    CKDPRecordZoneIdentifier *_zoneIdentifier;	// 16 = 0x10
    _Bool _onlyFetchPCSInfo;	// 24 = 0x18
    _Bool _skipContinuation;	// 25 = 0x19
    struct {
        unsigned int onlyFetchPCSInfo:1;
        unsigned int skipContinuation:1;
    } _has;	// 28 = 0x1c
}

+ (id)options;	// IMP=0x00100000000a8ea0
- (void).cxx_destruct;	// IMP=0x00000000000a9a2e
@property(nonatomic) _Bool skipContinuation; // @synthesize skipContinuation=_skipContinuation;
@property(retain, nonatomic) NSData *continuationMarker; // @synthesize continuationMarker=_continuationMarker;
@property(nonatomic) _Bool onlyFetchPCSInfo; // @synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo;
@property(retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a9907
- (unsigned long long)hash;	// IMP=0x00000000000a985c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a9731
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a9655
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a95ae
- (Class)responseClass;	// IMP=0x00000000000a959d
- (unsigned int)requestTypeCode;	// IMP=0x00000000000a9592
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a94e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a94d8
- (id)dictionaryRepresentation;	// IMP=0x00000000000a9057
- (id)description;	// IMP=0x00000000000a8fa8
@property(nonatomic) _Bool hasSkipContinuation;
@property(readonly, nonatomic) _Bool hasContinuationMarker;
@property(nonatomic) _Bool hasOnlyFetchPCSInfo;
@property(readonly, nonatomic) _Bool hasZoneIdentifier;

@end

