//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Trie;

__attribute__((visibility("hidden")))
@interface TrieNode : NSObject
{
    int _node;	// 8 = 0x8
    int _offset;	// 12 = 0xc
    Trie *_trie;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008772c
@property(nonatomic) int offset; // @synthesize offset=_offset;
@property(nonatomic) int node; // @synthesize node=_node;
@property(nonatomic) __weak Trie *trie; // @synthesize trie=_trie;
- (id)copy;	// IMP=0x000000000008768e

@end

