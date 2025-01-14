//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MUAmpArtworkArgument, MUAttributionArgument, MUIconArgument, MUPageResizedArgument, MUUserInteractionAction, MUWebMenuButton;

__attribute__((visibility("hidden")))
@interface MUBridgeMethodArgument : PBCodable
{
    MUAmpArtworkArgument *_artworkArgument;	// 8 = 0x8
    MUAttributionArgument *_attributionArgument;	// 16 = 0x10
    MUIconArgument *_iconArgument;	// 24 = 0x18
    MUPageResizedArgument *_pageResizedArgument;	// 32 = 0x20
    int _type;	// 40 = 0x28
    MUUserInteractionAction *_userInteractionAction;	// 48 = 0x30
    MUWebMenuButton *_webMenuButton;	// 56 = 0x38
    struct {
        unsigned int type:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000c922e
@property(retain, nonatomic) MUPageResizedArgument *pageResizedArgument; // @synthesize pageResizedArgument=_pageResizedArgument;
@property(retain, nonatomic) MUWebMenuButton *webMenuButton; // @synthesize webMenuButton=_webMenuButton;
@property(retain, nonatomic) MUUserInteractionAction *userInteractionAction; // @synthesize userInteractionAction=_userInteractionAction;
@property(retain, nonatomic) MUAmpArtworkArgument *artworkArgument; // @synthesize artworkArgument=_artworkArgument;
@property(retain, nonatomic) MUAttributionArgument *attributionArgument; // @synthesize attributionArgument=_attributionArgument;
@property(retain, nonatomic) MUIconArgument *iconArgument; // @synthesize iconArgument=_iconArgument;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000c8fc9
- (unsigned long long)hash;	// IMP=0x00000000000c8edf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c8d45
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c8bec
- (void)copyTo:(id)arg1;	// IMP=0x00000000000c8ae9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000c89f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000c89e8
- (id)dictionaryRepresentation;	// IMP=0x00000000000c837f
- (id)description;	// IMP=0x00000000000c82d0
@property(readonly, nonatomic) _Bool hasPageResizedArgument;
@property(readonly, nonatomic) _Bool hasWebMenuButton;
@property(readonly, nonatomic) _Bool hasUserInteractionAction;
@property(readonly, nonatomic) _Bool hasArtworkArgument;
@property(readonly, nonatomic) _Bool hasAttributionArgument;
@property(readonly, nonatomic) _Bool hasIconArgument;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000000c81ed
- (id)typeAsString:(int)arg1;	// IMP=0x00000000000c8198
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

