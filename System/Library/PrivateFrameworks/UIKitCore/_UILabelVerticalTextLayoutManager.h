//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTextContainer, NSTextContentStorage, NSTextLayoutManager;

__attribute__((visibility("hidden")))
@interface _UILabelVerticalTextLayoutManager : NSObject
{
    NSTextLayoutManager *_layoutManager;	// 8 = 0x8
    NSTextContainer *_textContainer;	// 16 = 0x10
    NSTextContentStorage *_contentStorage;	// 24 = 0x18
    double _scale;	// 32 = 0x20
    long long _lineBreakMode;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000018d19c4
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
- (void)drawWithString:(id)arg1 rect:(struct CGRect)arg2 options:(long long)arg3 attributes:(id)arg4 context:(id)arg5;	// IMP=0x00000000018d18ec
- (void)drawWithAttributedString:(id)arg1 rect:(struct CGRect)arg2 options:(long long)arg3 context:(id)arg4;	// IMP=0x00000000018d18da
- (void)_drawWithAttributedString:(id)arg1 rect:(struct CGRect)arg2 options:(long long)arg3 context:(id)arg4;	// IMP=0x00000000018d17b3
- (struct CGRect)boundingRectWithString:(id)arg1 size:(struct CGSize)arg2 options:(long long)arg3 attributes:(id)arg4 context:(id)arg5;	// IMP=0x00000000018d16e6
- (struct CGRect)boundingRectWithAttributedString:(id)arg1 size:(struct CGSize)arg2 options:(long long)arg3 context:(id)arg4;	// IMP=0x00000000018d16c7
- (struct CGRect)_boundingRectWithString:(id)arg1 size:(struct CGSize)arg2 options:(long long)arg3 context:(id)arg4;	// IMP=0x00000000018d1542
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000018d1413

@end
