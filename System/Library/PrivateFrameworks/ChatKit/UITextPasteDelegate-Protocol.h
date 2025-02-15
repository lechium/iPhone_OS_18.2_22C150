//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray, NSAttributedString, UITextRange;
@protocol UITextPasteConfigurationSupporting, UITextPasteItem;

@protocol UITextPasteDelegate <NSObject>

@optional
- (_Bool)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 shouldAnimatePasteOfAttributedString:(NSAttributedString *)arg2 toRange:(UITextRange *)arg3;
- (UITextRange *)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 performPasteOfAttributedString:(NSAttributedString *)arg2 toRange:(UITextRange *)arg3;
- (NSAttributedString *)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 combineItemAttributedStrings:(NSArray *)arg2 forRange:(UITextRange *)arg3;
- (void)textPasteConfigurationSupporting:(id <UITextPasteConfigurationSupporting>)arg1 transformPasteItem:(id <UITextPasteItem>)arg2;
@end

