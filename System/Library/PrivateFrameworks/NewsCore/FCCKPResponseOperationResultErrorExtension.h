//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface FCCKPResponseOperationResultErrorExtension : PBCodable
{
    NSString *_extensionName;	// 8 = 0x8
    NSData *_extensionPayload;	// 16 = 0x10
    unsigned int _typeCode;	// 24 = 0x18
    struct {
        unsigned int typeCode:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000000cced4
- (unsigned long long)hash;	// IMP=0x00000000000cce5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ccd7c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cccb9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ccc36
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ccc29
- (id)dictionaryRepresentation;	// IMP=0x00000000000cc944
- (id)description;	// IMP=0x00000000000cc895

@end
