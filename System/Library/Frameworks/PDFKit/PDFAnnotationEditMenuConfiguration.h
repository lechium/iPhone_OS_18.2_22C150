//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIEditMenuConfiguration.h>

@class PDFAnnotation;

__attribute__((visibility("hidden")))
@interface PDFAnnotationEditMenuConfiguration : UIEditMenuConfiguration
{
    PDFAnnotation *_annotation;	// 8 = 0x8
}

+ (id)configurationWithIdentifier:(id)arg1 sourcePoint:(struct CGPoint)arg2;	// IMP=0x00600000000866c7
- (void).cxx_destruct;	// IMP=0x000000000008672c
@property(retain) PDFAnnotation *annotation; // @synthesize annotation=_annotation;

@end

