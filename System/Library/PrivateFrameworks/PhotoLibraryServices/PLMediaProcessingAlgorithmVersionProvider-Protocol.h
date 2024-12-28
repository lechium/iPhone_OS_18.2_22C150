//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@protocol PLMediaProcessingAlgorithmVersionProvider <NSObject>
- (short)videoEmbeddingVersion;
- (short)imageEmbeddingVersion;
- (short)captionGenerationVersion;
- (short)vaLocationAnalysisVersion;
- (short)mediaAnalysisImageVersion;
- (unsigned long long)mediaAnalysisVersion;
- (short)vaAnalysisVersion;
- (short)stickerConfidenceAlgorithmVersion;
- (short)visualSearchAlgorithmVersion;
- (short)characterRecognitionAlgorithmVersion;
- (short)faceAnalysisVersion;
- (short)sceneAnalysisVersion;
@end
