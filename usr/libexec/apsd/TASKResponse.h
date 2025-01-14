//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TASKResponse : PBCodable
{
    NSString *_errorMessage;	// 8 = 0x8
    int _status;	// 16 = 0x10
    unsigned int _taskId;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0020000000054025
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000053f82
- (unsigned long long)hash;	// IMP=0x0010000000053f35
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000053e85
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000053def
- (void)copyTo:(id)arg1;	// IMP=0x0010000000053dab
- (void)writeTo:(id)arg1;	// IMP=0x0010000000053d3b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000053d2e
- (id)dictionaryRepresentation;	// IMP=0x00100000000539b5
- (id)description;	// IMP=0x0010000000053906
@property(readonly, nonatomic) _Bool hasErrorMessage;
- (int)StringAsStatus:(id)arg1;	// IMP=0x001000000005381f
- (id)statusAsString:(int)arg1;	// IMP=0x00100000000537d6

@end

