//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class UITextReplacement;

__attribute__((visibility("hidden")))
@interface UITextReplacementCandidate : TIKeyboardCandidateSingle
{
    UITextReplacement *_replacement;	// 8 = 0x8
}

+ (id)textReplacementCandidateForTextReplacement:(id)arg1;	// IMP=0x00600000007799e2
- (void).cxx_destruct;	// IMP=0x0000000000779acb
@property(readonly, nonatomic) UITextReplacement *replacement; // @synthesize replacement=_replacement;
- (id)label;	// IMP=0x0000000000779a9d
- (id)_initWithTextReplacement:(id)arg1;	// IMP=0x0000000000779a2f

@end
