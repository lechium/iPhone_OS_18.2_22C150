//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPTextLineMaker : NSObject
{
    NSMutableArray *textLines;	// 8 = 0x8
}

- (unsigned int)makeTextLines:(id)arg1;	// IMP=0x0000000000100116
- (void)zOrderSplitLines:(id)arg1;	// IMP=0x000000000010002b
- (void)splitByGraphic:(id)arg1 with:(struct CPPDFContext *)arg2;	// IMP=0x0000000000100005
- (id)textLines;	// IMP=0x00000000000ffffb
- (void)dealloc;	// IMP=0x00000000000fffc0

@end

