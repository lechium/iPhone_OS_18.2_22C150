//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface PDDPClassZone : PBCodable
{
    NSData *_changeToken;	// 8 = 0x8
    NSString *_classId;	// 16 = 0x10
    NSString *_zoneName;	// 24 = 0x18
    _Bool _isAccessDenied;	// 32 = 0x20
    _Bool _moreDataAvailable;	// 33 = 0x21
    struct {
        unsigned int isAccessDenied:1;
        unsigned int moreDataAvailable:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0020000000138e99
@property(nonatomic) _Bool isAccessDenied; // @synthesize isAccessDenied=_isAccessDenied;
@property(nonatomic) _Bool moreDataAvailable; // @synthesize moreDataAvailable=_moreDataAvailable;
@property(retain, nonatomic) NSData *changeToken; // @synthesize changeToken=_changeToken;
@property(retain, nonatomic) NSString *classId; // @synthesize classId=_classId;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000138d4a
- (unsigned long long)hash;	// IMP=0x0010000000138c90
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000138b42
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000138a41
- (void)copyTo:(id)arg1;	// IMP=0x0010000000138981
- (void)writeTo:(id)arg1;	// IMP=0x00100000001388b5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001388a8
- (id)dictionaryRepresentation;	// IMP=0x0010000000138474
- (id)description;	// IMP=0x00100000001383c5
@property(nonatomic) _Bool hasIsAccessDenied;
@property(nonatomic) _Bool hasMoreDataAvailable;
@property(readonly, nonatomic) _Bool hasChangeToken;
@property(readonly, nonatomic) _Bool hasClassId;
@property(readonly, nonatomic) _Bool hasZoneName;

@end

