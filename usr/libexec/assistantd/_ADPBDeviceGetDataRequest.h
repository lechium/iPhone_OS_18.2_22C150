//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface _ADPBDeviceGetDataRequest : PBRequest
{
}

+ (unsigned short)_ADPBDeviceRequestType;	// IMP=0x00200000000f5795
- (void)mergeFrom:(id)arg1;	// IMP=0x00200000002be9e7
- (unsigned long long)hash;	// IMP=0x00100000002be9df
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002be99c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002be963
- (void)copyTo:(id)arg1;	// IMP=0x00100000002be95d
- (void)writeTo:(id)arg1;	// IMP=0x00100000002be957
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000002be85b
- (id)dictionaryRepresentation;	// IMP=0x00100000002be842
- (id)description;	// IMP=0x00100000002be793
- (void)_ad_performWithSharedDataRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000118311
- (void)_ad_performWithCloudService:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a77ac

@end

