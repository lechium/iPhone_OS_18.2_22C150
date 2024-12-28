//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNRecognizeDocumentElementsRequestElementConfiguration;

__attribute__((visibility("hidden")))
@interface VNRecognizeDocumentElementsRequestConfiguration
{
    unsigned long long _imageCropAndScaleOption;	// 8 = 0x8
    VNRecognizeDocumentElementsRequestElementConfiguration *_documentElements;	// 16 = 0x10
    VNRecognizeDocumentElementsRequestElementConfiguration *_textElements;	// 24 = 0x18
    VNRecognizeDocumentElementsRequestElementConfiguration *_machineReadableCodeElements;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003ac286
@property(readonly) VNRecognizeDocumentElementsRequestElementConfiguration *machineReadableCodeElements; // @synthesize machineReadableCodeElements=_machineReadableCodeElements;
@property(readonly) VNRecognizeDocumentElementsRequestElementConfiguration *textElements; // @synthesize textElements=_textElements;
@property(readonly) VNRecognizeDocumentElementsRequestElementConfiguration *documentElements; // @synthesize documentElements=_documentElements;
@property unsigned long long imageCropAndScaleOption; // @synthesize imageCropAndScaleOption=_imageCropAndScaleOption;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ac14a
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x00000000003ac05d

@end
