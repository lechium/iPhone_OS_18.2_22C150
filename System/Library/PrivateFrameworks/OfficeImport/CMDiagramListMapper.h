//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CMDiagramListMapper
{
    float mMaxLineCount;	// 228 = 0xe4
}

- (float)setFonSizeForChildNode:(id)arg1 atIndex:(unsigned long long)arg2 level:(int)arg3;	// IMP=0x00000000001fcc7d
- (void)setDefaultFonSize;	// IMP=0x00000000001fca1f
- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000045aaeb
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001fcfc1
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001fc524
- (struct CGSize)textSize;	// IMP=0x00000000001fcef5
- (void)mapListItemAt:(id)arg1 index:(unsigned long long)arg2 withState:(id)arg3;	// IMP=0x00000000001fd06d
- (id)suggestedBoundsForHListItemWithIndex:(unsigned long long)arg1;	// IMP=0x00000000001fd224

@end

