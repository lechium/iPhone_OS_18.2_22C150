//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PDFRenderer
{
    struct __CFDictionary *info;	// 40 = 0x28
    struct __CFData *data;	// 48 = 0x30
    struct CGDataConsumer *dataConsumer;	// 56 = 0x38
}

- (struct __CFData *)pdfdata;	// IMP=0x0000000000109401
- (void)flushRender;	// IMP=0x00000000001093e0
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;	// IMP=0x000000000010926b
- (void)setFileTitle:(id)arg1;	// IMP=0x0000000000109244
- (void)setFileURL:(id)arg1;	// IMP=0x00000000001091aa
- (void)dealloc;	// IMP=0x000000000010913f
- (id)init;	// IMP=0x00000000001090c7

@end

