//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NBPBDeleteBackupResponse : PBCodable
{
    NSData *_error;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001c70c
@property(retain, nonatomic) NSData *error; // @synthesize error=_error;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000001c6c3
- (unsigned long long)hash;	// IMP=0x001000000001c6a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001c616
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001c59e
- (void)copyTo:(id)arg1;	// IMP=0x001000000001c574
- (void)writeTo:(id)arg1;	// IMP=0x001000000001c550
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001c543
- (id)dictionaryRepresentation;	// IMP=0x001000000001c39e
- (id)description;	// IMP=0x001000000001c2ef
@property(readonly, nonatomic) _Bool hasError;

@end

