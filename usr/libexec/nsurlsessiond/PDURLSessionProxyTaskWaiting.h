//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyTaskWaiting : PBCodable
{
    unsigned int _reason;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    struct {
        unsigned int reason:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000054062
@property(nonatomic) unsigned int reason; // @synthesize reason=_reason;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000053fb4
- (unsigned long long)hash;	// IMP=0x0010000000053f62
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000053ea8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000053e10
- (void)copyTo:(id)arg1;	// IMP=0x0010000000053dad
- (void)writeTo:(id)arg1;	// IMP=0x0010000000053d47
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000053b17
- (id)dictionaryRepresentation;	// IMP=0x0010000000053a32
- (id)description;	// IMP=0x0010000000053983
@property(nonatomic) _Bool hasReason;
@property(readonly, nonatomic) _Bool hasTask;

@end

