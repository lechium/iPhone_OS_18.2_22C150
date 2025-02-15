//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface _ADPBDeviceExecuteOnRemoteRequest : PBRequest
{
    NSString *_assistantId;	// 8 = 0x8
    NSData *_content;	// 16 = 0x10
    NSString *_sourceAirplayId;	// 24 = 0x18
    NSString *_sourceIDSFirstRoutableDestination;	// 32 = 0x20
}

+ (unsigned short)_ADPBDeviceRequestType;	// IMP=0x00200000000f57a0
- (void).cxx_destruct;	// IMP=0x002000000016420b
@property(retain, nonatomic) NSString *sourceAirplayId; // @synthesize sourceAirplayId=_sourceAirplayId;
@property(retain, nonatomic) NSString *assistantId; // @synthesize assistantId=_assistantId;
@property(retain, nonatomic) NSString *sourceIDSFirstRoutableDestination; // @synthesize sourceIDSFirstRoutableDestination=_sourceIDSFirstRoutableDestination;
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001640d4
- (unsigned long long)hash;	// IMP=0x0010000000164050
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000163f44
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000163e5a
- (void)copyTo:(id)arg1;	// IMP=0x0010000000163db7
- (void)writeTo:(id)arg1;	// IMP=0x0010000000163d20
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000163b5c
- (id)dictionaryRepresentation;	// IMP=0x0010000000163a8b
- (id)description;	// IMP=0x00100000001639dc
@property(readonly, nonatomic) _Bool hasSourceAirplayId;
@property(readonly, nonatomic) _Bool hasAssistantId;
@property(readonly, nonatomic) _Bool hasSourceIDSFirstRoutableDestination;
@property(readonly, nonatomic) _Bool hasContent;
- (void)_ad_performWithSharedDataRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001183e0
- (void)_ad_performWithCloudService:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a7894

@end

