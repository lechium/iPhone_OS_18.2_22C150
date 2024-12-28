//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PDDPEEServiceConfig, PDDPEEUserInfo, PDDPStatus;

@interface PDDPEESetupResponse : PBCodable
{
    NSMutableArray *_endpoints;	// 8 = 0x8
    PDDPEEServiceConfig *_serviceConfig;	// 16 = 0x10
    PDDPStatus *_status;	// 24 = 0x18
    PDDPEEUserInfo *_userInfo;	// 32 = 0x20
}

+ (Class)endpointsType;	// IMP=0x0020000000075070
- (void).cxx_destruct;	// IMP=0x0020000000075fe5
@property(retain, nonatomic) NSMutableArray *endpoints; // @synthesize endpoints=_endpoints;
@property(retain, nonatomic) PDDPEEServiceConfig *serviceConfig; // @synthesize serviceConfig=_serviceConfig;
@property(retain, nonatomic) PDDPEEUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) PDDPStatus *status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000075d5b
- (unsigned long long)hash;	// IMP=0x0010000000075cd7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000075bcb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000759a0
- (void)copyTo:(id)arg1;	// IMP=0x001000000007587c
- (void)writeTo:(id)arg1;	// IMP=0x00100000000756f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007543f
- (id)dictionaryRepresentation;	// IMP=0x0010000000075130
- (id)description;	// IMP=0x0010000000075081
- (id)endpointsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000075053
- (unsigned long long)endpointsCount;	// IMP=0x0010000000075036
- (void)addEndpoints:(id)arg1;	// IMP=0x0010000000074fcc
- (void)clearEndpoints;	// IMP=0x0010000000074faf
@property(readonly, nonatomic) _Bool hasServiceConfig;
@property(readonly, nonatomic) _Bool hasUserInfo;
@property(readonly, nonatomic) _Bool hasStatus;

@end
