//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshResponse.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface COCapabilityReadResponse : COMeshResponse
{
    NSSet *_capabilities;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000026cb1
- (void).cxx_destruct;	// IMP=0x0000000000026cca
@property(readonly, copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026c16
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000269af
- (id)initWithCapabilities:(id)arg1;	// IMP=0x0000000000026935
- (id)init;	// IMP=0x00000000000268db

@end

