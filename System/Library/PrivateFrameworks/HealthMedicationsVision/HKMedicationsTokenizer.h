//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLTokenizer;

__attribute__((visibility("hidden")))
@interface HKMedicationsTokenizer : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NLTokenizer *_tokenizer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ade7
@property(retain, nonatomic) NLTokenizer *tokenizer; // @synthesize tokenizer=_tokenizer;
- (id)wordsFromTranscript:(id)arg1;	// IMP=0x000000000000abf0
- (id)init;	// IMP=0x000000000000ab67

@end
