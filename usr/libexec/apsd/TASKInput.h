//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class TASKEdgeDnsInput;

@interface TASKInput : PBCodable
{
    TASKEdgeDnsInput *_edgeDNS;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004005c
@property(retain, nonatomic) TASKEdgeDnsInput *edgeDNS; // @synthesize edgeDNS=_edgeDNS;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003ffde
- (unsigned long long)hash;	// IMP=0x001000000003ffc1
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003ff31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003feb9
- (void)copyTo:(id)arg1;	// IMP=0x001000000003fe8f
- (void)writeTo:(id)arg1;	// IMP=0x001000000003fe6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003fe5e
- (id)dictionaryRepresentation;	// IMP=0x001000000003fc2a
- (id)description;	// IMP=0x001000000003fb7b
@property(readonly, nonatomic) _Bool hasEdgeDNS;

@end

