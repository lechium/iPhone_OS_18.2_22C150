//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VNCIContrastWithPivotColorFilter
{
    NSNumber *_inputContrast;	// 88 = 0x58
    NSNumber *_inputPivot;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000002a781a
@property(copy, nonatomic) NSNumber *inputPivot; // @synthesize inputPivot=_inputPivot;
@property(copy, nonatomic) NSNumber *inputContrast; // @synthesize inputContrast=_inputContrast;
- (id)outputImage;	// IMP=0x00000000002a765f
- (id)initWithInputParameters:(id)arg1;	// IMP=0x00000000002a758d
- (id)init;	// IMP=0x00000000002a7542

@end
