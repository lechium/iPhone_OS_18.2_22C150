//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIBeamPointerSettings
{
    double _minLength;	// 32 = 0x20
    double _maxLength;	// 40 = 0x28
    double _maxSnapLength;	// 48 = 0x30
    double _width;	// 56 = 0x38
}

+ (id)settingsControllerModule;	// IMP=0x0060000001118dc5
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double maxSnapLength; // @synthesize maxSnapLength=_maxSnapLength;
@property(nonatomic) double maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) double minLength; // @synthesize minLength=_minLength;
- (void)setDefaultValues;	// IMP=0x0000000001118d0b

@end
