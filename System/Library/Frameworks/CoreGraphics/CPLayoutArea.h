//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPLayoutArea
{
    _Bool isFirstLayout;	// 161 = 0xa1
    _Bool hasRotatedCharacters;	// 162 = 0xa2
}

- (id)description;	// IMP=0x0000000000587ea3
- (id)properties;	// IMP=0x0000000000587e03
- (_Bool)hasRotatedCharacters;	// IMP=0x0000000000587df3
- (void)setHasRotatedCharacters:(_Bool)arg1;	// IMP=0x0000000000587de3
- (double)selectionBottom;	// IMP=0x0000000000587d3e
- (struct CGRect)layoutAreaBounds;	// IMP=0x0000000000587c0c
- (_Bool)isShapeRegion;	// IMP=0x0000000000587c04
- (_Bool)isImageRegion;	// IMP=0x0000000000587bfc
- (void)setIsImageRegion:(_Bool)arg1;	// IMP=0x0000000000587bf6
- (_Bool)isRowRegion;	// IMP=0x0000000000587bee
- (_Bool)isGraphicalRegion;	// IMP=0x0000000000587be6
- (_Bool)isBoxRegion;	// IMP=0x0000000000587bde
- (void)addColumnBreaks;	// IMP=0x0000000000587b2e
- (void)setIsFirstLayout:(_Bool)arg1;	// IMP=0x0000000000587b1e
- (_Bool)isFirstLayout;	// IMP=0x0000000000587b0e
- (_Bool)isSimilarTo:(id)arg1;	// IMP=0x0000000000587b06
- (void)accept:(id)arg1;	// IMP=0x0000000000587aeb
- (id)init;	// IMP=0x0000000000587aac

@end

