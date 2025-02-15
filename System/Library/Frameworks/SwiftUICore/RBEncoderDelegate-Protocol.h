//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SwiftUICore/NSObject-Protocol.h>

@class NSData, RBEncoderSet, RBShaderLibrary;

@protocol RBEncoderDelegate <NSObject>

@optional
@property(readonly, nonatomic) RBEncoderSet *encoderSet;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"RBEncoderSet",?,R,N

- (NSData *)encodedFontSubsetData:(NSData *)arg1 cgFont:(struct CGFont *)arg2 error:(id *)arg3;
- (NSData *)encodedShaderLibraryData:(RBShaderLibrary *)arg1 error:(id *)arg2;
- (NSData *)encodedFontData:(NSData *)arg1 cgFont:(struct CGFont *)arg2 error:(id *)arg3;
- (_Bool)shouldEncodeFontSubset:(struct CGFont *)arg1;
- (NSData *)encodedCGFontData:(struct CGFont *)arg1 error:(id *)arg2;
- (NSData *)encodedImageData:(CDStruct_27041886)arg1 error:(id *)arg2;
- (NSData *)encodedMetadata;
@end

