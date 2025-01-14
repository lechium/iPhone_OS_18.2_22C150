//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class FCCKPOperation, FCCKPQueryRetrieveRequest, FCCKPRecordRetrieveRequest, FCCKPRequestOperationHeader;

__attribute__((visibility("hidden")))
@interface FCCKPRequestOperation : PBCodable
{
    FCCKPRequestOperationHeader *_header;	// 8 = 0x8
    FCCKPQueryRetrieveRequest *_queryRetrieveRequest;	// 16 = 0x10
    FCCKPRecordRetrieveRequest *_recordRetrieveRequest;	// 24 = 0x18
    FCCKPOperation *_request;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000034f890
- (unsigned long long)hash;	// IMP=0x000000000034f752
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000034f646
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000034f55c
- (void)writeTo:(id)arg1;	// IMP=0x000000000034f4c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000034f21c
- (id)dictionaryRepresentation;	// IMP=0x000000000034f0af
- (id)description;	// IMP=0x000000000034f000

@end

