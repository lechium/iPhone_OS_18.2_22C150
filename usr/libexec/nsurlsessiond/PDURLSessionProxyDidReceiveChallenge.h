//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyAuthChallenge, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveChallenge : PBCodable
{
    PDURLSessionProxyAuthChallenge *_challenge;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000065961
@property(retain, nonatomic) PDURLSessionProxyAuthChallenge *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000065888
- (unsigned long long)hash;	// IMP=0x001000000006583b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000065783
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000656e5
- (void)copyTo:(id)arg1;	// IMP=0x0010000000065682
- (void)writeTo:(id)arg1;	// IMP=0x0010000000065625
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006543a
- (id)dictionaryRepresentation;	// IMP=0x0010000000065365
- (id)description;	// IMP=0x00100000000652b6
@property(readonly, nonatomic) _Bool hasChallenge;
@property(readonly, nonatomic) _Bool hasTask;

@end
