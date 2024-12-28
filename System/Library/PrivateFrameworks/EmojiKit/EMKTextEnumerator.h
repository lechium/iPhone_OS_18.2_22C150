//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMFEmojiPreferences, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EMKTextEnumerator : NSObject
{
    NSMutableDictionary *_emojiDatasByLanguage;	// 8 = 0x8
    EMFEmojiPreferences *_emojiPreferences;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000d073
- (void)enumerateEmojiSignifiersInString:(id)arg1 touchingRange:(struct _NSRange)arg2 language:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000cc75
- (id)emojiDataForLanguage:(id)arg1;	// IMP=0x000000000000cb50
- (id)init;	// IMP=0x000000000000cb3c
- (id)initWithEmojiPreferences:(id)arg1;	// IMP=0x000000000000cab7

@end
