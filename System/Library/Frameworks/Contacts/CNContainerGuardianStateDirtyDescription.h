//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNContainerGuardianStateDirtyDescription
{
}

- (void)setCNValue:(id)arg1 onContainer:(id)arg2;	// IMP=0x0000000000015dcf
- (id)CNValueForContainer:(id)arg1;	// IMP=0x0000000000015d97
- (_Bool)isWritable;	// IMP=0x0000000000015d8f
- (Class)valueClass;	// IMP=0x0000000000015d7e
- (id)key;	// IMP=0x0000000000015d6a
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x000000000005d601
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x000000000005d5a9
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x000000000005d503
- (int)abPropertyID;	// IMP=0x000000000005d4f4

@end
