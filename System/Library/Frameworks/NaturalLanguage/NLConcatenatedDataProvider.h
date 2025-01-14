//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLDataProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NLConcatenatedDataProvider : NLDataProvider
{
    NSArray *_dataProviders;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000005307e
- (unsigned long long)numberOfVocabularyEntries;	// IMP=0x000000000005302f
- (unsigned long long)numberOfLabels;	// IMP=0x0000000000052fe0
- (id)documentFrequencyMap;	// IMP=0x0000000000052f85
- (id)vocabularyMap;	// IMP=0x0000000000052f2a
- (id)inverseLabelMap;	// IMP=0x0000000000052ecf
- (id)labelMap;	// IMP=0x0000000000052e74
- (struct __CFStringTokenizer *)tokenizer;	// IMP=0x0000000000052e25
- (void)_generateMaps;	// IMP=0x0000000000052e1f
- (id)instanceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000052c95
- (unsigned long long)numberOfInstances;	// IMP=0x0000000000052b55
- (id)configuration;	// IMP=0x0000000000052afa
- (id)initWithDataProviders:(id)arg1;	// IMP=0x0000000000052a66

@end

