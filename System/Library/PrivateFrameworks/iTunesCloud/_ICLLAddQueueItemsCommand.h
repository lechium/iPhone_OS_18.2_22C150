//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _ICLLRadioSource;

__attribute__((visibility("hidden")))
@interface _ICLLAddQueueItemsCommand : PBCodable
{
    int _insertPositionType;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    int _position;	// 24 = 0x18
    NSString *_queueContext;	// 32 = 0x20
    _ICLLRadioSource *_radioSource;	// 40 = 0x28
    int _revision;	// 48 = 0x30
    struct {
        unsigned int insertPositionType:1;
        unsigned int position:1;
        unsigned int revision:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000000462a5
- (unsigned long long)hash;	// IMP=0x00000000000461ca
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004605c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000045deb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000045c02
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000045bf5
- (id)dictionaryRepresentation;	// IMP=0x000000000004582d
- (id)description;	// IMP=0x000000000004577e

@end

