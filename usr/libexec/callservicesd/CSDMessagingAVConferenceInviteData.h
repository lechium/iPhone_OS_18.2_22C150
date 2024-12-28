//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSDictionary;

@interface CSDMessagingAVConferenceInviteData : PBCodable
{
    NSData *_callInfoBlob;	// 8 = 0x8
    NSData *_mediaBlob;	// 16 = 0x10
    NSData *_sKEBlob;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ba0e8
@property(retain, nonatomic) NSData *callInfoBlob; // @synthesize callInfoBlob=_callInfoBlob;
@property(retain, nonatomic) NSData *mediaBlob; // @synthesize mediaBlob=_mediaBlob;
@property(retain, nonatomic) NSData *sKEBlob; // @synthesize sKEBlob=_sKEBlob;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b9ff6
- (unsigned long long)hash;	// IMP=0x00100000000b9f89
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b9ea9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b9de5
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b9d62
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b9ce8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b9cdb
- (id)dictionaryRepresentation;	// IMP=0x00100000000b9aa5
- (id)description;	// IMP=0x00100000000b99f6
@property(readonly, nonatomic) _Bool hasCallInfoBlob;
@property(readonly, nonatomic) _Bool hasMediaBlob;
@property(readonly, nonatomic) _Bool hasSKEBlob;
@property(readonly, copy, nonatomic) NSDictionary *faceTimeInviteDictionary;
@property(readonly, copy, nonatomic) NSDictionary *relayInviteDictionary;
- (id)initWithFaceTimeInviteDictionary:(id)arg1;	// IMP=0x00100000000b268b
- (id)initWithRelayInviteDictionary:(id)arg1;	// IMP=0x00100000000b25b6

@end
