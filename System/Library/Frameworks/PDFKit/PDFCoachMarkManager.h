//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFCoachMarkManagerPrivate;

__attribute__((visibility("hidden")))
@interface PDFCoachMarkManager : NSObject
{
    PDFCoachMarkManagerPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006ab2d
- (id)_pageLayerForPage:(id)arg1;	// IMP=0x000000000006aa31
- (void)_cleanCoachMarks;	// IMP=0x000000000006a81f
- (void)pageLayerWillRemove:(id)arg1;	// IMP=0x000000000006a761
- (void)pageLayerDidAppear:(id)arg1;	// IMP=0x000000000006a57d
- (void)createCoachMarkForPage:(id)arg1 atFrame:(struct CGRect)arg2;	// IMP=0x000000000006a3b3
- (id)initWithPDFRenderingProperties:(id)arg1;	// IMP=0x000000000006a2d0

@end
