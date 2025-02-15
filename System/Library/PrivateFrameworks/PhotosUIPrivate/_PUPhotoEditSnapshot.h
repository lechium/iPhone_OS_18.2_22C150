//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, PHAdjustmentData;

__attribute__((visibility("hidden")))
@interface _PUPhotoEditSnapshot : NSObject
{
    long long _workImageVersion;	// 8 = 0x8
    PHAdjustmentData *_adjustmentData;	// 16 = 0x10
    NSData *_imageData;	// 24 = 0x18
    NSData *_baseImageData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004a5723
@property(retain, nonatomic) NSData *baseImageData; // @synthesize baseImageData=_baseImageData;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(nonatomic) long long workImageVersion; // @synthesize workImageVersion=_workImageVersion;
- (id)_copyData:(id)arg1;	// IMP=0x00000000004a5546

@end

