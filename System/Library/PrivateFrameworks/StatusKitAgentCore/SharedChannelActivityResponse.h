//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ChannelActivityActivationResponse, ChannelActivityDeactivationResponse, ChannelActivityPollingResponse;

__attribute__((visibility("hidden")))
@interface SharedChannelActivityResponse : PBCodable
{
    ChannelActivityActivationResponse *_activationResponse;	// 8 = 0x8
    ChannelActivityDeactivationResponse *_deactivationResponse;	// 16 = 0x10
    ChannelActivityPollingResponse *_pollingResponse;	// 24 = 0x18
    int _response;	// 32 = 0x20
    struct {
        unsigned int response:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000086978
@property(retain, nonatomic) ChannelActivityPollingResponse *pollingResponse; // @synthesize pollingResponse=_pollingResponse;
@property(retain, nonatomic) ChannelActivityDeactivationResponse *deactivationResponse; // @synthesize deactivationResponse=_deactivationResponse;
@property(retain, nonatomic) ChannelActivityActivationResponse *activationResponse; // @synthesize activationResponse=_activationResponse;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000086860
- (unsigned long long)hash;	// IMP=0x00000000000867c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000866b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000865ca
- (void)copyTo:(id)arg1;	// IMP=0x0000000000086527
- (void)writeTo:(id)arg1;	// IMP=0x00000000000864ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000864a0
- (id)dictionaryRepresentation;	// IMP=0x0000000000085fc9
- (id)description;	// IMP=0x0000000000085f1a
- (void)clearOneofValuesForResponse;	// IMP=0x0000000000085ea8
- (int)StringAsResponse:(id)arg1;	// IMP=0x0000000000085df4
- (id)responseAsString:(int)arg1;	// IMP=0x0000000000085dab
@property(nonatomic) _Bool hasResponse;
@property(nonatomic) int response; // @synthesize response=_response;
@property(readonly, nonatomic) _Bool hasPollingResponse;
@property(readonly, nonatomic) _Bool hasDeactivationResponse;
@property(readonly, nonatomic) _Bool hasActivationResponse;

@end
