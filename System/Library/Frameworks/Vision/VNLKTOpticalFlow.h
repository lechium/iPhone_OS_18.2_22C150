//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNLKTOpticalFlow : NSObject
{
    _Bool _isValid;	// 8 = 0x8
    _Bool _useNonLocalRegularization;	// 9 = 0x9
    int _width;	// 12 = 0xc
    int _height;	// 16 = 0x10
    int _levelCount;	// 20 = 0x14
    int _numScales;	// 24 = 0x18
    unsigned int _outputPixelFormat;	// 28 = 0x1c
    int _numWarpings;	// 32 = 0x20
    int _nlreg_radius;	// 36 = 0x24
    int _nlreg_padding;	// 40 = 0x28
    float _nlreg_sigma_l;	// 44 = 0x2c
    float _nlreg_sigma_c;	// 48 = 0x30
    float _nlreg_sigma_w;	// 52 = 0x34
}

@property(nonatomic) float nlreg_sigma_w; // @synthesize nlreg_sigma_w=_nlreg_sigma_w;
@property(nonatomic) float nlreg_sigma_c; // @synthesize nlreg_sigma_c=_nlreg_sigma_c;
@property(nonatomic) float nlreg_sigma_l; // @synthesize nlreg_sigma_l=_nlreg_sigma_l;
@property(nonatomic) int nlreg_padding; // @synthesize nlreg_padding=_nlreg_padding;
@property(nonatomic) int nlreg_radius; // @synthesize nlreg_radius=_nlreg_radius;
@property(nonatomic) _Bool useNonLocalRegularization; // @synthesize useNonLocalRegularization=_useNonLocalRegularization;
@property(nonatomic) int numWarpings; // @synthesize numWarpings=_numWarpings;
@property(nonatomic) unsigned int outputPixelFormat; // @synthesize outputPixelFormat=_outputPixelFormat;
@property(readonly, nonatomic) int numScales; // @synthesize numScales=_numScales;
@property(readonly, nonatomic) int levelCount; // @synthesize levelCount=_levelCount;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (_Bool)_validateOutputImage:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x000000000042e6bb
- (_Bool)_validateInputImage:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x000000000042e600
- (_Bool)estimateFlowStream:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x000000000042e5bb
- (_Bool)estimateFlowFromReference:(struct __CVBuffer *)arg1 target:(struct __CVBuffer *)arg2 error:(id *)arg3;	// IMP=0x000000000042e576
- (_Bool)setOutputUV:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x000000000042e531
- (void)waitUntilCompleted;	// IMP=0x000000000042e52b
- (id)initWithWidth:(int)arg1 height:(int)arg2 numScales:(int)arg3;	// IMP=0x000000000042e4d2

@end

