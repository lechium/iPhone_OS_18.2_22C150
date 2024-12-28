//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputUI/NSObject-Protocol.h>

@class NSString, TUIEmojiSearchTextField;

@protocol TUIEmojiSearchTextFieldDelegate <NSObject>
- (void)emojiSearchTextFieldWillClear:(TUIEmojiSearchTextField *)arg1;
- (void)emojiSearchTextFieldDidBecomeInactive:(TUIEmojiSearchTextField *)arg1;
- (void)emojiSearchTextFieldWillBecomeInactive:(TUIEmojiSearchTextField *)arg1;
- (void)emojiSearchTextFieldDidBecomeActive:(TUIEmojiSearchTextField *)arg1;
- (void)emojiSearchTextFieldWillBecomeActive:(TUIEmojiSearchTextField *)arg1;
- (void)emojiSearchTextField:(TUIEmojiSearchTextField *)arg1 didChangeSearchString:(NSString *)arg2;
@end
