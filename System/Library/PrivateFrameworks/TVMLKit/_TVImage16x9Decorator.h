//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVImageScaleDecorator.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVImage16x9Decorator : TVImageScaleDecorator
{
    NSString *_inlineTitle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000011de0d
@property(copy, nonatomic) NSString *inlineTitle; // @synthesize inlineTitle=_inlineTitle;
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;	// IMP=0x000000000011d6f8
- (id)decoratorIdentifier;	// IMP=0x000000000011d626
- (id)initWithInlineTitle:(id)arg1;	// IMP=0x000000000011d5b8

@end
