//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class AuthCredential, ChannelDeferredPublishInfo;

__attribute__((visibility("hidden")))
@interface SharedChannelProvisionOffGridPayloadRequest : PBRequest
{
    AuthCredential *_authCredential;	// 8 = 0x8
    ChannelDeferredPublishInfo *_channelDeferredPublishInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000042324
@property(retain, nonatomic) ChannelDeferredPublishInfo *channelDeferredPublishInfo; // @synthesize channelDeferredPublishInfo=_channelDeferredPublishInfo;
@property(retain, nonatomic) AuthCredential *authCredential; // @synthesize authCredential=_authCredential;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004224b
- (unsigned long long)hash;	// IMP=0x00000000000421fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000042146
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000420a8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000042045
- (void)writeTo:(id)arg1;	// IMP=0x0000000000041fe8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000041fdb
- (id)dictionaryRepresentation;	// IMP=0x0000000000041d1b
- (id)description;	// IMP=0x0000000000041c6c
@property(readonly, nonatomic) _Bool hasChannelDeferredPublishInfo;
@property(readonly, nonatomic) _Bool hasAuthCredential;

@end

