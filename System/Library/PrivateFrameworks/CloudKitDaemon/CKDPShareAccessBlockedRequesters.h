//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPShareAccessBlockedRequesters : PBCodable
{
    NSMutableArray *_blockedUsers;	// 8 = 0x8
}

+ (Class)blockedUsersType;	// IMP=0x0010000000204141
- (void).cxx_destruct;	// IMP=0x0000000000204bbb
@property(retain, nonatomic) NSMutableArray *blockedUsers; // @synthesize blockedUsers=_blockedUsers;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000204a5d
- (unsigned long long)hash;	// IMP=0x0000000000204a40
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002049b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002047ec
- (void)copyTo:(id)arg1;	// IMP=0x0000000000204727
- (void)writeTo:(id)arg1;	// IMP=0x00000000002045f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002045e4
- (id)dictionaryRepresentation;	// IMP=0x0000000000204201
- (id)description;	// IMP=0x0000000000204152
- (id)blockedUsersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000204124
- (unsigned long long)blockedUsersCount;	// IMP=0x0000000000204107
- (void)addBlockedUsers:(id)arg1;	// IMP=0x000000000020409d
- (void)clearBlockedUsers;	// IMP=0x0000000000204080

@end

