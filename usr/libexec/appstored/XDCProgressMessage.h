//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface XDCProgressMessage : PBCodable
{
    NSMutableArray *_progress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001ef307
- (unsigned long long)hash;	// IMP=0x00100000001ef2ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001ef25a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ef0bc
- (void)writeTo:(id)arg1;	// IMP=0x00100000001eef86
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001eede3
- (id)dictionaryRepresentation;	// IMP=0x00100000001eebb3
- (id)description;	// IMP=0x00100000001eeb04

@end
