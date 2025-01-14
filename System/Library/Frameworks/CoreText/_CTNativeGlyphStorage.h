//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _CTNativeGlyphStorage
{
    const long long *_attachCounts;	// 56 = 0x38
    const struct CGPoint *_origins;	// 64 = 0x40
    unsigned long long _retainCount;	// 72 = 0x48
    struct GlyphStack *_stack;	// 80 = 0x50
    long long _capacity;	// 88 = 0x58
    void *_preallocatedStorage;	// 96 = 0x60
}

+ (id)newWithCount:(long long)arg1 capacity:(long long)arg2;	// IMP=0x00600000000810d6
- (void)popGlyphAtIndex:(long long)arg1;	// IMP=0x0000000000081ff6
- (void)pushGlyphAtIndex:(long long)arg1;	// IMP=0x0000000000081f01
- (void)initGlyphStackWithCapacity:(long long)arg1;	// IMP=0x0000000000081e77
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;	// IMP=0x0000000000081d68
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;	// IMP=0x0000000000081c9b
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000000818f8
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;	// IMP=0x00000000000818d2
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000818c4
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000081849
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;	// IMP=0x000000000008183b
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;	// IMP=0x000000000008182e
- (void)setOrigin:(struct CGPoint)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000081793
- (struct CGPoint)originAtIndex:(long long)arg1;	// IMP=0x0000000000081764
- (void)resetOrigins:(CDStruct_912cb5d2)arg1;	// IMP=0x000000000008175e
- (_Bool)implementsOrigins;	// IMP=0x0000000000081756
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000816f8
- (long long)attachmentCountAtIndex:(long long)arg1;	// IMP=0x00000000000816da
- (const struct CGSize *)allocatedAdvances;	// IMP=0x000000000008167d
- (void)dealloc;	// IMP=0x0000000000081563
- (unsigned long long)retainCount;	// IMP=0x000000000008154f
- (oneway void)release;	// IMP=0x00000000000814ea
- (id)retain;	// IMP=0x00000000000814b1
- (_Bool)_isDeallocating;	// IMP=0x00000000000814a9
- (_Bool)_tryRetain;	// IMP=0x00000000000814a1
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000000812d4
- (id)initWithCount:(long long)arg1 capacity:(long long)arg2;	// IMP=0x00000000000811f0

@end

