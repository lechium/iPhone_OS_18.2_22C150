//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ALSMeta : PBCodable
{
    NSString *_productId;	// 8 = 0x8
    NSString *_softwareBuild;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSString *softwareBuild; // @synthesize softwareBuild=_softwareBuild;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000ec989d
- (unsigned long long)hash;	// IMP=0x0010000000ec9850
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000ec97ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000ec972b
- (void)copyTo:(id)arg1;	// IMP=0x0010000000ec96d5
- (void)writeTo:(id)arg1;	// IMP=0x0010000000ec9685
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000ec9678
- (id)dictionaryRepresentation;	// IMP=0x0010000000ec947d
- (id)description;	// IMP=0x0010000000ec9406
@property(readonly, nonatomic) _Bool hasProductId;
@property(readonly, nonatomic) _Bool hasSoftwareBuild;
- (void)dealloc;	// IMP=0x0010000000ec9385

@end
