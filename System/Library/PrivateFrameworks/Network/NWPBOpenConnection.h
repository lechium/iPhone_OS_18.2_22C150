//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NWPBEndpoint, NWPBParameters;

__attribute__((visibility("hidden")))
@interface NWPBOpenConnection : PBCodable
{
    NSString *_clientUUID;	// 8 = 0x8
    NWPBEndpoint *_endpoint;	// 16 = 0x10
    NWPBParameters *_parameters;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008d91b0
- (unsigned long long)hash;	// IMP=0x00000000008d9140
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008d9060
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008d8f90
- (void)writeTo:(id)arg1;	// IMP=0x00000000008d8f10
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008d8a40
- (id)dictionaryRepresentation;	// IMP=0x00000000008d8940
- (id)description;	// IMP=0x00000000008d8890

@end

