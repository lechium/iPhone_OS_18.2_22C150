//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class TASKRequest;

@interface TASKControlRequest : PBRequest
{
    TASKRequest *_create;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003fb53
@property(retain, nonatomic) TASKRequest *create; // @synthesize create=_create;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003fad5
- (unsigned long long)hash;	// IMP=0x001000000003fab8
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003fa28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003f9b0
- (void)copyTo:(id)arg1;	// IMP=0x001000000003f986
- (void)writeTo:(id)arg1;	// IMP=0x001000000003f962
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003f955
- (id)dictionaryRepresentation;	// IMP=0x001000000003f721
- (id)description;	// IMP=0x001000000003f672
@property(readonly, nonatomic) _Bool hasCreate;

@end
