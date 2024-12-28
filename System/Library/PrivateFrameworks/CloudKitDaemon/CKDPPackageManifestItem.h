//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKDPPackageManifestItem : PBCodable
{
    long long _size;	// 8 = 0x8
    NSData *_signature;	// 16 = 0x10
    _Bool _lastItem;	// 24 = 0x18
    struct {
        unsigned int size:1;
        unsigned int lastItem:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000249d58
@property(nonatomic) _Bool lastItem; // @synthesize lastItem=_lastItem;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000249c91
- (unsigned long long)hash;	// IMP=0x0000000000249c21
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000249b35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000249a7f
- (void)copyTo:(id)arg1;	// IMP=0x00000000002499fe
- (void)writeTo:(id)arg1;	// IMP=0x000000000024996d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002496eb
- (id)dictionaryRepresentation;	// IMP=0x00000000002495ca
- (id)description;	// IMP=0x000000000024951b
@property(nonatomic) _Bool hasLastItem;
@property(nonatomic) _Bool hasSize;
@property(readonly, nonatomic) _Bool hasSignature;

@end
