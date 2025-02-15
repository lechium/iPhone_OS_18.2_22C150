//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPError : PBCodable
{
    long long _errorCode;	// 8 = 0x8
    NSString *_errorDescription;	// 16 = 0x10
    NSString *_errorDomain;	// 24 = 0x18
    C2MPError *_underlyingError;	// 32 = 0x20
    struct {
        unsigned int errorCode:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000211ec
@property(retain, nonatomic) C2MPError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000210b2
- (unsigned long long)hash;	// IMP=0x000000000002101a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000020f06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020e1d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000020d79
- (void)writeTo:(id)arg1;	// IMP=0x0000000000020cd9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000020ccc
- (id)dictionaryRepresentation;	// IMP=0x00000000000208f8
- (id)description;	// IMP=0x0000000000020849
@property(readonly, nonatomic) _Bool hasUnderlyingError;
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDomain;

@end

