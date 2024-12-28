//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFRichText.h>

__attribute__((visibility("hidden")))
@interface MKSearchFoundationRichText : SFRichText
{
    CDUnknownBlockType _completionHandlers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001cd266
@property(copy, nonatomic) CDUnknownBlockType completionHandlers; // @synthesize completionHandlers=_completionHandlers;
- (_Bool)isRichTextResolved;	// IMP=0x00000000001cd23c
- (void)_invokeCompletionHandlers;	// IMP=0x00000000001cd1d3
- (void)setFormattedTextPieces:(id)arg1;	// IMP=0x00000000001cd192
- (void)setText:(id)arg1;	// IMP=0x00000000001cd151
- (void)loadRichTextWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ccfe7
- (id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2;	// IMP=0x00000000001cce3b
- (id)initWithString:(id)arg1;	// IMP=0x00000000001ccdd3

@end
