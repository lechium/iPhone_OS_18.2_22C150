//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface EMKEmojiTokenList : NSObject
{
    NSArray *_emojiTokenArray;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000c97b
- (id)description;	// IMP=0x000000000000c851
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c846
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000c830
- (id)emojiTokenAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000c81a
@property(readonly) unsigned long long count;
@property(readonly) NSArray *emojiTokenArray;
- (id)initWithEmojiTokenArray:(id)arg1;	// IMP=0x000000000000c779

@end
