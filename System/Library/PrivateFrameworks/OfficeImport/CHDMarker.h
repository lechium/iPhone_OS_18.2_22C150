//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDMarker : NSObject
{
    unsigned int mSize;	// 8 = 0x8
    int mStyle;	// 12 = 0xc
    OADGraphicProperties *mGraphicProperties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000038eff1
- (id)description;	// IMP=0x000000000038efb3
- (void)setSize:(unsigned int)arg1;	// IMP=0x00000000001896f2
- (unsigned int)size;	// IMP=0x000000000018990d
- (void)setGraphicProperties:(id)arg1;	// IMP=0x00000000001896ae
- (id)graphicProperties;	// IMP=0x00000000001898bc
- (void)setStyle:(int)arg1;	// IMP=0x00000000001896fb
- (int)style;	// IMP=0x0000000000189916
- (id)init;	// IMP=0x00000000001892f2

@end
