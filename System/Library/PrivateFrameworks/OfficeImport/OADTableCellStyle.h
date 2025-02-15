//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADFill, OADTableCellBorderStyle;

__attribute__((visibility("hidden")))
@interface OADTableCellStyle : NSObject
{
    OADTableCellBorderStyle *mBorderStyle;	// 8 = 0x8
    OADFill *mFill;	// 16 = 0x10
}

+ (id)defaultStyle;	// IMP=0x0060000000320465
+ (id)defaultFill;	// IMP=0x006000000032044c
- (void).cxx_destruct;	// IMP=0x000000000032078d
- (id)description;	// IMP=0x000000000032074f
- (void)applyOverridesFrom:(id)arg1;	// IMP=0x0000000000320629
- (id)shallowCopy;	// IMP=0x0000000000320548
- (void)setFill:(id)arg1;	// IMP=0x00000000001c9ba1
- (id)fill;	// IMP=0x00000000001f9cbc
- (void)setBorderStyle:(id)arg1;	// IMP=0x00000000001c9903
- (id)borderStyle;	// IMP=0x00000000001f91ad

@end

