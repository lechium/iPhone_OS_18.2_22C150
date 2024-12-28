//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPTextLine, CPZone;

__attribute__((visibility("hidden")))
@interface CPHighlighter : NSObject
{
    CPZone *boundingZone;	// 8 = 0x8
    CPTextLine *textLine;	// 16 = 0x10
    struct CGColor *color;	// 24 = 0x18
    struct CPPDFStyle *style;	// 32 = 0x20
    struct CPPDFStyle *highlightedStyle;	// 40 = 0x28
}

+ (_Bool)reconstructHighlightFor:(id)arg1;	// IMP=0x0060000000371551
@property(nonatomic) struct CPPDFStyle *highlightedStyle; // @synthesize highlightedStyle;
@property(nonatomic) struct CPPDFStyle *style; // @synthesize style;
@property(readonly, nonatomic) struct CGColor *color; // @synthesize color;
- (void)highlight;	// IMP=0x0000000000371079
- (id)initWithTextLine:(id)arg1 inZone:(id)arg2 ofColor:(struct CGColor *)arg3;	// IMP=0x0000000000371026

@end
