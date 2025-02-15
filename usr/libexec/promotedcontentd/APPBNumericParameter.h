//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBNumericParameter : PBCodable
{
    NSString *_key;	// 8 = 0x8
    int _value;	// 16 = 0x10
}

+ (id)options;	// IMP=0x00200000000be0f8
- (void).cxx_destruct;	// IMP=0x00200000000be737
@property(nonatomic) int value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000be6a1
- (unsigned long long)hash;	// IMP=0x00100000000be662
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000be5c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000be53c
- (void)copyTo:(id)arg1;	// IMP=0x00100000000be4e2
- (void)writeTo:(id)arg1;	// IMP=0x00100000000be480
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000be473
- (id)dictionaryRepresentation;	// IMP=0x00100000000be1f7
- (id)description;	// IMP=0x00100000000be148

@end

