//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKeyInput-Protocol.h>

@class NSString, NSUUID, UITextInputMode;

@protocol UITextDocumentProxy <UIKeyInput>
@property(readonly, copy, nonatomic) NSUUID *documentIdentifier;
@property(readonly, nonatomic) UITextInputMode *documentInputMode;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly, nonatomic) NSString *documentContextAfterInput;
@property(readonly, nonatomic) NSString *documentContextBeforeInput;
- (void)unmarkText;
- (void)setMarkedText:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
@end

