//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTGlyphStorageInterface;

__attribute__((visibility("hidden")))
@interface _CTMutableGlyphStorage
{
    CTGlyphStorageInterface *_interface;	// 56 = 0x38
    _Bool _implementsOrigins;	// 64 = 0x40
    _Bool _hasCustomAdvances;	// 65 = 0x41
    _Bool _implementsCustomAdvancesForIndexes;	// 66 = 0x42
}

@property(readonly, nonatomic) _Bool implementsCustomAdvancesForIndexes; // @synthesize implementsCustomAdvancesForIndexes=_implementsCustomAdvancesForIndexes;
@property(readonly, nonatomic) _Bool hasCustomAdvances; // @synthesize hasCustomAdvances=_hasCustomAdvances;
@property(readonly, nonatomic) _Bool implementsOrigins; // @synthesize implementsOrigins=_implementsOrigins;
- (void)disposeGlyphStack;	// IMP=0x00000000000f12b9
- (void)popGlyphAtIndex:(long long)arg1;	// IMP=0x00000000000f129c
- (void)pushGlyphAtIndex:(long long)arg1;	// IMP=0x00000000000f127f
- (void)initGlyphStackWithCapacity:(long long)arg1;	// IMP=0x00000000000f1262
- (void)sync;	// IMP=0x00000000000f11cd
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;	// IMP=0x00000000000f1132
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;	// IMP=0x00000000000f10b0
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000000f0fe7
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;	// IMP=0x00000000000f0f7f
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000f0f62
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000f0f45
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000f0f28
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000f0f0b
- (void)setOrigin:(struct CGPoint)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000f0def
- (struct CGPoint)originAtIndex:(long long)arg1;	// IMP=0x00000000000f0d78
- (void)resetOrigins:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000000f0d0d
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;	// IMP=0x00000000000f0cf0
- (long long)attachmentCountAtIndex:(long long)arg1;	// IMP=0x00000000000f0cce
- (void)getCustomAdvances:(struct CGSize *)arg1 forIndexes:(const long long *)arg2 count:(long long)arg3;	// IMP=0x00000000000f0ca2
- (struct CGSize)customAdvanceForIndex:(long long)arg1;	// IMP=0x00000000000f0c46
- (void *)refCon;	// IMP=0x00000000000f0c35
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;	// IMP=0x00000000000f0b6b
- (id)initWithInterface:(id)arg1 options:(unsigned int)arg2;	// IMP=0x00000000000f0a8e
- (id)initWithInterface:(id)arg1;	// IMP=0x00000000000f0a7a

@end

