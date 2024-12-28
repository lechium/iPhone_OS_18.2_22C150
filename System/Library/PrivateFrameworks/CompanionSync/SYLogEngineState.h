//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface SYLogEngineState : PBCodable
{
    int _type;	// 8 = 0x8
    _Bool _buffersSessions;	// 12 = 0xc
    _Bool _inSession;	// 13 = 0xd
    _Bool _suspended;	// 14 = 0xe
    struct {
        unsigned int buffersSessions:1;
        unsigned int inSession:1;
        unsigned int suspended:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool buffersSessions; // @synthesize buffersSessions=_buffersSessions;
@property(nonatomic) _Bool inSession; // @synthesize inSession=_inSession;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001e02b
- (unsigned long long)hash;	// IMP=0x000000000001dfb6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001deaa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001de01
- (void)copyTo:(id)arg1;	// IMP=0x000000000001dd7b
- (void)writeTo:(id)arg1;	// IMP=0x000000000001dccd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001dcc0
- (id)dictionaryRepresentation;	// IMP=0x000000000001d795
- (id)description;	// IMP=0x000000000001d6e6
@property(nonatomic) _Bool hasBuffersSessions;
@property(nonatomic) _Bool hasInSession;
@property(nonatomic) _Bool hasSuspended;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000001d56f
- (id)typeAsString:(int)arg1;	// IMP=0x000000000001d524

@end
