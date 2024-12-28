//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class MISSING_TYPE, NSData, NSString;

@interface SDAutoUnlockAuthPromptRequest : PBRequest
{
    NSString *_appName;	// 8 = 0x8
    NSData *_iconHash;	// 16 = 0x10
    NSString *_navBarTitle;	// 24 = 0x18
    unsigned int _version;	// 32 = 0x20
    CDStruct_f20694ce _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0020000000250777
@property(retain, nonatomic) NSString *navBarTitle; // @synthesize navBarTitle=_navBarTitle;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSData *iconHash; // @synthesize iconHash=_iconHash;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000250655
- (unsigned long long)hash;	// IMP=0x00100000002505bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002504a9
- (MISSING_TYPE *)copyWithZone: /* Error: Ran out of types for this method. */;	// IMP=0x00100000002503c0
- (void)copyTo:(id)arg1;	// IMP=0x001000000025031d
- (void)writeTo:(id)arg1;	// IMP=0x001000000025027d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000250270
- (id)dictionaryRepresentation;	// IMP=0x001000000024ff23
- (id)description;	// IMP=0x001000000024fe74
@property(readonly, nonatomic) _Bool hasNavBarTitle;
@property(readonly, nonatomic) _Bool hasAppName;
@property(readonly, nonatomic) _Bool hasIconHash;
@property(nonatomic) _Bool hasVersion;

@end
