//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADParagraph;

__attribute__((visibility("hidden")))
@interface PMParagraphMapper
{
    OADParagraph *mParagraph;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000046b692
- (void)mapAt:(id)arg1 withState:(id)arg2 isFirstParagraph:(_Bool)arg3;	// IMP=0x00000000000aabc6
- (id)initWithOadParagraph:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000aab3a
- (void)addEndCharacterStyleToStyle:(id)arg1;	// IMP=0x00000000000ab587
- (id)fontScheme;	// IMP=0x00000000000ab81a
- (id)copyParagraphStyleWithState:(id)arg1 isFirstParagraph:(_Bool)arg2;	// IMP=0x00000000000aaf9b
- (int)firstTextRunFontSize;	// IMP=0x00000000000abe74

@end

