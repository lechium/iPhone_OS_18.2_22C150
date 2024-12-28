//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _ICLLAutoPlaySource, _ICLLQueueQuery, _ICLLRadioSource;

__attribute__((visibility("hidden")))
@interface _ICLLReplaceQueueItemsAction : PBCodable
{
    _ICLLAutoPlaySource *_autoPlay;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    NSString *_preferredPlayItemId;	// 24 = 0x18
    _ICLLQueueQuery *_queueQuery;	// 32 = 0x20
    _ICLLRadioSource *_radio;	// 40 = 0x28
    int _revision;	// 48 = 0x30
    int _trackGenerationSource;	// 52 = 0x34
    CDStruct_4af0550e _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000074780
- (unsigned long long)hash;	// IMP=0x0000000000074697
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000744fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007425d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000074081
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000074074
- (id)dictionaryRepresentation;	// IMP=0x0000000000073c6b
- (id)description;	// IMP=0x0000000000073bbc

@end
