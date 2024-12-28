//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _EARLMTKaldiVocab : NSObject
{
    unsigned long long _bosIndex;	// 8 = 0x8
    unsigned long long _eosIndex;	// 16 = 0x10
    unsigned long long _unkIndex;	// 24 = 0x18
    NSString *_eosToken;	// 32 = 0x20
    struct unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> _w2i;	// 40 = 0x28
}

+ (void)initialize;	// IMP=0x00600000001732f4
- (id).cxx_construct;	// IMP=0x0000000000174130
- (void).cxx_destruct;	// IMP=0x000000000017410a
- (id)endOfSentenceToken;	// IMP=0x00000000001740fc
- (unsigned long long)unknownWordIndex;	// IMP=0x00000000001740f2
- (unsigned long long)beginOfSentenceIndex;	// IMP=0x00000000001740e8
- (unsigned long long)endOfSentenceIndex;	// IMP=0x00000000001740de
- (unsigned long long)vocabSize;	// IMP=0x00000000001740d4
- (unsigned long long)indexForWord:(id)arg1;	// IMP=0x0000000000173ffb
- (id)initWithContentsOfUrl:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000173350
- (id)init;	// IMP=0x0000000000173342

@end
