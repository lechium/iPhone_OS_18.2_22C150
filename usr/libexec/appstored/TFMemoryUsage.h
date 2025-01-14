//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface TFMemoryUsage : PBCodable
{
    unsigned long long _availableBytes;	// 8 = 0x8
    unsigned long long _totalBytes;	// 16 = 0x10
    struct {
        unsigned int availableBytes:1;
        unsigned int totalBytes:1;
    } _has;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x0020000000199dfd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000199d48
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000199cc7
- (void)writeTo:(id)arg1;	// IMP=0x0010000000199c54
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000199c47
- (id)dictionaryRepresentation;	// IMP=0x001000000019990c
- (id)description;	// IMP=0x001000000019985d

@end

