//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface EDContentFormatsCollection
{
    unsigned long long mNextContentFormatId;	// 24 = 0x18
}

- (unsigned long long)addOrEquivalentObject:(id)arg1;	// IMP=0x0000000000118ebc
- (unsigned long long)addObject:(id)arg1;	// IMP=0x000000000011506a
- (id)init;	// IMP=0x000000000011488f
- (_Bool)isOverwritingKeyOK;	// IMP=0x00000000003a154c
- (void)addDefaultWithNSString:(id)arg1 formatId:(unsigned long long)arg2;	// IMP=0x0000000000114d23
- (void)setupDefaults;	// IMP=0x000000000011497b

@end
