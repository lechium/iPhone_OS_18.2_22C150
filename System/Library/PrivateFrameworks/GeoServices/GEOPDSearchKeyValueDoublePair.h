//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValueDoublePair : PBCodable
{
    NSString *_key;	// 8 = 0x8
    double _value;	// 16 = 0x10
    CDStruct_38ef1b98 _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000031dffd
- (unsigned long long)hash;	// IMP=0x000000000031ded6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031de16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000031dd7a
- (void)writeTo:(id)arg1;	// IMP=0x000000000031dd12
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000031dd03
- (id)jsonRepresentation;	// IMP=0x000000000031d7f5
- (id)dictionaryRepresentation;	// IMP=0x000000000031d71b
- (id)description;	// IMP=0x000000000031d66c

@end

