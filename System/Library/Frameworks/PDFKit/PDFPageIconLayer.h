//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFPageIconLayer : CALayer
{
    PDFDocument *_document;	// 8 = 0x8
    int _pageIndex;	// 16 = 0x10
    struct CGSize _frameSize;	// 24 = 0x18
    _Bool _needsUpdate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000de0e6
@property(nonatomic) __weak PDFDocument *document; // @synthesize document=_document;
- (void)updateAsPageIndex:(int)arg1 forDocument:(id)arg2;	// IMP=0x00000000000ddc49
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000ddbf8
- (void)setNeedsUpdate;	// IMP=0x00000000000ddbe7
@property(readonly, nonatomic) int pageIndex;
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x00000000000dda2e

@end

