//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface PDURLSessionProxyError : PBCodable
{
    unsigned long long _code;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSData *_userInfo;	// 24 = 0x18
    unsigned int _version;	// 32 = 0x20
    struct {
        unsigned int code:1;
        unsigned int version:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0020000000066148
@property(retain, nonatomic) NSData *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000066035
- (unsigned long long)hash;	// IMP=0x0010000000065f99
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000065e80
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000065d9f
- (void)copyTo:(id)arg1;	// IMP=0x0010000000065cf7
- (void)writeTo:(id)arg1;	// IMP=0x0010000000065c4c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000065c3f
- (id)dictionaryRepresentation;	// IMP=0x0010000000065afa
- (id)description;	// IMP=0x0010000000065a4b
@property(readonly, nonatomic) _Bool hasUserInfo;
@property(nonatomic) _Bool hasCode;
@property(readonly, nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasVersion;
- (id)_actualError;	// IMP=0x0010000000048a0e
- (id)_initWithActualError:(id)arg1;	// IMP=0x0010000000048786

@end
