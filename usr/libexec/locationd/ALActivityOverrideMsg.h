//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class ALCLMotionActivity;

@interface ALActivityOverrideMsg : PBCodable
{
    ALCLMotionActivity *_activity;	// 8 = 0x8
    int _overrideAction;	// 16 = 0x10
}

@property(retain, nonatomic) ALCLMotionActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) int overrideAction; // @synthesize overrideAction=_overrideAction;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000241ba5
- (unsigned long long)hash;	// IMP=0x0010000000241b69
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000241aff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000241a78
- (void)copyTo:(id)arg1;	// IMP=0x0010000000241a48
- (void)writeTo:(id)arg1;	// IMP=0x00100000002419f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000002419ec
- (id)dictionaryRepresentation;	// IMP=0x00100000002416fe
- (id)description;	// IMP=0x0010000000241687
- (int)StringAsOverrideAction:(id)arg1;	// IMP=0x001000000024161d
- (id)overrideActionAsString:(int)arg1;	// IMP=0x00100000002415e2
- (void)dealloc;	// IMP=0x00100000002415a2

@end
