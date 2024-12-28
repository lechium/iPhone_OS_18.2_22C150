//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ICPAAudioQualityDictionary : PBCodable
{
    long long _bitDepth;	// 8 = 0x8
    long long _bitRate;	// 16 = 0x10
    long long _sampleRate;	// 24 = 0x18
    NSString *_channelLayoutDescription;	// 32 = 0x20
    unsigned int _codec;	// 40 = 0x28
    _Bool _isSpatialized;	// 44 = 0x2c
    struct {
        unsigned int bitDepth:1;
        unsigned int bitRate:1;
        unsigned int sampleRate:1;
        unsigned int codec:1;
        unsigned int isSpatialized:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001efa8
- (unsigned long long)hash;	// IMP=0x000000000001eed2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ed68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ec5c
- (void)writeTo:(id)arg1;	// IMP=0x000000000001eb6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001eb5e
- (id)dictionaryRepresentation;	// IMP=0x000000000001e93b
- (id)description;	// IMP=0x000000000001e88c

@end
