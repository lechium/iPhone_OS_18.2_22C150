//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFPointerRegionPrivate;

__attribute__((visibility("hidden")))
@interface PDFPointerRegion : NSObject
{
    PDFPointerRegionPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000027fc8
- (void)setIdentifier:(id)arg1;	// IMP=0x0000000000027fb3
- (id)identifier;	// IMP=0x0000000000027fa1
- (void)setRect:(struct CGRect)arg1;	// IMP=0x0000000000027f87
- (struct CGRect)rect;	// IMP=0x0000000000027f6b
- (id)initWithRect:(struct CGRect)arg1 identifier:(id)arg2;	// IMP=0x0000000000027ec6

@end

