//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CSIBitmapWrapper : NSObject
{
    struct CGContext *_bitmapContext;	// 8 = 0x8
    NSData *_pixelData;	// 16 = 0x10
    unsigned int _pixelFormat;	// 24 = 0x18
    unsigned int _width;	// 28 = 0x1c
    unsigned int _height;	// 32 = 0x20
    unsigned long long _rowbytes;	// 40 = 0x28
    _Bool _allowsMultiPassEncoding;	// 48 = 0x30
    _Bool _allowsOptimalRowbytesPacking;	// 49 = 0x31
    _Bool _allowsCompactCompression;	// 50 = 0x32
    _Bool _allowsPaletteImageCompression;	// 51 = 0x33
    _Bool _allowsHevcCompression;	// 52 = 0x34
    _Bool _allowsDeepmapImageCompression;	// 53 = 0x35
    _Bool _allowsDeepmap2ImageCompression;	// 54 = 0x36
    _Bool _flipped;	// 55 = 0x37
    struct CGImage *_sourceImage;	// 56 = 0x38
    struct CGImage *_destImage;	// 64 = 0x40
    long long _texturePixelFormat;	// 72 = 0x48
    unsigned int _imageAlpha;	// 80 = 0x50
    double _compressionQuality;	// 88 = 0x58
    long long _compressionType;	// 96 = 0x60
    unsigned long long _colorSpaceID;	// 104 = 0x68
    long long _textureInterpretation;	// 112 = 0x70
    int _exifOrientation;	// 120 = 0x78
    long long _targetPlatform;	// 128 = 0x80
    NSString *_name;	// 136 = 0x88
}

@property(nonatomic) NSString *name; // @synthesize name=_name;
@property _Bool allowsDeepmap2ImageCompression; // @synthesize allowsDeepmap2ImageCompression=_allowsDeepmap2ImageCompression;
@property _Bool allowsDeepmapImageCompression; // @synthesize allowsDeepmapImageCompression=_allowsDeepmapImageCompression;
@property(nonatomic) int exifOrientation; // @synthesize exifOrientation=_exifOrientation;
@property(nonatomic) long long textureInterpretation; // @synthesize textureInterpretation=_textureInterpretation;
@property(nonatomic) unsigned long long colorSpaceID; // @synthesize colorSpaceID=_colorSpaceID;
@property long long targetPlatform; // @synthesize targetPlatform=_targetPlatform;
@property long long compressionType; // @synthesize compressionType=_compressionType;
@property(nonatomic) double compressionQuality; // @synthesize compressionQuality=_compressionQuality;
@property(nonatomic) _Bool flipped; // @synthesize flipped=_flipped;
@property _Bool allowsHevcCompression; // @synthesize allowsHevcCompression=_allowsHevcCompression;
@property _Bool allowsPaletteImageCompression; // @synthesize allowsPaletteImageCompression=_allowsPaletteImageCompression;
@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (id)compressedData:(_Bool)arg1 usedEncoding:(int *)arg2 andRowChunkSize:(unsigned int *)arg3;	// IMP=0x000000000001ce7e
@property _Bool allowsCompactCompression;
@property _Bool allowsOptimalRowbytesPacking; // @synthesize allowsOptimalRowbytesPacking=_allowsOptimalRowbytesPacking;
@property _Bool allowsMultiPassEncoding; // @synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding;
- (id)pixelData;	// IMP=0x000000000001cb18
- (void)setPixelData:(id)arg1;	// IMP=0x000000000001caea
- (unsigned int)sourceAlphaInfo;	// IMP=0x000000000001cae1
- (void)setSourceAlphaInfo:(unsigned int)arg1;	// IMP=0x000000000001cad8
- (struct CGContext *)bitmapContext;	// IMP=0x000000000001c78e
@property(nonatomic) unsigned long long rowbytes;
- (unsigned int)width;	// IMP=0x000000000001c771
- (unsigned int)height;	// IMP=0x000000000001c768
- (void)dealloc;	// IMP=0x000000000001c6fd
- (id)initWithCGImage:(struct CGImage *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 texturePixelFormat:(long long)arg4;	// IMP=0x000000000001c66a
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;	// IMP=0x000000000001c601

@end

