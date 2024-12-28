//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSMutableArray, PDFPage;

__attribute__((visibility("hidden")))
@interface PDFHighlightDetectedFormFieldsEffectLayer : CALayer
{
    PDFPage *_page;	// 8 = 0x8
    long long _displayBox;	// 16 = 0x10
    struct CGRect _cropBox;	// 24 = 0x18
    NSMutableArray *_addedSublayers;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000c6c9c
- (id)_addRect:(struct CGRect)arg1 withColor:(id)arg2 backgroundColor:(id)arg3 labelText:(id)arg4 itemIndex:(unsigned long long)arg5;	// IMP=0x00000000000c67ba
- (void)updateVisibleLayers;	// IMP=0x00000000000c62e3
- (void)setDisplayBox:(long long)arg1;	// IMP=0x00000000000c62d2
- (id)initWithPage:(id)arg1;	// IMP=0x00000000000c61de

@end
