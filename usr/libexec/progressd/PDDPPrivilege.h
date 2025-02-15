//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PDDPPrivilege : PBCodable
{
    NSMutableArray *_locationIds;	// 8 = 0x8
    NSString *_privilegeName;	// 16 = 0x10
}

+ (Class)locationIdsType;	// IMP=0x00200000000db405
- (void).cxx_destruct;	// IMP=0x00200000000dbdc8
@property(retain, nonatomic) NSMutableArray *locationIds; // @synthesize locationIds=_locationIds;
@property(retain, nonatomic) NSString *privilegeName; // @synthesize privilegeName=_privilegeName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000dbc0a
- (unsigned long long)hash;	// IMP=0x00100000000dbbbd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000dbb05
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000db92d
- (void)copyTo:(id)arg1;	// IMP=0x00100000000db845
- (void)writeTo:(id)arg1;	// IMP=0x00100000000db6f3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000db6e6
- (id)dictionaryRepresentation;	// IMP=0x00100000000db4c5
- (id)description;	// IMP=0x00100000000db416
- (id)locationIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000db3e8
- (unsigned long long)locationIdsCount;	// IMP=0x00100000000db3cb
- (void)addLocationIds:(id)arg1;	// IMP=0x00100000000db361
- (void)clearLocationIds;	// IMP=0x00100000000db344
@property(readonly, nonatomic) _Bool hasPrivilegeName;

@end

