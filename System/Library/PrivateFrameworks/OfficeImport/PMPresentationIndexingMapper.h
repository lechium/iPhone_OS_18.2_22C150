//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PDPresentation;

__attribute__((visibility("hidden")))
@interface PMPresentationIndexingMapper
{
}

- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(_Bool)arg4;	// IMP=0x000000000046b506
- (void)_indexSlide:(id)arg1 intoString:(id)arg2;	// IMP=0x000000000046b349
- (void)_indexDrawable:(id)arg1 intoString:(id)arg2;	// IMP=0x000000000046b1ab
- (void)_indexTable:(id)arg1 intoString:(id)arg2;	// IMP=0x000000000046b00b
- (void)_indexTextBody:(id)arg1 intoString:(id)arg2;	// IMP=0x000000000046af58
- (void)mapWithState:(id)arg1;	// IMP=0x000000000046aeca

// Remaining properties
@property(readonly) PDPresentation *document; // @dynamic document;

@end
