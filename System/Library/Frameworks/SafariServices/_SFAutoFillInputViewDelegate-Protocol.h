//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class _SFAutoFillInputView, _SFTextSuggestion;

@protocol _SFAutoFillInputViewDelegate <NSObject>
- (void)autoFillStrongPasswordWithFormat:(unsigned long long)arg1;
- (void)autoFillInputViewShouldClose:(_SFAutoFillInputView *)arg1;
- (void)autoFillTextSuggestion:(_SFTextSuggestion *)arg1;

@optional
- (void)autoFillInputViewDidSelectMorePasswords:(_SFAutoFillInputView *)arg1;
- (void)autoFillInputViewDidSelectUseKeyboard:(_SFAutoFillInputView *)arg1;
@end

