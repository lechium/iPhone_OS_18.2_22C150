//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SiriNLUOverrideProxy : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *store;	// 16 = 0x10
    MISSING_TYPE *componentOverrideStore;	// 24 = 0x18
    MISSING_TYPE *overrideResults;	// 32 = 0x20
    MISSING_TYPE *swiftifiedInputs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000107f2e
- (id)init;	// IMP=0x0000000000107efb
- (id)matchWithInputs:(id)arg1 shouldAppend:(_Bool *)arg2;	// IMP=0x0000000000107e20
- (void)preheatWithLanguageCode:(id)arg1;	// IMP=0x000000000010758e
- (id)matchWithInputs:(id)arg1 overrideNamespace:(int)arg2;	// IMP=0x000000000010739f
- (_Bool)loadComponentOverrideTrieStoreWithTrieFilePath:(id)arg1;	// IMP=0x00000000001068c7
- (_Bool)loadGlobalOverrideTrieStoreWithTrieFilePath:(id)arg1;	// IMP=0x0000000000106662
- (_Bool)isOverrideStoreValid;	// IMP=0x0000000000106544
- (id)initWithUseTrie:(_Bool)arg1 useMemory:(_Bool)arg2;	// IMP=0x00000000001063cd

@end
