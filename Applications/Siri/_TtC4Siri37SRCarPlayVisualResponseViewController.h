//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC4Siri37SRCarPlayVisualResponseViewController
{
    MISSING_TYPE *aceSnippet;	// 16 = 0x10
    MISSING_TYPE *pluginSnippet;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 32 = 0x20
    MISSING_TYPE *snippet;	// 48 = 0x30
    MISSING_TYPE *proceedToNextCommandAtSpeechSynthesisEnd;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000a3600
- (void)viewDidLoad;	// IMP=0x00100000000a3550
- (void)hideBackgroundBehindSiri;	// IMP=0x00100000000a67d0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000000a66a0
- (void)emitInstrumentationEvent:(id)arg1;	// IMP=0x00100000000a6650
- (void)snippetFocusDidChange:(long long)arg1;	// IMP=0x00100000000a5b10
- (void)restartSpeechSynthesis;	// IMP=0x00100000000a58f0
- (void)cancelSpeechSynthesis;	// IMP=0x00100000000a5850
- (void)informHostOfBackgroundMaterial:(long long)arg1;	// IMP=0x00100000000a5820
- (void)informHostOfBackgroundColor:(id)arg1;	// IMP=0x00100000000a5510
- (void)informHostOfViewResize:(struct CGSize)arg1;	// IMP=0x00100000000a52d0
- (void)navigateWithAceCommand:(id)arg1;	// IMP=0x00100000000a4d10
- (void)navigateWithResponseData:(id)arg1;	// IMP=0x00100000000a4c10
- (void)performShowResponse:(id)arg1;	// IMP=0x00100000000a4b90
- (void)performAceCommand:(id)arg1;	// IMP=0x00100000000a48d0

@end
