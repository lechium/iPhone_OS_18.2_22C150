//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface _ADPBDeviceExecuteOnRemoteResponse : PBCodable
{
    NSData *_content;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000e8678
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000e862f
- (unsigned long long)hash;	// IMP=0x00100000000e8612
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000e8582
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e850a
- (void)copyTo:(id)arg1;	// IMP=0x00100000000e84e0
- (void)writeTo:(id)arg1;	// IMP=0x00100000000e84bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000e8373
- (id)dictionaryRepresentation;	// IMP=0x00100000000e8317
- (id)description;	// IMP=0x00100000000e8268
@property(readonly, nonatomic) _Bool hasContent;

@end

