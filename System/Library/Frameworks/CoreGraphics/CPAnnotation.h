//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPAnnotation
{
    struct CGPDFAnnotation *_cgAnnotation;	// 168 = 0xa8
}

@property struct CGPDFAnnotation *cgAnnotation; // @synthesize cgAnnotation=_cgAnnotation;
- (void)dealloc;	// IMP=0x000000000014aef5
- (id)initWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg1;	// IMP=0x000000000014ae3b

@end
