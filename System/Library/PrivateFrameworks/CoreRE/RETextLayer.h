//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface RETextLayer : CALayer
{
    struct __CFAttributedString *_attributedString;	// 8 = 0x8
    CDUnknownBlockType _renderBlock;	// 16 = 0x10
    struct EdgeInsets _edgeInsets;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x000000000096b195
- (void).cxx_destruct;	// IMP=0x000000000096b182
@property(copy, nonatomic) CDUnknownBlockType renderBlock; // @synthesize renderBlock=_renderBlock;
@property(nonatomic) struct EdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) struct __CFAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x000000000096af82
- (void)dealloc;	// IMP=0x000000000096af3c

@end
