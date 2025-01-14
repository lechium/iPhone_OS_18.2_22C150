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

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002619f4
- (void).cxx_destruct;	// IMP=0x0000000000261bc0
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) BRFieldCKInfo *ckInfo; // @synthesize ckInfo=_ckInfo;
- (id)description;	// IMP=0x0000000000261b1d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000261aad
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002619fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002619c5
- (id)initWithServerZoneHealthState:(id)arg1;	// IMP=0x0000000000261959
- (id)initWithCKInfo:(id)arg1 state:(int)arg2;	// IMP=0x00000000002618e3

@end

