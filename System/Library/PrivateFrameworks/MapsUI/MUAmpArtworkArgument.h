//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MUAmpArtworkArgument : PBCodable
{
    NSString *_appAdamId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000161447
@property(retain, nonatomic) NSString *appAdamId; // @synthesize appAdamId=_appAdamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001613fe
- (unsigned long long)hash;	// IMP=0x00000000001613e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000161351
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001612d9
- (void)copyTo:(id)arg1;	// IMP=0x00000000001612af
- (void)writeTo:(id)arg1;	// IMP=0x000000000016128e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000161281
- (id)dictionaryRepresentation;	// IMP=0x00000000001610dd
- (id)description;	// IMP=0x000000000016102e
@property(readonly, nonatomic) _Bool hasAppAdamId;

@end

