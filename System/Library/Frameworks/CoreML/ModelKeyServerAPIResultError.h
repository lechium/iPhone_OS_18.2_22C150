//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPIResultError : PBCodable
{
    NSString *_message;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000295b16
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000295acd
- (unsigned long long)hash;	// IMP=0x0000000000295ab0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000295a20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002959a8
- (void)copyTo:(id)arg1;	// IMP=0x000000000029597e
- (void)writeTo:(id)arg1;	// IMP=0x000000000029595a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029594d
- (id)dictionaryRepresentation;	// IMP=0x00000000002958f1
- (id)description;	// IMP=0x0000000000295842
@property(readonly, nonatomic) _Bool hasMessage;

@end

