//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPShareAccessRequesters : PBCodable
{
    NSMutableArray *_requestingAccessUsers;	// 8 = 0x8
}

+ (Class)requestingAccessUsersType;	// IMP=0x00100000002bda27
- (void).cxx_destruct;	// IMP=0x00000000002be4a1
@property(retain, nonatomic) NSMutableArray *requestingAccessUsers; // @synthesize requestingAccessUsers=_requestingAccessUsers;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002be343
- (unsigned long long)hash;	// IMP=0x00000000002be326
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002be296
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002be0d2
- (void)copyTo:(id)arg1;	// IMP=0x00000000002be00d
- (void)writeTo:(id)arg1;	// IMP=0x00000000002bded7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002bdeca
- (id)dictionaryRepresentation;	// IMP=0x00000000002bdae7
- (id)description;	// IMP=0x00000000002bda38
- (id)requestingAccessUsersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002bda0a
- (unsigned long long)requestingAccessUsersCount;	// IMP=0x00000000002bd9ed
- (void)addRequestingAccessUsers:(id)arg1;	// IMP=0x00000000002bd983
- (void)clearRequestingAccessUsers;	// IMP=0x00000000002bd966

@end

