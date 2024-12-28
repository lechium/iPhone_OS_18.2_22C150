//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PDSlideLayout
{
    int mSlideLayoutType;	// 96 = 0x60
    PDSlideMaster *mSlideMaster;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000004408f6
- (id)description;	// IMP=0x00000000004408b8
- (void)doneWithContent;	// IMP=0x0000000000440889
- (id)parentSlideBase;	// IMP=0x0000000000037f4b
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x0000000000038437
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x0000000000038324
- (id)parentTextStyleForTables;	// IMP=0x00000000001f71ae
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;	// IMP=0x000000000003802f
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x0000000000038200
- (id)transition;	// IMP=0x00000000004407ef
- (id)background;	// IMP=0x00000000000a64f9
- (id)defaultTheme;	// IMP=0x00000000000ab9d2
@property __weak PDSlideMaster *slideMaster; // @synthesize slideMaster=mSlideMaster;
- (void)setSlideLayoutType:(int)arg1;	// IMP=0x0000000000037a6c
- (int)slideLayoutType;	// IMP=0x0000000000038cca
- (id)initWithSlideMaster:(id)arg1;	// IMP=0x00000000000378ee

@end
