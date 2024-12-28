//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VUWGallery;

__attribute__((visibility("hidden")))
@interface MADPersonalizedEmbeddingTask
{
    VUWGallery *_gallery;	// 8 = 0x8
}

+ (id)embeddingFromMultiArray:(id)arg1 normalize:(_Bool)arg2 version:(unsigned long long)arg3;	// IMP=0x00600000002f7c0b
+ (_Bool)prewarmRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002f6f29
- (void).cxx_destruct;	// IMP=0x00000000003001ad
- (int)run;	// IMP=0x00000000002ff774
- (int)processInput:(id)arg1 resource:(id)arg2 result:(id *)arg3;	// IMP=0x00000000002fef47
- (int)processGenerativePlaygroundsOutput:(id)arg1 resource:(id)arg2 entitySegment:(id)arg3 imageSegment:(id)arg4 faceObservation:(id)arg5 personalizationIndex:(unsigned long long)arg6 embeddingResult:(id *)arg7 hiddenLayerResult:(id *)arg8 pooledEmbeddingResult:(id *)arg9;	// IMP=0x00000000002fd8d3
- (int)processSystemSearchOutput:(id)arg1 resource:(id)arg2 embeddingResult:(id *)arg3;	// IMP=0x00000000002fd752
- (int)processPixelBuffer:(struct __CVBuffer *)arg1 imageEmbedding:(id *)arg2;	// IMP=0x00000000002fcf68
- (unsigned long long)imageEmbeddingVersion;	// IMP=0x00000000002fcef9
- (int)processSegments:(id)arg1 resource:(id)arg2 keyEntitySegment:(id *)arg3 keyImageSegment:(id *)arg4 faceObservation:(id *)arg5 personalizationIndex:(unsigned long long *)arg6 textEncoderInputs:(id)arg7;	// IMP=0x00000000002fb194
- (int)processFaceprintSegment:(id)arg1 resource:(id)arg2 textEncoderInput:(id *)arg3 faceObservation:(id *)arg4;	// IMP=0x00000000002fac6d
- (int)processImageSegment:(id)arg1 resource:(id)arg2 textEncoderInput:(id *)arg3 faceObservation:(id *)arg4 ageType:(unsigned short *)arg5;	// IMP=0x00000000002f86b1
- (struct CGRect)expandNormalizedRect:(struct CGRect)arg1;	// IMP=0x00000000002f863b
- (int)processEntitySegment:(id)arg1 tokenEmbeddingType:(long long)arg2 textEncoderInput:(id *)arg3 ageType:(unsigned short *)arg4;	// IMP=0x00000000002f7efc
- (id)gallery;	// IMP=0x00000000002f7799
- (long long)revision;	// IMP=0x00000000002f7741

@end
