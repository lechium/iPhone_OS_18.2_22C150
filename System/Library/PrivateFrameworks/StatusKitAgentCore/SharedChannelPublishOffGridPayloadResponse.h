//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface SharedChannelPublishOffGridPayloadResponse : PBCodable
{
    unsigned int _retryIntervalSeconds;	// 8 = 0x8
    int _status;	// 12 = 0xc
    CDStruct_00fd22b7 _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int retryIntervalSeconds; // @synthesize retryIntervalSeconds=_retryIntervalSeconds;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000066cc5
- (unsigned long long)hash;	// IMP=0x0000000000066c80
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000066bcd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000066b50
- (void)copyTo:(id)arg1;	// IMP=0x0000000000066af6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000066a83
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000066a76
- (id)dictionaryRepresentation;	// IMP=0x0000000000066724
- (id)description;	// IMP=0x0000000000066675
@property(nonatomic) _Bool hasRetryIntervalSeconds;
- (int)StringAsStatus:(id)arg1;	// IMP=0x00000000000664da
- (id)statusAsString:(int)arg1;	// IMP=0x0000000000066491
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end

