//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWPBAgentClass : PBCodable
{
    NSString *_domain;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004435d0
- (unsigned long long)hash;	// IMP=0x0000000000443580
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004434c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000443420
- (void)writeTo:(id)arg1;	// IMP=0x00000000004433c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004433b0
- (id)dictionaryRepresentation;	// IMP=0x0000000000443320
- (id)description;	// IMP=0x0000000000443270

@end

