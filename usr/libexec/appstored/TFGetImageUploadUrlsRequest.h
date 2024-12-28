//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface TFGetImageUploadUrlsRequest : PBRequest
{
    unsigned long long _desiredUrlTTLMillis;	// 8 = 0x8
    unsigned long long _dsid;	// 16 = 0x10
    NSString *_contentType;	// 24 = 0x18
    unsigned int _count;	// 32 = 0x20
    struct {
        unsigned int desiredUrlTTLMillis:1;
        unsigned int dsid:1;
        unsigned int count:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0020000000136ff3
- (unsigned long long)hash;	// IMP=0x0010000000136f56
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000136e46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000136d72
- (void)writeTo:(id)arg1;	// IMP=0x0010000000136cac
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000136991
- (id)dictionaryRepresentation;	// IMP=0x001000000013681c
- (id)description;	// IMP=0x001000000013676d

@end
