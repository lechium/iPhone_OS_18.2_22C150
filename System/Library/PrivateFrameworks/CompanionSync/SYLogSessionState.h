//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSDictionary, NSMutableArray, NSString, SYLogErrorInfo;

__attribute__((visibility("hidden")))
@interface SYLogSessionState : PBCodable
{
    double _fullSessionTimeout;	// 8 = 0x8
    unsigned long long _maxConcurrentMessages;	// 16 = 0x10
    double _perMessageTimeout;	// 24 = 0x18
    SYLogErrorInfo *_error;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSMutableArray *_peers;	// 48 = 0x30
    NSString *_reason;	// 56 = 0x38
    int _state;	// 64 = 0x40
    NSMutableArray *_transportOptions;	// 72 = 0x48
    _Bool _canRestart;	// 80 = 0x50
    _Bool _canRollback;	// 81 = 0x51
    _Bool _canceled;	// 82 = 0x52
    _Bool _isReset;	// 83 = 0x53
    _Bool _isSending;	// 84 = 0x54
    struct {
        unsigned int fullSessionTimeout:1;
        unsigned int perMessageTimeout:1;
        unsigned int canRestart:1;
        unsigned int canRollback:1;
        unsigned int canceled:1;
        unsigned int isReset:1;
    } _has;	// 88 = 0x58
}

+ (Class)peerType;	// IMP=0x001000000005343d
+ (Class)transportOptionsType;	// IMP=0x001000000005336b
- (void).cxx_destruct;	// IMP=0x0000000000055a32
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSMutableArray *peers; // @synthesize peers=_peers;
@property(retain, nonatomic) NSMutableArray *transportOptions; // @synthesize transportOptions=_transportOptions;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) _Bool canRollback; // @synthesize canRollback=_canRollback;
@property(nonatomic) _Bool canRestart; // @synthesize canRestart=_canRestart;
@property(retain, nonatomic) SYLogErrorInfo *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long maxConcurrentMessages; // @synthesize maxConcurrentMessages=_maxConcurrentMessages;
@property(nonatomic) double fullSessionTimeout; // @synthesize fullSessionTimeout=_fullSessionTimeout;
@property(nonatomic) double perMessageTimeout; // @synthesize perMessageTimeout=_perMessageTimeout;
@property(nonatomic) _Bool isReset; // @synthesize isReset=_isReset;
@property(nonatomic) _Bool isSending; // @synthesize isSending=_isSending;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000055511
- (unsigned long long)hash;	// IMP=0x00000000000551a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000054ebf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000054a60
- (void)copyTo:(id)arg1;	// IMP=0x00000000000547c7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000054431
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000054424
- (id)dictionaryRepresentation;	// IMP=0x0000000000053512
- (id)description;	// IMP=0x0000000000053463
@property(readonly, nonatomic) _Bool hasReason;
- (id)peerAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000053420
- (unsigned long long)peersCount;	// IMP=0x0000000000053403
- (void)addPeer:(id)arg1;	// IMP=0x0000000000053399
- (void)clearPeers;	// IMP=0x000000000005337c
- (id)transportOptionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005334e
- (unsigned long long)transportOptionsCount;	// IMP=0x0000000000053331
- (void)addTransportOptions:(id)arg1;	// IMP=0x00000000000532c7
- (void)clearTransportOptions;	// IMP=0x00000000000532aa
@property(nonatomic) _Bool hasCanceled;
@property(nonatomic) _Bool hasCanRollback;
@property(nonatomic) _Bool hasCanRestart;
@property(readonly, nonatomic) _Bool hasError;
@property(nonatomic) _Bool hasFullSessionTimeout;
@property(nonatomic) _Bool hasPerMessageTimeout;
@property(nonatomic) _Bool hasIsReset;
- (int)StringAsState:(id)arg1;	// IMP=0x0000000000052f61
- (id)stateAsString:(int)arg1;	// IMP=0x0000000000052f18
@property(retain, nonatomic) NSDictionary *cocoaTransportOptions;

@end

