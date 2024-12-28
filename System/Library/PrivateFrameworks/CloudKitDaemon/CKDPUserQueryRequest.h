//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPUserAlias, NSMutableArray, NSString;

@interface CKDPUserQueryRequest : PBRequest
{
    CKDPUserAlias *_alias;	// 8 = 0x8
    NSString *_oBSOLETEPcsServiceType;	// 16 = 0x10
    NSMutableArray *_sortedBys;	// 24 = 0x18
    _Bool _publicKeyRequested;	// 32 = 0x20
    struct {
        unsigned int publicKeyRequested:1;
    } _has;	// 36 = 0x24
}

+ (Class)sortedByType;	// IMP=0x001000000015b8ee
+ (id)options;	// IMP=0x001000000015b7c8
- (void).cxx_destruct;	// IMP=0x000000000015c93e
@property(retain, nonatomic) NSString *oBSOLETEPcsServiceType; // @synthesize oBSOLETEPcsServiceType=_oBSOLETEPcsServiceType;
@property(retain, nonatomic) NSMutableArray *sortedBys; // @synthesize sortedBys=_sortedBys;
@property(retain, nonatomic) CKDPUserAlias *alias; // @synthesize alias=_alias;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015c6fe
- (unsigned long long)hash;	// IMP=0x000000000015c667
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015c549
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015c30b
- (void)copyTo:(id)arg1;	// IMP=0x000000000015c1e4
- (Class)responseClass;	// IMP=0x000000000015c1d3
- (unsigned int)requestTypeCode;	// IMP=0x000000000015c1c8
- (void)writeTo:(id)arg1;	// IMP=0x000000000015c025
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015c018
- (id)dictionaryRepresentation;	// IMP=0x000000000015ba2d
- (id)description;	// IMP=0x000000000015b97e
@property(nonatomic) _Bool hasPublicKeyRequested;
@property(nonatomic) _Bool publicKeyRequested; // @synthesize publicKeyRequested=_publicKeyRequested;
@property(readonly, nonatomic) _Bool hasOBSOLETEPcsServiceType;
- (id)sortedByAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015b8d1
- (unsigned long long)sortedBysCount;	// IMP=0x000000000015b8b4
- (void)addSortedBy:(id)arg1;	// IMP=0x000000000015b84a
- (void)clearSortedBys;	// IMP=0x000000000015b82d
@property(readonly, nonatomic) _Bool hasAlias;

@end
