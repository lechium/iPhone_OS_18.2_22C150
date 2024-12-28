//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRFieldCKInfo;

__attribute__((visibility("hidden")))
@interface BRCServerZoneHealthState : NSObject
{
    int _state;	// 8 = 0x8
    BRFieldCKInfo *_ckInfo;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000023d5d8
- (void).cxx_destruct;	// IMP=0x000000000023d7a4
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) BRFieldCKInfo *ckInfo; // @synthesize ckInfo=_ckInfo;
- (id)description;	// IMP=0x000000000023d701
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000023d691
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023d5e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023d5a9
- (id)initWithServerZoneHealthState:(id)arg1;	// IMP=0x000000000023d53d
- (id)initWithCKInfo:(id)arg1 state:(int)arg2;	// IMP=0x000000000023d4c7

@end
