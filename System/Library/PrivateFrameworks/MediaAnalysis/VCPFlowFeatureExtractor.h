//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VCPFlowFeatureExtractor
{
    int _numLevels;	// 48 = 0x30
    NSString *_inputBlobName;	// 56 = 0x38
    NSArray *_featureBlobNames;	// 64 = 0x40
    NSArray *_featureChannels;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001e6c72
- (int)setFeatureShape:(CDStruct_d09ae902 *)arg1 height:(int)arg2 width:(int)arg3 level:(int)arg4;	// IMP=0x00000000001e6bd1
- (int)extractFeatureFromImage:(struct __CVBuffer *)arg1 toFeature:(CDStruct_80570e6e *)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e696d
- (int)bindWithBuffers:(struct __CVBuffer *)arg1 imgFeature:(CDStruct_80570e6e *)arg2;	// IMP=0x00000000001e66e6
- (id)initModule:(int)arg1 config:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e659e

@end

